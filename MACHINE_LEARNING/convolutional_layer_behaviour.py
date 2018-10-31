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


# Visualizing img1
plt.imshow(img1)
plt.axis('off')
plt.title('img1')
plt.show()
# Checking for horizontal and vertical features in image1
print('Horizontal edge confidence score:', apply_kernel(img1,
                                            kernel_horizontal))
print('Vertical edge confidence score:', apply_kernel(img1,
                                            kernel_vertical))

# Visualizing img2
plt.imshow(img2)
plt.axis('off')
plt.title('img2')
plt.show()

# Checking for horizontal and vertical features in image2
print('Horizontal edge confidence score:', apply_kernel(img2,
                                            kernel_horizontal))
print('Vertical edge confidence score:', apply_kernel(img2,
                                            kernel_vertical))

# Visualizing img3
plt.imshow(img3)
plt.axis('off')
plt.title('img3')
plt.show()

# Checking for horizontal and vertical features in image3
print('Horizontal edge confidence score:', apply_kernel(img3,
                                            kernel_horizontal))
print('Vertical edge confidence score:', apply_kernel(img3,
                                            kernel_vertical)) 
