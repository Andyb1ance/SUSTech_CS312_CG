#include <GL/glut.h>
#include<gl/gl.h>
#include<gl/GLU.h>

void myDisplay()
{   
    glClearColor(0.0f, 0.8f, 0.0f, 0.2f);//���������ɫ
    glClear(GL_COLOR_BUFFER_BIT);//ʹ�õ�ǰ�����ɫ�����ɫ�����
    glFlush();//ִ�����еȴ���OpenGLָ��
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("11710802������");
    glutDisplayFunc(&myDisplay);
    glutMainLoop();//�˳�����ǰ���ϻص�
    return 0;
}
