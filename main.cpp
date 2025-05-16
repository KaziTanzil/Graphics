#include <windows.h>
#include <GL/glut.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

// Variables to control eruption
bool isErupting = false;
const int eruptionDuration = 100; // Adjust duration as needed

// Structure to represent a lava particle
struct LavaParticle {
    float x;
    float y;
    float velocityY;
};

const int maxParticles = 500; // Increase the number of particles for a denser flow
LavaParticle lavaParticles[maxParticles];

void initializeLavaParticles() {
    srand(time(NULL));
    for (int i = 0; i < maxParticles; ++i) {
        lavaParticles[i].x = 0.07 * cos((rand() % 360) * 3.14159 / 180); // Random x within the crater
        lavaParticles[i].y = -0.25 * sin((rand() % 360) * 3.14159 / 180)+.1; // Random y within the crater
        lavaParticles[i].velocityY = -0.005 - static_cast<float>(rand()) / RAND_MAX * 0.02; // Random downward velocity
    }
}

void volcano() {
    // Draw the volcano cone
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2f(-0.05, 0.3);
    glVertex2f(-0.3, -0.30);
    glVertex2f(0.3, -0.30);
    glVertex2f(0.05, 0.3);


    glEnd();

    glBegin(GL_POLYGON);
   glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.05, 0.32);
    glVertex2f(-0.05, 0.3);
    glVertex2f(0.05, 0.3);
    glVertex2f(0.05, 0.32);

        glVertex2f(0.05, 0.30);
    glEnd();
    // Draw the volcano crater
    if (isErupting) {
        glBegin(GL_POLYGON);

         glColor3f(1.0f, 0.0f, 0.0f);

            glVertex2f(-0.05, 0.3);
            glVertex2f(0.05, 0.3);
            glVertex2f(0.07, 0.35);
            glVertex2f(-0.07, 0.35);

            glEnd();

            glBegin(GL_POLYGON);

         glColor3f(1.0f, 0.0f, 0.0f);

            glVertex2f(-0.05, 0.35);
            glVertex2f(0.05, 0.35);
            glVertex2f(0.0, 0.45);


            glEnd();


        // Update and draw lava particles
        glPointSize(3.0); // Adjust particle size as needed
        glBegin(GL_POINTS);
        glColor3f(1.0, 0.0, 0.0); // Red color
        for (int i = 0; i < maxParticles; ++i) {
            // Update particle position
            lavaParticles[i].y += lavaParticles[i].velocityY;

            // Draw the particle
            glVertex2f(lavaParticles[i].x, lavaParticles[i].y);

            // Reset particle position if it goes below the bottom of the display
            if (lavaParticles[i].y < -.6) {
                lavaParticles[i].x = 0.07 * cos((rand() % 360) * 3.14159 / 180); // Random x within the crater
                lavaParticles[i].y = -0.25 * sin((rand() % 360) * 3.14159 / 180)+.1 ; // Random y within the crater
                lavaParticles[i].velocityY = -0.005 - static_cast<float>(rand()) / RAND_MAX * 0.02; // Random downward velocity
            }
        }
        glEnd();
    }
}

void River()
{

glBegin(GL_POLYGON);
glColor3f(0.0f, 0.749f, 1.0f);

            glVertex2f(-1.0, -0.6);
            glVertex2f(-1.0, -1.0);
            glVertex2f(1.0, -1.0);
            glVertex2f(1.0, -0.6);

            glEnd();

            if(isErupting)
            {
                glBegin(GL_POLYGON);
   glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.4, -0.6);
    glVertex2f(-0.4, -0.62);
    glVertex2f(0.4, -0.62);
    glVertex2f(0.4, -0.60);


    glEnd();
            }

}

void sky()

{

    glBegin(GL_POLYGON);
        glColor3ub(133, 193, 233 );




         glVertex2f(-1.0f, 1.0f);
        glVertex2f(-1.0f, 0.50f);
        glVertex2f(1.0f, 0.50f);
        glVertex2f(1.0f, 1.0f);


    glEnd();

     //  ----sun----

   glBegin(GL_POLYGON);

        glColor3ub(247, 220, 111); // Day color

    float r = 0.056;
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float x = r * cos(A);
        float y = r * sin(A) ; // Adjusting the y-coordinate based on sun's position
        glVertex2f(x + 0.54, y+0.60);
    }
    glEnd();

}




                    //-----Cloud------

            void cloud(float a){


     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
            {

                    glColor3ub(240, 243, 244);

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

                    glColor3ub(240, 243, 244);

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


                    glColor3ub(240, 243, 244);

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


                    glColor3ub(240, 243, 244);

                      float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.056;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x-0.39+a,y+0.72);
            }
    glEnd();


}

              void Tree( float a, float b)

{
     glBegin(GL_POLYGON);
   glColor3ub(175, 96, 26 );



         glVertex2f(-0.88f+a, 0.38f+b);
        glVertex2f(-0.88f+a, 0.18f+b);
        glVertex2f(-0.84f+a, 0.18f+b);
        glVertex2f(-0.84f+a, 0.38f+b);
        glVertex2f(-0.86f+a, 0.36f+b);


    glEnd();

     glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(30, 132, 73);
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
            glColor3ub(30, 132, 73);
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
            glColor3ub(30, 132, 73);
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
            glColor3ub(30, 132, 73);
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
            glColor3ub(30, 132, 73);
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
            glColor3ub(30, 132, 73);
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
            glColor3ub(30, 132, 73);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.9+a,y+0.44+b);
        }
	glEnd();


    glBegin(GL_POLYGON);
   glColor3ub(30, 132, 73);



         glVertex2f(-0.3f, 0.54f);
        glVertex2f(-0.3f, 0.5f);
        glVertex2f(0.999f, 0.5f);
        glVertex2f(0.999f, 0.54f);


    glEnd();


    glBegin(GL_TRIANGLES);
   glColor3ub(30, 132, 73);



         glVertex2f(-0.66f, 0.55f);
        glVertex2f(-0.72f, 0.5f);
        glVertex2f(-0.60f, 0.5f);



    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(30, 132, 73);



        glVertex2f(-0.56f, 0.55f);
        glVertex2f(-0.62f, 0.5f);
        glVertex2f(-0.50f, 0.5f);



    glEnd();
    glBegin(GL_TRIANGLES);
   glColor3ub(30, 132, 73);



                 glVertex2f(-0.46f, 0.55f);
        glVertex2f(-0.52f, 0.5f);
        glVertex2f(-0.40f, 0.5f);



    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(30, 132, 73);



                 glVertex2f(-0.36f, 0.55f);
        glVertex2f(-0.30f, 0.5f);
        glVertex2f(-0.42f, 0.5f);



    glEnd();

     glBegin(GL_TRIANGLES);
   glColor3ub(30, 132, 73);



                 glVertex2f(-0.26f, 0.60f);
        glVertex2f(-0.20f, 0.5f);
        glVertex2f(-0.32f, 0.5f);

        glBegin(GL_TRIANGLES);
   glColor3ub(30, 132, 73);



                 glVertex2f(-0.16f, 0.60f);
        glVertex2f(-0.10f, 0.5f);
        glVertex2f(-0.22f, 0.5f);



    glEnd();



     glBegin(GL_TRIANGLES);
   glColor3ub(30, 132, 73);



         glVertex2f(0.66f, 0.60f);
        glVertex2f(0.72f, 0.5f);
        glVertex2f(0.60f, 0.5f);



    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(30, 132, 73);



        glVertex2f(0.56f, 0.60f);
        glVertex2f(0.62f, 0.5f);
        glVertex2f(0.50f, 0.5f);



    glEnd();
    glBegin(GL_TRIANGLES);
   glColor3ub(30, 132, 73);



                 glVertex2f(0.46f, 0.56f);
        glVertex2f(0.52f, 0.5f);
        glVertex2f(0.40f, 0.5f);



    glEnd();

}








void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    // Draw the volcano

    River();
    sky();
    cloud(0);
    cloud(0.4);
    cloud(0.6);
        Tree(0,0);
    Tree(1.6,-0.2);
    volcano();


    glutSwapBuffers();
}

void update(int value) {
    if (isErupting) {
        // Update lava particles' positions
        for (int i = 0; i < maxParticles; ++i) {
            lavaParticles[i].y += lavaParticles[i].velocityY;

            // If a particle goes below the bottom of the display, reset its position to the top of the volcano
            if (lavaParticles[i].y < -0.6) {
                lavaParticles[i].x = 0.07 * cos((rand() % 360) * 3.14159 / 180); // Random x within the crater
                lavaParticles[i].y = -0.25 * sin((rand() % 360) * 3.14159 / 180)+.1 ; // Random y within the crater
                lavaParticles[i].velocityY = -0.005 - static_cast<float>(rand()) / RAND_MAX * 0.02; // Random downward velocity
            }
        }
    }

    glutPostRedisplay();
    glutTimerFunc(10, update, 0); // Adjust animation speed as needed
}





void handleKeyPress(unsigned char key, int x, int y) {
    switch (key) {
        case 'S':
        case 's':
            // Start the eruption
            isErupting = true;
            break;
    }
            switch (key) {
        case 'P':
        case 'p':
            // Start the eruption
            isErupting = false;
            break;
    }
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600); // Adjust window size as needed
    glutCreateWindow("Volcano Eruption");
    glClearColor(0.196f, 0.804f, 0.196f, 1.0f);  // Black background

    initializeLavaParticles();

    glutDisplayFunc(drawScene);
    glutTimerFunc(10, update, 0);
    glutKeyboardFunc(handleKeyPress); // Register mouse click callback

    glutMainLoop();

    return 0;
}
