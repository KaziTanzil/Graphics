#include <windows.h>
#include <windows.h>
#define GLUT_DISABLE_ATEXIT_HACK
#include <GL/glut.h>
#include <stdlib.h>
#include <cmath>

#define NUM_RAIN 500

struct Raindrop {
    float x, y;
    float speed;
    float length;
};

Raindrop raindrops[NUM_RAIN];
float waterLevel = 0.0f; // Water level starts at the bottom
bool raining = false;
float startHeight = 600.0f; // Initial height for raindrops
float rainSpeed = 1.0f; // Initial rain speed

void initRain() {
    for (int i = 0; i < NUM_RAIN; i++) {
        raindrops[i].x = rand() % glutGet(GLUT_WINDOW_WIDTH);
        raindrops[i].y = startHeight + rand() % 100; // Start raindrops from an initial height
        raindrops[i].speed = rainSpeed; // Set initial rain speed
        raindrops[i].length = 10.0f + (rand() % 10);
    }
}

void drawRain() {
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(3.0);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f); // White color for raindrops
    for (int i = 0; i < NUM_RAIN; i++) {
        glVertex2f(raindrops[i].x, raindrops[i].y);
        glVertex2f(raindrops[i].x + raindrops[i].length * cos(85 * 3.14159 / 180), raindrops[i].y - raindrops[i].length * sin(85 * 3.14159 / 180)); // 85 degree angle
    }
    glEnd();

    // Draw water level
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f); // Blue color for water
    glVertex2f(0.0f, 0.0f);
    glVertex2f(glutGet(GLUT_WINDOW_WIDTH), 0.0f);
    glVertex2f(glutGet(GLUT_WINDOW_WIDTH), waterLevel);
    glVertex2f(0.0f, waterLevel);
    glEnd();

    if (waterLevel < 10) {
        // Draw house body
        glColor3f(1.0f, 0.0f, 0.0f); // Red color for house body
        glBegin(GL_QUADS);
        glVertex2f(50.0f, waterLevel);
        glVertex2f(100.0f, waterLevel);
        glVertex2f(100.0f, 10.0f);
        glVertex2f(50.0f, 10.0f);
        glEnd();

        // Draw roof
        glColor3f(1.0f, 0.5f, 0.0f); // Orange color for roof
        glBegin(GL_TRIANGLES);
        glVertex2f(25.0f, 10.0f);
        glVertex2f(125.0f, 10.0f);
        glVertex2f(75.0f, 50.0f);
        glEnd();
    } else if(waterLevel<50) {
        // Draw roof
        glColor3f(1.0f, 0.5f, 0.0f); // Orange color for roof
        glBegin(GL_TRIANGLES);
        glVertex2f(25.0f, waterLevel);
        glVertex2f(125.0f, waterLevel);
        glVertex2f(75.0f, 50.0f);
        glEnd();
    }



    glFlush();
}

void updateRain() {
    static bool raindropReachedGround = false; // Flag to track if any raindrop has reached the ground
    bool raindropsBelowWaterLevel = false;

    if (raining) {
        for (int i = 0; i < NUM_RAIN; i++) {
            raindrops[i].y -= raindrops[i].speed;
            raindrops[i].x += raindrops[i].speed * cos(85 * 3.14159 / 180); // Move along x-axis at 85 degree angle

            if (!raindropReachedGround && raindrops[i].y <= 0) {
                raindropReachedGround = true; // Set flag when the first raindrop touches the ground
            }

            if (raindropReachedGround && raindrops[i].y < startHeight) {
                raindropsBelowWaterLevel = true;
            }

            if (raindrops[i].y < 0) {
                raindrops[i].x = rand() % glutGet(GLUT_WINDOW_WIDTH);
                raindrops[i].y = startHeight + rand() % 200; // Reset raindrops to start from an initial height
            }
        }

        // Increase water level gradually only when raindrops are falling below the initial water level
        if (raindropReachedGround && raindropsBelowWaterLevel) {
            waterLevel += 0.0001f * rainSpeed; // Increment water level based on rain speed
            if (waterLevel > startHeight) {
                waterLevel = startHeight; // Limit water level to initial height
            }
        }
    } else {
        // Clear raindrops if not raining
        for (int i = 0; i < NUM_RAIN; i++) {
            raindrops[i].x = -100; // Move raindrops outside the window
            raindrops[i].y = -100;
        }

        // Reset the flag when it stops raining
        raindropReachedGround = false;
    }
}


void display() {
    drawRain();
}

void update(int value) {
    updateRain();
    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 'r':
            raining = !raining;
            break;
        case 's':

            raining = false;
            break;

        case 'u':

            if (rainSpeed < 500.0f) // Increase rain speed up to 10
                rainSpeed += 1.0f;
            break;
        case 'l':
            if (rainSpeed > 1.5f) // Decrease rain speed down to 0.1
                rainSpeed -= 0.5f;
            break;
    }
    // Update raindrop speed
    for (int i = 0; i < NUM_RAIN; i++) {
        raindrops[i].speed = rainSpeed;
    }
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Raining Effect");
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    gluOrtho2D(0, 800, 0, 600);
    initRain();
    glutDisplayFunc(display);
    glutTimerFunc(0, update, 0);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
