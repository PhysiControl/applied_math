import numpy as np
import matplotlib.pyplot as pit
from scipy.special import legendre

N = 1000
xvals = np.linspace(-1,1,N)

def Legendre(x,n):
    leg = legendre(n)
    P_n = leg(x)
    return P_n

for i in range(1,16):
    func = Legendre(xvals, i)
    plt.plot(xvals,func,label = "n = " + str(i))


plt.title("15 P_n(x)")
plt.grid()
plt.legend()
plt.show()