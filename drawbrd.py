#!/usr/bin/env python
# -*- coding: utf-8 -*-

import pygame
from pygame.locals import *
from excepist import QuitException
from VectorClass2d import Vec2d


class App():
    def __init__(self, display=((640, 480)), allowed=True,
            app_name="App", frameps=30, elements=[]):

        self.screen = pygame.display.set_mode(*display)
        self.frameps = frameps
        self.clock = pygame.time.Clock()
        pygame.display.set_caption(app_name)
        if allowed is not True:
            pygame.event.set_allowed(allowed)
        self.elements = elements

    def add_element(self, element):
        self.elements.append(element)

    def run(self):
        self.maininit()
        try: self.mainloop()
        except QuitException: pass

    def mainloop(self):
        while True:
            self.clock.tick(self.frameps)
            for event in pygame.event.get():
                self.case_event(event)

            self.render_all()
            self.update()

    def maininit(self):
        pass

    def update(self):
        pygame.display.update()

    def case_event(self, event):
        if event.type == QUIT:
            self.__quit__()
        else:
            pass

        self._case_event_all(event)

    def _case_event_all(self, event):
        for element in self.elements:
            element._case_event(event)

    def paint(self):
        for element in self.elements:
            element.paint()

    def render_all(self):
        for element in self.elements:
            element.render(self.screen)

    def __quit__(self):
        pygame.quit()
        raise QuitException('quit')


class Element():
    def __init__(self, rect):
        self.surface = pygame.Surface(rect.size)
        self.rect = rect if isinstance(rect, Rect) else Rect(rect)

    def is_over(self, pos):
        if isinstance(pos, pygame.event.Event):
            pos = self._get_event_pos(pos);
        #if self.rect.topleft <= pos and self.rect.topright > pos:
        pos = Vec2d(pos)
        topleft = Vec2d(self.rect.topleft)
        topright = topleft + self.rect.size
        #topright = Vec2d(self.rect.topright)
        if topleft.x <= pos.x and topleft.y <= pos.y \
                and topright.x > pos.x and topright.y > pos.y:
            return True
        else: return False

    def case_event(self, event):
        if event.type == QUIT:
            self.__quit__()

    def _get_event_pos(self, event):
        return event.pos if hasattr(event, 'pos') \
                else pygame.mouse.get_pos()

    def _extra_events(self, event):
        if event.type == MOUSEMOTION:
            if self.is_over(event):
                if not self.mouseover:
                    self.case_event(self)
                self.mouseover = True
            else:
                self.mouseover = False

    def _case_event(self, event):
        self._extra_events(event)
        if self.is_over(event):
            self.case_event(event)

    def paint(self):
        pass

    def render(self, screen):
        screen.blit(self.surface, self.rect.topleft)


class BasicButton(Element):
    def __init__(self, rect,
            btnon_color=(64, 64, 64),
            btnat_color=(32, 32, 32),
            btnoff_color=(0, 0, 0),
            onpressed=lambda *x: None):

        super(BasicButton, self).__init__(rect)

        self.btnon_color = btnon_color
        self.btnat_color = btnat_color
        self.btnoff_color = btnoff_color
        self.color = btnoff_color
        self.onpressed = onpressed

    def case_event(self, event):
        if event.type == MOUSEMOTIONENTER:
            if self.color is not self.btnon_color:
                self.color = self.btnat_color
            self.paint()
        if event.type == MOUSEMOTIONLEAVE:
            self.color = self.btnoff_color
            self.paint()
        if event.type == MOUSEBUTTONDOWN:
            self.color = self.btnon_color
            self.paint()
        elif event.type == MOUSEBUTTONUP:
            self.color = self.btnoff_color
            self.paint()
            onpressed = self.onpressed
            onpressed(self, event)

        print('BasicButton: case_event(%s)' % str(event));

        super(BasicButton, self).case_event(event)

    def paint(self):
        self.surface.fill(self.color)


class Brush():

    def __init__(self, screen, color=(0, 0, 0), width=2,
            style='solid', image=None):
        self.screen = screen
        self.color = color
        self.width = width
        self.last_pos = None
        self.style = style
        self.image = pygame.image.load("brush.png").convert_alpha()

    def mouse_down(self, pos):
        self.last_pos = [pos]
        self.mouse_motion(pos)

    def mouse_up(self, pos):
        self.mouse_motion(pos)
        self.last_pos = []

    def draw(self, p0, p1):
        if self.style == 'line':
            pygame.draw.line(self.screen, self.color,
                    p0, p1, self.width)
            return

        elif self.style == 'solid':
            def draw_it(p):
                pygame.draw.circle(self.screen, self.color, p, self.width)

        elif self.style == 'image':
            def draw_it(p):
                self.screen.blit(self.image, p)

        for p in self.points_between(p0, p1):
            draw_it(p)


    def points_between(self, p0, p1):
        last = Vec2d(p0)
        points = [last]
        step = p1 - last
        length = step.normalize_return_length()
        for i in range(int(length)):
            points.append(points[-1] + step)
        points = map(lambda x: (round(x[0]), round(x[1])), points)
        return list(set(points))

    def mouse_motion(self, pos):
        if self.last_pos:
            self.draw(self.last_pos[0], pos)
            self.last_pos.insert(0, pos)


class Board(App):
    def __init__(self):
        super(Board, self).__init__(display=((800, 600), 0, 32),
                allowed=[QUIT, ACTIVEEVENT, KEYDOWN, KEYUP,
                MOUSEBUTTONDOWN, MOUSEMOTION, MOUSEBUTTONUP],
                app_name="Drawing Board")

        self.color = (0, 0, 0)
        self.width = 4
        self.style = 'solid'

        #self.scrollbar1 = Scrollbar(scrollvar=self.width)
        #self.add_element(self.scrollbar1)
        self.button1 = BasicButton(Rect(600-30-80, 600-30-40, 80, 40));
        self.add_element(self.button1)

        self.brush = Brush(self.screen,
                color=self.color, width=self.width,
                style=self.style)

    def clear_board(self):
        self.screen.fill((255, 255, 255))

    def case_event(self, event):
            if event.type == KEYDOWN:
                if event.key == K_ESCAPE:
                    self.case_event(pygame.event.Event(QUIT, message='esc'))

                elif event.key == K_n and event.mod == KMOD_CTRL:
                    self.maininit(True)

            elif event.type == KEYUP:
                pass

            elif event.type == MOUSEBUTTONDOWN:
                self.brush.mouse_down(event.pos)

            elif event.type == MOUSEBUTTONUP:
                self.brush.mouse_up(event.pos)

            elif event.type == MOUSEMOTION:
                self.brush.mouse_motion(event.pos)

            super(Board, self).case_event(event)

    def maininit(self, already=False):
        self.clear_board()
        super(Board, self).maininit()


if __name__ == '__main__':
    Board().run()
