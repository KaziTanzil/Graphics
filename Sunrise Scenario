


#include <windows.h>
#include <GL/glut.h>
#include <math.h>

bool isDay = true;
float sunY = 0.55f; // Initial position of the sun


void River(){
   glBegin(GL_POLYGON);
    if (isDay)
        glColor3ub(52, 152, 219);
    else
        glColor3ub(21, 67, 96);



   glVertex2f(-0.9f, -0.2f);
   glVertex2f(-0.9f, -0.6f);
    glVertex2f(0.9f, -0.6f);
      glVertex2f(0.9f, -0.2f);

    glEnd();
}

void Boat(float x)
{

     glBegin(GL_POLYGON);
   if (isDay)
        glColor3ub(231, 76, 60);
    else
        glColor3ub(100, 30, 22);



        glVertex2f(-0.4f+x, -0.3f);
        glVertex2f(-0.35f+x, -0.35f);
        glVertex2f(-0.2f+x, -0.35f);
        glVertex2f(-0.15f+x, -0.3f);
        glVertex2f(-0.24f+x, -0.32f);
        glVertex2f(-0.3f+x, -0.32f);

    glEnd();

    glBegin(GL_POLYGON);
   if (isDay)
        glColor3ub(231, 76, 60);
    else
        glColor3ub(100, 30, 22);




        glVertex2f(-0.15f+x, -0.3f);
        glVertex2f(-0.24f+x, -0.32f);
        glVertex2f(-0.3f+x, -0.32f);
        glVertex2f(-0.4f+x, -0.3f);
        glVertex2f(-0.3f+x, -0.3f);
        glVertex2f(-0.24f+x, -0.3f);

    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
            glVertex2f(-0.3f+x, -0.3f);
            glVertex2f(-0.3f+x, -0.32f);
            glEnd();

            glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
            glVertex2f(-0.24f+x, -0.3f);
            glVertex2f(-0.24f+x, -0.32f);
            glEnd();




}

void Road()

{
        glBegin(GL_POLYGON);
        if(isDay)
        glColor3ub(220, 118, 51);

        else
   glColor3ub(40, 55, 71);



        glVertex2f(-0.9f, 0.15f);
        glVertex2f(-0.9f, 0.0f);
        glVertex2f(0.9f, 0.0f);
        glVertex2f(0.9f, 0.15f);

    glEnd();

    glBegin(GL_POLYGON);
if(isDay)
        glColor3ub(220, 118, 51);

        else
   glColor3ub(40, 55, 71);



         glVertex2f(-0.02f, 0.5f);
        glVertex2f(-0.15f, 0.15f);
        glVertex2f(0.15f, 0.15f);
        glVertex2f(0.02f, 0.5f);


    glEnd();
}





                void Tree( float a, float b)

{
     glBegin(GL_POLYGON);
     if(isDay)
        glColor3ub(190, 96, 26 );


     else
   glColor3ub(120, 96, 26 );



         glVertex2f(-0.88f+a, 0.38f+b);
        glVertex2f(-0.88f+a, 0.18f+b);
        glVertex2f(-0.84f+a, 0.18f+b);
        glVertex2f(-0.84f+a, 0.38f+b);
        glVertex2f(-0.86f+a, 0.36f+b);


    glEnd();

     glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
        {
            if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.97+a,y+0.48+b);
        }
glEnd();
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
        {
            if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.88+a,y+0.55+b);
        }
glEnd();
    glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
        {
            if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.84+a,y+0.54+b);
        }
glEnd();
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
        {
            if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.73+a,y+0.47+b);
        }
glEnd();
    glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
        {
           if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.80+a,y+0.46+b);
        }
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
        {
            if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.84+a,y+0.43+b);
        }
glEnd();
    glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
        {
           if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.9+a,y+0.44+b);
        }
glEnd();


    glBegin(GL_POLYGON);
   if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );


         glVertex2f(-0.3f, 0.54f);
        glVertex2f(-0.3f, 0.5f);
        glVertex2f(0.9f, 0.5f);
        glVertex2f(0.9f, 0.54f);


    glEnd();


    glBegin(GL_TRIANGLES);
   if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );



         glVertex2f(-0.66f, 0.55f);
        glVertex2f(-0.72f, 0.5f);
        glVertex2f(-0.60f, 0.5f);



    glEnd();

    glBegin(GL_TRIANGLES);
   if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );



        glVertex2f(-0.56f, 0.55f);
        glVertex2f(-0.62f, 0.5f);
        glVertex2f(-0.50f, 0.5f);



    glEnd();
    glBegin(GL_TRIANGLES);
   if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );



                 glVertex2f(-0.46f, 0.55f);
        glVertex2f(-0.52f, 0.5f);
        glVertex2f(-0.40f, 0.5f);



    glEnd();

    glBegin(GL_TRIANGLES);
   if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );



                 glVertex2f(-0.36f, 0.55f);
        glVertex2f(-0.30f, 0.5f);
        glVertex2f(-0.42f, 0.5f);



    glEnd();

     glBegin(GL_TRIANGLES);
   if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );



                 glVertex2f(-0.26f, 0.60f);
        glVertex2f(-0.20f, 0.5f);
        glVertex2f(-0.32f, 0.5f);

        glBegin(GL_TRIANGLES);
   if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );



                 glVertex2f(-0.16f, 0.60f);
        glVertex2f(-0.10f, 0.5f);
        glVertex2f(-0.22f, 0.5f);



    glEnd();



     glBegin(GL_TRIANGLES);
   if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );


         glVertex2f(0.66f, 0.60f);
        glVertex2f(0.72f, 0.5f);
        glVertex2f(0.60f, 0.5f);



    glEnd();

    glBegin(GL_TRIANGLES);
   if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );


        glVertex2f(0.56f, 0.60f);
        glVertex2f(0.62f, 0.5f);
        glVertex2f(0.50f, 0.5f);



    glEnd();
    glBegin(GL_TRIANGLES);
   if(isDay)
                 glColor3ub(30, 132, 73);

            else
            glColor3ub(11, 83, 69 );



                 glVertex2f(0.46f, 0.56f);
        glVertex2f(0.52f, 0.5f);
        glVertex2f(0.40f, 0.5f);



    glEnd();







}


void sky()

{

    glBegin(GL_POLYGON);
  if (isDay)
        glColor3ub(133, 193, 233 );
// Day color
    else
          glColor3ub(52, 73, 94 );


         glVertex2f(-0.9f, 1.0f);
        glVertex2f(-0.9f, 0.50f);
        glVertex2f(0.9f, 0.50f);
        glVertex2f(0.9f, 1.0f);


    glEnd();

     //  ----sun----

   glBegin(GL_POLYGON);
    if (isDay)
        glColor3ub(247, 220, 111); // Day color
    else
        glColor3ub(208, 211, 212); // Night color
    float r = 0.056;
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float x = r * cos(A);
        float y = r * sin(A) + sunY; // Adjusting the y-coordinate based on sun's position
        glVertex2f(x + 0.54, y);
    }
    glEnd();

}

//-----Cloud------

void cloud(float a){

 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
        {
            if(isDay)
                glColor3ub(240, 243, 244);


            else
            glColor3ub(98, 101, 103 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.056;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.44+a,y+0.77);
        }
glEnd();

 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
        {
                        if(isDay)
                glColor3ub(240, 243, 244);


            else
            glColor3ub(98, 101, 103 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.056;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-39+a,y+0.80);
        }
glEnd();

 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
        {
                       if(isDay)
                glColor3ub(240, 243, 244);


            else
            glColor3ub(98, 101, 103 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.056;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.34+a,y+0.76);
        }
glEnd();

 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
        {
                        if(isDay)
                glColor3ub(240, 243, 244);


            else
            glColor3ub(98, 101, 103 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.056;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.39+a,y+0.72);
        }
glEnd();




}

void house(float x, float y) {
    glBegin(GL_POLYGON);
    if (isDay)
        glColor3ub(121, 125, 127); // Day color
    else
        glColor3ub(31, 36, 37); // Night color

    glVertex2f(-0.7f + x, 0.4f + y);
    glVertex2f(-0.8f + x, 0.3f + y);
    glVertex2f(-0.6f + x, 0.3f + y);
    glVertex2f(-0.5f + x, 0.4f + y);
    glEnd();

    glBegin(GL_POLYGON);
    if (isDay)
        glColor3ub(156, 100, 12); // Day color
    else
        glColor3ub(52, 73, 94); // Night color

    glVertex2f(-0.78f + x, 0.3f + y);
    glVertex2f(-0.78f + x, 0.2f + y);
    glVertex2f(-0.58f + x, 0.2f + y);
    glVertex2f(-0.58f + x, 0.3f + y);
    glEnd();

    glBegin(GL_POLYGON);
    if (isDay)
        glColor3ub(93, 109, 126); // Day color
    else
        glColor3ub(41, 128, 185); // Night color

    glVertex2f(-0.78f + x, 0.2f + y);
    glVertex2f(-0.8f + x, 0.18f + y);
    glVertex2f(-0.6f + x, 0.18f + y);
    glVertex2f(-0.58f + x, 0.2f + y);
    glEnd();

    glBegin(GL_POLYGON);
    if (isDay)
        glColor3ub(93, 109, 126); // Day color
    else
        glColor3ub(41, 128, 185); // Night color

    glVertex2f(-0.58f + x, 0.2f + y);
    glVertex2f(-0.6f + x, 0.18f + y);
    glVertex2f(-0.4f + x, 0.18f + y);
    glVertex2f(-0.42f + x, 0.2f + y);
    glEnd();

    glBegin(GL_POLYGON);
    if (isDay)
        glColor3ub(156, 100, 12); // Day color
    else
        glColor3ub(52, 73, 94); // Night color

    glVertex2f(-0.58f + x, 0.3f + y);
    glVertex2f(-0.58f + x, 0.2f + y);
    glVertex2f(-0.42f + x, 0.2f + y);
    glVertex2f(-0.42f + x, 0.3f + y);
    glEnd();

    glBegin(GL_POLYGON);
    if (isDay)
        glColor3ub(95, 106, 106); // Day color
    else
        glColor3ub(44, 62, 80); // Night color

    glVertex2f(-0.5f + x, 0.4f + y);
    glVertex2f(-0.52f + x, 0.39f + y);
    glVertex2f(-0.42f + x, 0.3f + y);
    glVertex2f(-0.4f + x, 0.3f + y);
    glEnd();

    glBegin(GL_POLYGON);
    if (isDay)
       glColor3ub(135, 54, 0 );// Day color
    else
        glColor3ub(243, 156, 18); // Night color

    glVertex2f(-0.52f + x, 0.28f + y);
    glVertex2f(-0.52f + x, 0.24f + y);
    glVertex2f(-0.48f + x, 0.24f + y);
    glVertex2f(-0.48f + x, 0.28f + y);
    glEnd();

    glBegin(GL_POLYGON);
    if (isDay)
        glColor3ub(135, 54, 0); // Day color
    else
        glColor3ub(39, 55, 70); // Night color

    glVertex2f(-0.7f + x, 0.28f + y);
    glVertex2f(-0.7f + x, 0.2f + y);
    glVertex2f(-0.64f + x, 0.2f + y);
    glVertex2f(-0.64f + x, 0.28f + y);
    glEnd();

    glBegin(GL_TRIANGLES);
    if (isDay)
        glColor3ub(66, 73, 73); // Day color
    else
        glColor3ub(44, 62, 80); // Night color

    glVertex2f(-0.51f + x, 0.39f + y);
    glVertex2f(-0.6f + x, 0.3f + y);
    glVertex2f(-0.42f + x, 0.3f + y);
    glEnd();
}








void display() {
    if (isDay)
         glClearColor(0.60f, 0.60f, 0.60f, 1.0f);
    else
        glClearColor(0.40f, 0.40f, 0.40f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT);

    // Set up orthographic projection using gluOrtho2D
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-5.0, 5.0, -5.0, 5.0); // Define the 2D ortho projection (left, right, bottom, top)

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // Draw your scene here
    River();
    Boat(0);
    Boat(0.8);
    Boat(0.3);

    Road();
    sky();
    cloud(0);
    cloud(0.4);

    Tree(0,0);
    Tree(1.05,0);

    house(0.3,0.09);
    house(0,0);
    house(1.2,0.1);
    house(1.0,0);

    glFlush();
}


void Timer(int value) {
    sunY += 0.002; // Incrementing the sun's vertical position

    // Checking if the sun has moved outside the display
    if (sunY > 1.1f) {
        sunY = 0.55f; // Resetting the sun's position to its original position
        isDay = !isDay; // Toggling between day and night
    }

    glutPostRedisplay();
    glutTimerFunc(10, Timer, 0); // Adjusting the speed of sun's movement
}


int main(int argc, char** argv) {
    // Initializing GLUT
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Day-Night Scene");

    // Registering display function and timer function
    glutDisplayFunc(display);
    glutTimerFunc(10, Timer, 0);

    // Starting the main loop
    glutMainLoop();
    return 0;
}







