import numpy as np
import matplotlib.pyplot as pyplot
img1=np.array([np.array([200,200]),[np.array([200,200])])
img2=np.array([np.array([200,200]),[np.array([0,0])])
img3=np.array([np.array([200,0]),[np.array([200,0])])
kernel_horizontal = np.array([np.array([2, 2]), np.array([-2, -2])])
print(kernel_horizontal, 'is a kernel for detecting horizontal edges')

kernel_vertical = np.array([np.array([2, -2]), np.array([2, -2])])
print(kernel_vertical, 'is a kernel for detecting vertical edges')
# We will apply the kernels on the images by
# elementwise multiplication followed by summation
def apply_kernel(img, kernel):
    return np.sum(np.multiply(img, kernel))
    
