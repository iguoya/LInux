图表
========


.. plot::

   import matplotlib.pyplot as plt
   import numpy as np
   x = np.random.randn(1000)
   plt.hist( x, 20)
   plt.grid()
   plt.title(r'Normal: $\mu=%.2f, \sigma=%.2f$'%(x.mean(), x.std()))
   plt.show()

"""



这是我的公开日记

.. math::

  \int_{-\infty}^{\infty}\frac{e^{i\phi}}{1+x^2\frac{e^{i\phi}}{1+x^2}}


.. chart:: 0-diagrams/test.json

    This is the caption of the chart

.. plot::

   import matplotlib.pyplot as plt
   import numpy as np
   x = np.random.randn(1000)
   plt.hist( x, 20)
   plt.grid()
   plt.title(r'Normal: $\mu=%.2f, \sigma=%.2f$'%(x.mean(), x.std()))
   plt.show()


plot

.. plot::

   import matplotlib.pyplot as plt
   import numpy as np

   x = np.linspace(-6, 6, 1000)
   y = np.sin(x)
   plt.plot(x, y)
   plt.title("sin(x)")

   # 最后必须要调用 show 方法, 才能显示
   plt.show()

对对对



.. chart::

   dog: 100
   cat: 80
   rabbit: 40