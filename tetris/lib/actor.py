from pygame.locals import Rect
import pygame.image
import pygame.sprite
from pygase import Element
from VectorClass2d import Vec2d

def image_name(name, width, height, number=None):
    return name + '_' + str(width) + 'x' + str(height) + ('_'
            + str(number) if number is not None else '')

def cut_sub_images(image, width, height, number):
    return [image.subsurface(width*i, 0, width, height)
            for i in range(number)]

def load_sub_images(name, width, height, number):
    image = pygame.image.load(name).convert_alpha()
    return cut_sub_images(image, width, height, number)

def add_and_warp(v, max, inc=1):
    v += inc
    while v > max:
        v -= max
    return v


from glak import GPhysic2DObject

class Imageactor(GPhysic2DObject):
    def __init__(self, pos, width=82, height=77, rate=100, number=18,
            name=None, images=[]):

        size = (width, height) 
        GPhysic2DObject.__init__(self, pos, size)
        self._rate = rate
        self._width = self.rect.width
        self._height = self.rect.height
        self._number = number
        self._name = name
        self.images = images
        rect = Rect(0, 0, self._width, self._height)
        if len(self.images) == 0:
            self.images = load_sub_images(self._name,
                    self._width, self._height, self._number)

        self.order = 0
        self.surface = self.images[self.order]
        self.time_passed = 0.0

    def timetick(self, time_passed):
        Element.timetick(self, time_passed)
        self.time_passed += time_passed
        #print('timetick time_passed = ', time_passed)
        #print('timetick self.time_passed = ', self.time_passed)
        if self.time_passed > self._rate:
            frame_passed = self.time_passed / self._rate
            self.time_passed -= self._rate
            #print('timetick rate frame_passed = ', frame_passed)
            #print('timetick self.order from', self.order)
            self.order = round(add_and_warp(self.order,
                self._number, frame_passed))
            #print('timetick self.order to', self.order)
            self.surface = self.images[self.order]


class Sunflower(Imageactor):
    def __init__(self, pos):
        Imageactor.__init__(self, pos, width=82, height=77,
                rate=100, number=18, name='sunflower_82x77_18.png')
