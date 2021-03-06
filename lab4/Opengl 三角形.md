# Opengl 三角形

- Vertex Array Object， VAO 顶点数组对象
- Vertex Buffer Object， VBO 顶点缓冲对象
- Element buffer object， EBO or Index Buffer Object，IBO 索引缓冲对象

## 基础概念

- Opengl中任何事物都在3D空间中
- Graphics Pipeline 图形渲染管线
  - 3D -> 2D
  - 坐标 -> 像素
  - 顶点数据 -> **顶点着色器 **-> 图元装配 -> **几何着色器** -> 光栅化 -> **片段着色器** -> 测试与混合
- 顶点数据： 以数组的形式传递3个3D坐标作为输入
- 顶点着色器：把3D坐标转为另一种3D坐标，同时允许我们对顶点属性进行一些基本处理。它会在GPU上创建内存用于储存我们的顶点数据，还要配置OpenGL如何解释这些内存，并且指定其如何发送给显卡。顶点着色器接着会处理我们在内存中指定数量的顶点。
- 图元装配：讲顶点着色器的输出顶点作为输入，装配成指定图元的形状
- 几何着色器：把图元形式的一系列顶点的集合作为输入，可以通过产生新顶点构造出新图元来生成其他形状
- 光栅化阶段：将图元映射成最终屏幕上相应的像素，生成片段（Opengl渲染一个像素所需的所有数据），然后进行裁切，丢弃超出视图以外的所有像素
- 片段着色器：计算一个像素的最终颜色，通常包含3D场景的数据，比如光照阴影光的颜色等
- Alpha测试和混合，检测片段的深度，检查透明度，对物体进行混合
- 对于大多数场景，我们只需要配置顶点和片段着色器就行了，几何着色器是可选的，通常使用默认即可

## 顶点输入

- 仅当3D坐标在三个轴上都为-1.0和1.0的范围才处理
- 只有在标准化设备坐标范围之内的坐标才会最终呈现在屏幕上，y轴正方向为向上，(0,0)坐标是图像的中心
- 你的标准化设备坐标会变换成屏幕空间坐标，使用`glViewpoint`函数提供的数据，进行视口变换完成的，所得的屏幕空间坐标又会被变换成片段输入到片段着色器中
- 使用float数组定义一个顶点
- 通过VBO管理这个内存，在GPU内存中储存大量顶点，尝试一次性发送尽可能多的数据
- VBO和Opengl中的其他对象一样，有独一无二的ID，可以使用`glGenBuffers`函数和一个缓冲ID生成一个VBO对象，我们可以使用`glBindBuffer`把新创建的缓冲绑定到`GL_AARAY_BUFFER`缓冲对象上
- 只会我们使用的任何缓冲调用都会配置当前绑定的VBO，然后可以使用`glBufferData`函数，它会把之前定义的顶点数据复制到缓冲的内存中
- 然后我们就把顶点数据储存在显卡的内存中，用VBO这个顶点缓冲对象管理

## 顶点着色器

- 使用着色器语言GLSL编写顶点着色器，然后编译这个着色器
- 每个着色器起始于一个版本声明，并表示我们使用核心模式
- `in` 关键字声明所有的输入顶点属性

## 编译着色器

- 将顶点着色器源码储存在一个字符串中
- 创建着色器对象，使用ID来引用
- 将着色器源码附加到着色器对象中，然后编译它

## 片段着色器

- 只需要一个输出变量，是一个4分量向量，表示的是最终的输出颜色

## 着色器程序

- 多个着色器合并并链接完成的最终版本
- 链接之前编译的着色器为一个着色器程序对象，然后再渲染对象的时候激活着色器程序

## 顶点数组对象

- 和VBO那样被绑定，任何随后的顶点属性调用都会储存在这个VAO中
- 核心模式要求使用VAO

## 索引缓冲对象

- EBO/IBO，和VBO一样是一个缓冲，专门储存索引，调用顶点的索引来决定该绘制哪个顶点