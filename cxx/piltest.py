import numpy as np
from PIL import Image

a = np.array(Image.open('../resource/sushiplate.jpg'))
b = [255,255,255] - a
im = Image.fromarray(b.astype('uint8'))
im.save('new.jpg')
