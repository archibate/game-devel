import pygame
from pygame.locals import *
from actor import Sunflower
from pygase import *
from glak import GSimplePhysic2DCircle as SimpleBall


class Game(Application):

    def __init__(self):
        Application.__init__(self, app_name="TD Game", frameps=50)

        size = self.screen.get_size()
        self.add_element(Sunflower(Vec2d(size)/2))
        self.add_element(SimpleBall(Vec2d(size)/2, 20, (64, 64, 128)))

    def maininit(self):
        self.bgcolor = (255, 255, 255)
        Application.maininit(self)
        self.fillbg_prerend()

    def case_event(self, event):
        if event.type == KEYDOWN:
            if event.key == K_ESCAPE:
                self.case_event(new_event(QUIT))

            elif event.key == K_SPACE:
                print('Space')

        Application.case_event(self, event)


if __name__ == '__main__':
    Game().run()
