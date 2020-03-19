# CG lab 2

11710802 蔡永宁

## Exercise 2

**(a)**
$$
u-v=(9,8,5)-(6,6,3)=(9-6,8-6,5-3)=(3,2,2)
$$
**(b)**
$$
u+5v=(9,8,5)+5(6,6,3)=(9+5\times6,8+5\times6,5+3\times5)=(39,38,20)
$$

## Exercise 5

$$
|u|=\sqrt{(u\cdot u)}=\sqrt{(7,3,8)\cdot (7,3,8)}=\sqrt{(7\times7+3\times3+8\times8)}=\sqrt{122}
$$

## Exercise 11 (c)

$$
G(f+g)-(G(f)+G(g))=\int^1_0(sinx+e^x)dx-(\int^1_0sinx\ dx \ +\ \int^1_0e^x\ dx)=0
$$

## Exercise 12 (a)

$$
a=\frac{u\cdot e}{|e|^2}\ e=(9/\sqrt2+4/\sqrt2)(1/\sqrt2,1/\sqrt2)=(13/2,13/2)\\
|a|=13/\sqrt2
$$

## Exercise 16

$$
\begin{pmatrix}
9&8\\
-8&9 
\end{pmatrix}
\begin{pmatrix}
x\\y
\end{pmatrix}
=
\begin{pmatrix}
4\\
3
\end{pmatrix}
\\A=
\begin{pmatrix}
9&8\\
-8&9
\end{pmatrix}
\ so \ A^{-1}=\frac{1}{9\times9-(-8\times8)}
\begin{pmatrix}
9&-8\\
8&9
\end{pmatrix}=
\begin{pmatrix}
9/145&-8/145\\
8/145&9/145
\end{pmatrix}
\\
so\ (x,y)=
\begin{pmatrix}
9/145&-8/145\\
8/145&9/145
\end{pmatrix}
\begin{pmatrix}
4\\
3
\end{pmatrix}
=(12/145,59/145)
$$

## Exercise 20

$$
Q(f)=\int_0^1(\frac{df}{dx})^2dx\\
B(f,g)=\frac{1}{2}(Q(f+g)-Q(f)-Q(g))=\\
\frac{1}{2}\int_0^1[(\frac{d(6x+e^{2x})}{dx})^2-(\frac{d(6x)}{dx})^2-(\frac{d(e^{2x})}{dx})^2]dx
\\=\int_0^1\frac{d6x\cdot de^{4x}}{dx}dx
\\=\int_0^16\cdot2\cdot e^{2x}=6e^2-6
$$

## Exercise 22 (a)

$$
A
\begin{pmatrix} 
x_1\\
x_2
\end{pmatrix}=
\begin{pmatrix} 
5x_1\\ 
6x_2\\
x_1+x_2
\end{pmatrix}
\\
so\ A=
\begin{pmatrix} 
5 & 0 \\ 
0 & 6 \\
1 & 1
\end{pmatrix}
$$

