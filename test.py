import matplotlib.pyplot as plt
import random
import numpy as np
from pylab import mpl

mpl.rcParams['font.sans-serif'] = ['汉仪文黑-85W Heavy']

random.seed(0)
data1 = []
data2 = []
n = 10000
epoches = 2000
prob = 0.006
prob_trans = 0.016

for i in range(n):
    curcnt = 0
    counter = 0
    for epoch in range(epoches):
        rand = random.random()
        counter += 1
        if rand < prob:
            curcnt += 1
            counter = 0
        if counter == 90:
            curcnt += 1
            counter = 0
    data1.append(curcnt)

plt.subplot(121)
plt.hist(data1, bins=np.linspace(10, 50, 20), density=False)
plt.xlim(10, 50)
plt.ylim(0, 4000)
plt.title('90')

for i in range(n):
    curcnt = 0
    for epoch in range(epoches):
        rand = random.random()
        if rand < prob_trans:
            curcnt += 1
    data2.append(curcnt)

plt.subplot(122)
plt.hist(data2, bins=np.linspace(10, 50, 20), density=False)
plt.xlim(10, 50)
plt.ylim(0, 4000)
plt.title('no90')
plt.show()
