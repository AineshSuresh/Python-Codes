#include <graphics.h>
#include <conio.h>
#include <math.h>

void drawBall(int x, int y, int radius) {
    setcolor(RED);
    circle(x, y, radius);
    floodfill(x, y, RED);
}

int main() {
    // Initialize graphics
    int gd = DETECT, gm;
    initgraph(&gd, &gm, “”);

    // Ball properties
    int radius = 20;
    int x = 400; // Starting X position
    Float time = 0.0f;
    Float frequency = 0.1f; // Frequency of sine wave
    Float amplitude = 150.0f; // Amplitude of bounce
    Int baseHeight = 300; // Base height for the sine wave

    // Main loop
    While (!kbhit()) {
        // Clear the previous frame
        Cleardevice();

        // Calculate the y position using sine wave
        Int y = baseHeight + static_cast<int>(amplitude * sin(frequency * time));

        // Draw the ball
        drawBall(x, y, radius);

        // Update time
        Time += 0.1f;

        // Delay for a smoother animation
        Delay(20);
    }

    // Close the graphics window
    Closegraph();
    Return 0;
}
