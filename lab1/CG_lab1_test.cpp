#include <GL/glut.h>
#include<gl/gl.h>
#include<gl/GLU.h>

void myDisplay()
{   
    glClearColor(0.0f, 0.8f, 0.0f, 0.2f);//设置清除颜色
    glClear(GL_COLOR_BUFFER_BIT);//使用当前清除颜色清除颜色缓存池
    glFlush();//执行所有等待的OpenGL指令
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("11710802蔡永宁");
    glutDisplayFunc(&myDisplay);
    glutMainLoop();//退出窗口前不断回调
    return 0;
}
