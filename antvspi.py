#!/usr/bin/env python
# -*- coding: utf-8 -*-


from VectorClass import Vec2d
import pygame
from pygame.locals import *
from random import randint
from sys import argv
import math


FULL_SCREEN = True if len(argv) > 1 and argv[1] == 'full' else False

ANT_MAX = 32
if FULL_SCREEN:
    SCREEN_SIZE = (1920, 1080)
    SCREEN_ATTR = FULLSCREEN | HWSURFACE
else:
    SCREEN_SIZE = (640, 480)
    SCREEN_ATTR = NOFRAME


class GameEntity(object):

    def __init__(self, world, name, image):
        self.world = world
        self.name = name
        self.image = image
        self.location = Vec2d(0, 0)
        self.destination = Vec2d(0, 0)
        self.speed = 0
        self.brain = StateMachine()
        self.id = 0

    def __str__(self):
        return "GameEnitity %s" % self.id

    def render(self, surface):
        surface.blit(self.image, self.location + self.image.get_size())

    def process(self, time_passed):
        self.brain.think()
        if self.speed > 0 and not self.reached_destination():
            vec_to_destination = self.destination - self.location
            distance_to_destination = vec_to_destination.length
            heading = vec_to_destination.normalized()
            travel_distance = min(distance_to_destination, self.speed * time_passed)
            self.location += travel_distance * heading

    def close_entity(self, name, range=100):
        world.close_entity(name, self.location, range)

    def set_destination(self, destination):
        self.destination = destination

    def reached_destination(self):
        return self.location == self.destination

    def random_destination(self):
        w, h = SCREEN_SIZE
        def getrand(q, w):
            return randint(-q, w-q)
            def myfun(r, w=1):
                return 1/(r-w) if r != w else 10000000000000000000000#math.inf
            r = randint(-w, w)
            v = myfun(w-q, w)*w + myfun(r, w)*w
            #v = h*(r/h)**3
            if v < 0 or v >= w:
                return getrand(y, w)
            else: return int(v)
            #v = math.sqrt(r if r >= 0 else -r)
            #return v if r >= 0 else -v
        self.destination = self.location + Vec2d(getrand(self.location.x, w), getrand(self.location.y, h))


class World(object):

    def __init__(self, entities={}):
        self.entities = entities
        self.entity_id = len(entities)

    def __getitem__(self, entity_id):
        if entity_id in self.entities:
            return self.entities[entity_id]
        else:
            return None
    get = __getitem__

    def append(self, entity):
        self.entities[self.entity_id] = entity
        entity.id = self.entity_id
        self.entity_id += 1

    def remove(self, entity):
        del self.entities[entity.id]

    def process(self, time_passed):
        for entity in self.entities.values():
            entity.process(time_passed)

    def render(self, surface):
        surface.fill((0, 0, 0))
        for entity in self.entities.values():
            entity.render(surface)

    def close_entities(self, name, location, range=100):
        location = Vec2d(location)
        for entity in self.entities.values():
            distance = location.get_distance(entity.location)
            if distance < range:
                yield entity

    def close_entity(self, name, location, range=100):
        #print('close_entity: searching in world for', name, 'self location', location, 'with range', range)
        entities_list = list(self.close_entities(name, location, range))
        entities_count = len(entities_list)
        if entities_count == 0:
            #print('close_entity: not found')
            return 0
        #print('close_entity: found, entities_count =', entities_count)
        return entities_list[0]


class Ant(GameEntity):

    def __init__(self, world, image):
        GameEntity.__init__(self, world, 'ant', image)
        self.carry_image = None

        self.brain.add_state(AntExploring(self))
        self.brain.add_state(AntSeeking(self))

    def __carry(self, image):
        self.carry_image = image

    def __drop(self, surface):
        if self.carry_image is not None:
            x, y = self.location
            w, h = self.carry_image.get_size()
            surface.blit(self.carry_image, (x-w, y-h/2))
            self.carry_image = None

    def render(self, surface):
        GameEntity.render(self, surface)
        if self.carry_image is not None:
            x, y = self.location
            w, h = self.carry_image.get_size()
            surface.blit(self.carry_image, (x-w, y-h/2))


class State():

    def __init__(self, name):
        self.name = name

    def entry_actions(self):
        pass
    def do_actions(self):
        pass
    def check_conditions(self):
        return None
    def exit_actions(self):
        pass


class AntExploring(State):
    def __init__(self, ant):
        State.__init__(self, 'Exploring')
        self.ant = ant

    def do_actions(self):
        if self.ant.reached_destination():
            print(str(self.ant), ': rexploring')
            self.ant.random_destination()

    def check_conditions(self):
        print(str(self.ant), ': checking conditions');
        ant_friend = self.ant.close_entity("ant", 100 + randint(-27, 27))
        if ant_friend is not None:
            print(str(self.ant), 'found friend')
            self.ant.set_destination(ant_friend)
            return 'Seeking'
        else: return None

    def enter_actions(self):
        self.ant.speed = .12 + randint(-30, 30) * .0001
        self.ant.random_destination()


class AntSeeking(State):
    def __init__(self, ant):
        State.__init__(self, 'Seeking')
        self.ant = ant

    def do_actions(self):
        print(str(self.ant), ': seeking')

    def check_conditions(self):
        return 'Exploring'

    def random_destination(self):
        w, h = SCREEN_SIZE
        self.ant.destination = Vec2d(randint(0, w), randint(0, h))

    def enter_actions(self):
        self.ant.speed = 120 + randint(-30, 30)
        self.random_destination()


class StateMachine():
    def __init__(self, states={}, active_state=None):
        self.states = states
        self.active_state = active_state

    def add_state(self, state):
        self.states[state.name] = state

    def think(self):
        if self.active_state is None:
            print('think: active_state is None')
            return
        self.active_state.do_actions()
        new_state_name = self.active_state.check_conditions()
        if new_state_name is not None:
            print('think: to new_state')
            self.set_state(new_state_name)

    def set_state(self, new_state_name):
        if self.active_state is not None:
            self.active_state.exit_actions()
        self.active_state = self.states[new_state_name]
        self.active_state.enter_actions()


if __name__ == '__main__':

    pygame.init()
    screen = pygame.display.set_mode(SCREEN_SIZE, SCREEN_ATTR, 32)
    pygame.display.set_caption('Ant Gamw')
    clock = pygame.time.Clock()

    ant_image = pygame.image.load('ant.png').convert_alpha()

    world = World()

    def random_ant():
        ant = Ant(world, ant_image)
        ant.location = Vec2d(randint(0, w), randint(0, h))
        ant.brain.set_state('Exploring')
        return ant

    w, h = SCREEN_SIZE
    for ant_no in range(ANT_MAX):
        world.append(random_ant())

    while True:
        for event in pygame.event.get():
            if event.type == QUIT or event.type == KEYDOWN and event.key == K_ESCPE:
                pygame.quit()
                exit()

        time_passed = clock.tick(60)
        world.process(time_passed)
        world.render(screen)

        pygame.display.update()
