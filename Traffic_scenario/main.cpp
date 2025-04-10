




#include <windows.h>
#include <GL/glut.h>
#include <math.h>


void Road(){

   glBegin(GL_QUADS);
   glColor3f(0.0, 0.0f, 0.0f);

   glVertex2f(-1.0f, -0.2f);
   glVertex2f(-1.0f, -.6f);
   glVertex2f(1.0f, -.6f);
   glVertex2f(1.0f, -0.2f);
   glEnd();

   glBegin(GL_QUADS);
   glColor3f(0.0, 0.0f, 0.0f);

   glVertex2f(0.2f, -0.2f);
   glVertex2f(0.6f, -0.2f);
   glVertex2f(-0.1f, 1.0f);
   glVertex2f(-0.2f, 1.0f);
   glEnd();

   glLineWidth(3);
    glBegin(GL_LINES);
   glColor3ub(173, 255, 47);

   glVertex2f(-1.0f, -0.4f);
   glVertex2f(1.0f, -0.4f);
   glEnd();



}

void Building(){

   glBegin(GL_QUADS);
   glColor3f(0.4f, 0.2f, 0.1f);

   // draw the building
   glVertex2f(-0.7f, 0.55f);
   glVertex2f(-0.7f, 0.05f);
   glVertex2f(-0.3f, 0.05f);
   glVertex2f(-0.3f, 0.55f);
   glEnd();

   // Lines



   glBegin(GL_LINES);
   glColor3f(0.2f, 0.2f, 0.2f);

   glVertex2f(-0.7f, 0.4f);
   glVertex2f(-0.3f, 0.4f);
   glEnd();

   glBegin(GL_LINES);
   glColor3f(0.2f, 0.2f, 0.2f);

   glVertex2f(-0.7f, 0.4f);
   glVertex2f(-0.3f, 0.4f);
   glEnd();

   glBegin(GL_LINES);
   glColor3f(0.2f, 0.2f, 0.2f);


   glVertex2f(-0.7f, 0.25f);
   glVertex2f(-0.3f, 0.25f);
   glEnd();


   // Windows
   glColor3f(0.8f, 0.8f, 0.8f);

   glBegin(GL_QUADS);
   glVertex2f(-0.65f, 0.5f);
   glVertex2f(-0.65f, 0.45f);
   glVertex2f(-0.6f, 0.45f);
   glVertex2f(-0.6f, 0.5f);
   glEnd();

   glBegin(GL_QUADS);
   glVertex2f(-0.4f, 0.5f);
   glVertex2f(-0.4f, 0.45f);
   glVertex2f(-0.35f, 0.45f);
   glVertex2f(-0.35f, 0.5f);
   glEnd();


   glBegin(GL_QUADS);
   glVertex2f(-0.65f, 0.35f);
   glVertex2f(-0.65f, 0.3f);
   glVertex2f(-0.6f, 0.3f);
   glVertex2f(-0.6f, 0.35f);
   glEnd();

      glBegin(GL_QUADS);
    glBegin(GL_QUADS);
   glVertex2f(-0.65f, 0.2f);
   glVertex2f(-0.65f, 0.15f);
   glVertex2f(-0.6f, 0.15f);
   glVertex2f(-0.6f, 0.2f);
   glEnd();

   glBegin(GL_QUADS);
   glVertex2f(-0.4f, 0.35f);
   glVertex2f(-0.4f, 0.3f);
   glVertex2f(-0.35f, 0.3f);
   glVertex2f(-0.35f, 0.35f);
   glEnd();

   glBegin(GL_QUADS);
   glVertex2f(-0.4f, 0.2f);
   glVertex2f(-0.4f, 0.15f);
   glVertex2f(-0.35f, 0.15f);
   glVertex2f(-0.35f, 0.2f);
   glEnd();



   // Door
   glColor3f(0.2f, 0.1f, 0.0f);
   glBegin(GL_QUADS);


   glVertex2f(-0.53f, 0.12f);
   glVertex2f(-0.53f, 0.05f);
   glVertex2f(-0.47f, 0.05f);
   glVertex2f(-0.47f, 0.12f);
   glEnd();
}



void Tree(){

   glBegin(GL_QUADS);
   glColor3ub(98.0, 83.0f, 83.0f);

   glVertex2f(0.6f, 0.1f);
   glVertex2f(0.6f, -0.04f);
   glVertex2f(0.62f, -0.04f);
   glVertex2f(0.62f, 0.1f);
   glEnd();

    glBegin(GL_TRIANGLES);
   glColor3f(00.0f, 01.0f, 0.0f);

   glVertex2f(0.61f, 0.14f);
   glVertex2f(0.54f, 0.04f);
   glVertex2f(0.68f, 0.04f);
   glEnd();

   glBegin(GL_TRIANGLES);
   glColor3f(00.0f, 01.0f, 0.0f);

   glVertex2f(0.61f, 0.17f);
   glVertex2f(0.54f, 0.07f);
   glVertex2f(0.68f, 0.07f);
   glEnd();

    glBegin(GL_TRIANGLES);
   glColor3f(00.0f, 01.0f, 0.0f);

   glVertex2f(0.61f, 0.2f);
   glVertex2f(0.54f, 0.1f);
   glVertex2f(0.68f, 0.1f);
   glEnd();
}

void TraficLight(){



    glBegin(GL_QUADS);
	glColor3ub(0, 0, 139);

	glVertex2f(0.15f, -0.03f);
	glVertex2f(0.15f, -0.2f);
	glVertex2f(0.18f, -0.2f);
	glVertex2f(0.18f, -0.03f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 139);


	glVertex2f(0.18f, -0.03f);
	glVertex2f(0.18f, -0.06f);
	glVertex2f(0.25f, -0.06f);
	glVertex2f(0.25f, -0.03f);

	glEnd();


	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<500;i++)
        {
            glColor3ub(255,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0099;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+0.24,y-0.045);
        }
glEnd();

glBegin(GL_POLYGON);// Draw a green 1x1 Square centered at origin
for(int i=0;i<500;i++)
        {
            glColor3ub(19, 141, 117);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0099;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+0.190,y-0.045);
        }
glEnd();

glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<500;i++)
        {
            glColor3ub(183, 149, 11);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0099;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+0.215,y-0.045);
        }
glEnd();



}

void Car(float a)
{
    glBegin(GL_POLYGON);
	glColor3ub(230, 0, 0);

	glVertex2f(-0.17f+a, -0.23f);
	glVertex2f(-0.19f+a, -0.25f);
	glVertex2f(-0.23f+a, -0.26f);
	glVertex2f(-0.23f+a, -0.31f);
    glVertex2f(0.14f+a, -0.3f);
	glVertex2f(0.14f+a, -0.26f);
	glVertex2f(0.07f+a, -0.25f);
	glVertex2f(0.02f+a, -0.22f);

	glEnd();

    glLineWidth(5);
	glBegin(GL_LINES);
   glColor3ub(230, 0, 0);

   glVertex2f(-0.168f+a, -0.228f);
   glVertex2f(0.018f+a, -0.218f);
   glEnd();


   //Tyre
   glBegin(GL_POLYGON);// Draw a green 1x1 Square centered at origin
for(int i=0;i<500;i++)
        {
            glColor3ub(133, 146, 158);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0196;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.19+a,y-0.30);
        }
glEnd();

glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<500;i++)
        {
            glColor3ub(133, 146, 158);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0196;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+0.019+a,y-0.30);
        }
glEnd();

//window





    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f);
   glVertex2f(-0.154f+a, -0.23f);
   glVertex2f(-0.157f+a, -0.25f);
   glVertex2f(-0.085f+a, -0.25f);
   glVertex2f(-0.082f+a, -0.23f);
   glEnd();

   glBegin(GL_QUADS);
   glColor3f(0.8f, 0.8f, 0.8f);
   glVertex2f(-0.062f+a, -0.23f);
   glVertex2f(-0.065f+a, -0.25f);
   glVertex2f(0.003f+a, -0.25f);
   glVertex2f(0.005f+a, -0.23f);
   glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.8f, 0.8f, 0.8f);
   glVertex2f(-0.17f+a, -0.22f);
   glVertex2f(-0.189f+a, -0.25f);
   glVertex2f(-0.175f+a, -0.25f);
   glEnd();

   glBegin(GL_TRIANGLES);
    glColor3f(0.8f, 0.8f, 0.8f);
   glVertex2f(0.02f+a, -0.22f);
   glVertex2f(0.0176f+a, -0.25f);
   glVertex2f(0.07f+a, -0.25f);
   glEnd();


}


void display() {
   glClearColor(0.60f, 0.60f, 0.60f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);

    Road();
    Building();
    Tree();
    TraficLight();
    Car(0);
     Car(-0.5);
   glFlush();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutCreateWindow("Traic");
   glutInitWindowSize(320, 320);
   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}




