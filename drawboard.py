#!/usr/bin/env python
# -*- coding: utf-8 -*-

from pygase import *


class Brush():

    def __init__(self, screen, color=(0, 0, 0), width=2,
            style='solid', image=None):
        self.screen = screen
        self.color = color
        self.width = width
        self.last_pos = None
        self.style = style
        self.image = pygame.image.load("brush.png").convert_alpha()
        self.prepare_brush_image()

    def prepare_brush_image(self):
        self.now_image = self.image.subsurface((0, 0), (self.width, self.width))

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
                self.screen.blit(self.now_image, p)

        else:
            return

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


class Board(Application):
    def __init__(self):
        super(Board, self).__init__(display=((800, 600), 0, 32),
                allowed=[QUIT, ACTIVEEVENT, KEYDOWN, KEYUP,
                MOUSEBUTTONDOWN, MOUSEMOTION, MOUSEBUTTONUP],
                app_name="Drawing Board")

        self.color = (0, 0, 0)
        self.width = 4
        self.style_list = ('solid', 'image', 'line')

        def style_chooser_pressed(button, eventup):
            self.brush.style = self.style_list[button.choice]

        #self.scrollbar1 = Scrollbar(variable=self.width)
        #self.add_element(self.scrollbar1)
        self.style_chooser = \
                ChoiceButton(Rect(600-30-80, 600-30-40, 80, 40),
                choice_initial=1, max_choice=len(self.style_list),
                onpressed=style_chooser_pressed);
        self.add_element(self.style_chooser)

        self.brush = Brush(self.screen,
                color=self.color, width=self.width,
                style=self.style_list[self.style_chooser.choice])

    def clear_board(self):
        self.screen.fill((255, 255, 255))

    def case_event(self, event):
        super(Board, self).case_event(event)

        if event.type == KEYDOWN:
            if event.key == K_ESCAPE:
                self.case_event(new_event(QUIT, message='esc'))

            elif event.key == K_n and event.mod == KMOD_CTRL:
                self.maininit(True)

        elif event.type == KEYUP:
            pass

        elif event.tochild == []:
            print('main case_event: event is ', event)
            if event.type == MOUSEBUTTONDOWN:
                self.brush.mouse_down(event.pos)

            elif event.type == MOUSEBUTTONUP:
                self.brush.mouse_up(event.pos)

            elif event.type == MOUSEMOTION:
                self.brush.mouse_motion(event.pos)

    def maininit(self, already=False):
        self.clear_board()
        super(Board, self).maininit()


if __name__ == '__main__':
    Board().run()
