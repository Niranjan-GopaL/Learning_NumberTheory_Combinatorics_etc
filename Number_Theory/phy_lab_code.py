import matplotlib.pyplot as plt
from matplotlib.pyplot import figure
from math import sqrt

r_vals = [ 0.6, 1.1, 2, 2.4, 3.20, 3.30, 1 + sqrt(6) - 0.2, 1 + sqrt(6)+0.001, 3.50, 3.5699, 1 + sqrt(8), 4.1, 5.1, ]

num = 70

for r in r_vals:
    figure(figsize=(10, 5), dpi=80)
    xi = 0.1
    vals = []
    vals1 = dict()
    for i in range(num):
        vals.append(xi)
        xi = r*xi*(1-xi)

    n = [i for i in range(num)]
    if(r<4):
        plt.ylim([0,1])
        plt.text(-0.8, 0.94, f'r = {r}', size = 15)
    else:
        plt.ylim([-1,1])
        plt.text(-0.8, 0.9, f'r = {r}', size = 15)
    plt.plot(n,vals)
    
    plt.ylabel("Xₙ",fontdict = {"size":15})
    plt.xlabel("n",fontdict = {"size":15})
    plt.show()


















    