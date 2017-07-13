#!/usr/bin/env python
# -*- coding: utf-8 -*-


import pygame
from pygame.locals import *
from excepist import QuitException
from VectorClass2d import Vec2d


MOUSEMOTIONENTER = USEREVENT+1
MOUSEMOTIONLEAVE = USEREVENT+2


def _setup_event(event):
    event.tochild = []

def _new_event(*args, **kwargs):
    event = pygame.event.Event(*args, **kwargs)
    _setup_event(event)
    return event

new_event = _new_event

def _get_events():
    return pygame.event.get()

def _wait_event():
    return pygame.event.wait()

def _post_event(event):
    pygame.event.post(event)

class Application():
    def __init__(self, display=((640, 480), 0, 32), allowed=True,
            app_name="PYGase App", frameps=30, elements=[], bgcolor=None):

        if len(display) >= 2 and display[1] & DOUBLEBUF:
            self._update = pygame.display.flip
        else:
            self._update = pygame.display.update
        self.screen = pygame.display.set_mode(*display)
        self.frameps = frameps
        self.bgcolor = bgcolor
        self.clock = pygame.time.Clock()
        pygame.display.set_caption(app_name)
        if allowed is not True:
            pygame.event.set_allowed(allowed)
        self.elements = elements

    def add_element(self, element):
        self.elements.append(element)

    def remove_element(self, element):
        self.elements.remove(element)

    def run(self):
        self.maininit()
        try: self.mainloop()
        except QuitException: pass

    def maininit(self):
        self._time_passed = 0

    def mainloop(self):
        while True:
            time_passed = self.clock.tick(self.frameps)
            self.timetick(time_passed)
            for event in _get_events():
                _setup_event(event)
                self.case_event(event)

            self.timepaint()
            preabl = self.prerend_all()
            if preabl:
                self.got_preabl_elem(preabl)
            self.render_all()
            self.update()

    def timepaint(self):
        self.paint()

    def timetick(self, time_passed):
        self._time_passed = time_passed
        self.timetick_all(time_passed)

    def timetick_all(self, time_passed):
        for element in self.elements:
            element.timetick(time_passed)

    def paint(self):
        self.paint_all()
        self.do_paint()

    def paint_all(self):
        for element in self.elements:
            element.paint()

    def do_paint(self):
        pass

    def update(self):
        self._update()

    def case_event(self, event):
        self._case_event_all(event)

        if event.type == QUIT:
            self.__quit__()
        else:
            pass

    def _case_event_all(self, event):
        for element in self.elements:
            element._case_event(event)

    #def paint_all(self):
        #for element in self.elements:
            #element.paint()

    def render_all(self):
        for element in self.elements:
            element.render(self.screen)

    def prerend_all(self):
        preabl = []
        for element in self.elements:
            if not element.prerend(self.screen, self.prefill_rect):
                preabl.append(element)
        return preabl

    #def got_preabl_elem(self, preabl):
        #self.fillbg_prerend()

    def got_preabl_elem(self, preabl):
        for i in preabl:
            self.preabl_elem(i)

    def preabl_elem(self, element):
        self.prefill_rect(self.screen, element.rect)

    def fillbg_prerend(self):
        print('pygase.py: fillbg_prerend')
        self.screen.fill(self.bgcolor)

    def prefill_rect(self, screen, rect):
        if self.bgcolor is not None:
            pygame.draw.rect(screen, self.bgcolor, rect)
            return True
        else: return None

    def __quit__(self):
        pygame.quit()
        raise QuitException('quit')


def _get_event_pos(event):
    return event.pos if hasattr(event, 'pos') else pygame.mouse.get_pos()


class RenderElementIntf():

    def __init__(self):
        pass

    def paint(self):
        pass

    def _case_event(self, event):
        pass

    def prerend(self, screen, prefunc):
        return False

    def render(self, screen):
        pass

    def __quit__(self):
        pass

RenderElement = RenderElementIntf


class BasicRectElement(RenderElement):
    def __init__(self, rect, surface=True):
        self.rect = Rect(rect)# if isinstance(rect, Rect) else Rect(rect)
        self.surface = pygame.Surface(rect.size) \
                if surface is True else surface


class SimpleRectElement(BasicRectElement):
    def __init__(self, rect, surface=True):
        super(SimpleRectElement, self).__init__(rect, surface)
        self.mouseover = self.is_over()

    def is_over(self, pos=None):
        if pos is None:
            pos = pygame.mouse.get_pos()
        if not hasattr(pos, '__getitem__'):
            pos = _get_event_pos(pos)
        #if self.rect.topleft <= pos and self.rect.topright > pos:
        pos = Vec2d(pos)
        topleft = Vec2d(self.rect.topleft)
        topright = topleft + self.rect.size
        #topright = Vec2d(self.rect.topright)
        if topleft.x <= pos.x and topleft.y <= pos.y \
                and topright.x > pos.x and topright.y > pos.y:
            return True
        else: return False

    def paint(self):
        pass

    def timetick(self, time_passed):
        pass

    def render(self, screen):
        screen.blit(self.surface, self.rect.topleft)


class BasicSubElement(SimpleRectElement):
    def __init__(self, rect):
        super(BasicSubElement, self).__init__(rect, None)
        self.screen = None

    def prerend(self, screen, prefunc):
        self.screen_is(screen)
        return self.predraw(prefunc)

    def render(self, screen):
        self.screen_is(screen)
        self.draw()

    def screen_is(self, screen):
        if self.screen is None:
            self.screen = screen
            self.subsurface = screen.subsurface(self.rect)
        else: assert self.screen == screen

    def draw(self):
        pass

class GraphicElement(BasicSubElement):
    def __init__(self, pos, size):
        self.pos = Vec2d(pos)
        self.size = Vec2d(size)
        rect = Rect(self.pos - self.size / 2, self.size)
        super(GraphicElement, self).__init__(rect)

    @property
    def rect(self):
        return Rect(self.pos - self.size/2, self.size)

    @rect.setter
    def rect(self, rect):
        rect = Rect(rect)
        self.size = Vec2d(rect.size)
        self.pos = Vec2d(rect.topleft + self.size/2)


class Element(SimpleRectElement):

    def case_event(self, event):
        if event.type == QUIT:
            self.__quit__()

    def _extra_events(self, event):
        if self.is_over(event):
            print('appending self')
            event.tochild.append(self)
            print('elem _extra_events: event is ', event)
        if event.type == MOUSEMOTION:
            if self.is_over(event):
                #print('is_over: self.mouseover', self.mouseover)
                prev_mouseover = bool(self.mouseover)
                self.mouseover = True
                if not prev_mouseover:
                    print('post MOUSEMOTIONENTER')
                    self._post_event(_new_event(MOUSEMOTIONENTER))
            else:
                #print('not_over: self.mouseover', self.mouseover)
                prev_mouseover = bool(self.mouseover)
                self.mouseover = False
                if prev_mouseover:
                    print('post MOUSEMOTIONLEAVE')
                    self._e_post_event(_new_event(MOUSEMOTIONLEAVE))

    def _e_extra_events(self, event):
        pass

    def _case_event(self, event):
        self._extra_events(event)
        if self.is_over(event):
            self._e_case_event(event)

    def _e_case_event(self, event):
        self._e_extra_events(event)
        self.case_event(event)

    _post_event = _case_event
    _e_post_event = _e_case_event
    post_event = case_event

    def __quit__(self):
        pass


class BasicButton(Element):
    def __init__(self, rect,
            btnon=(64, 64, 64),
            btnat=(32, 32, 32),
            btnoff=(0, 0, 0),
            onpressed=lambda *x: None):

        super(BasicButton, self).__init__(rect)

        self.btnon = btnon
        self.btnat = btnat
        self.btnoff = btnoff
        self.color = btnoff
        self.isdown = False
        self.onpressed = onpressed

    def case_event(self, event):
        super(BasicButton, self).case_event(event)

        if event.type == MOUSEMOTIONENTER:
            print('enter')
            self.color = self.btnat
            self.paint()
        elif event.type == MOUSEBUTTONDOWN:
            print('down')
            self.color = self.btnon
            self.isdown = True
            self.paint()
        elif event.type == MOUSEMOTIONLEAVE or event.type == MOUSEBUTTONUP:
            print('up or leave')
            self.color = self.btnoff
            prev_isdown = self.isdown
            self.isdown = False
            self.paint()
            if prev_isdown:
                self.pressed(event)

    def paint(self):
        self.surface.fill(self.color)

    def pressed(self, eventup):
        print('BasicButton: pressed eventup = ', eventup)
        onpressed = self.onpressed
        onpressed(self, eventup)


class ChoiceButton(BasicButton):
    def __init__(self, rect,
            btnon=(64, 64, 64),
            btnat=(32, 32, 32),
            btnoff=(0, 0, 0),
            onpressed=lambda *x: None,
            choice_initial=0,
            max_choice=1):

        super(ChoiceButton, self).__init__(rect,
                btnon, btnat, btnoff, onpressed);

        self.max_choice = max_choice
        self.choice = self.variable = choice_initial

    def pressed(self, eventup):
        self.choice = self.choice + 1 if \
                self.choice < self.max_choice - 1 else 0
        print('ChoiceButton: choice is', self.choice)
        super(ChoiceButton, self).pressed(eventup)
