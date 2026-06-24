#include <stdio.h>

#include "API.h"

void log_message(const char* text) {
    fprintf(stderr, "%s\n", text);
    fflush(stderr);
}

int main(int argc, char* argv[]) {
    log_message("Running...");
    API_setColor(0, 0, 'G');
    API_setText(0, 0, "abc");

    int direction[] = {API_turnLeft, API_turnRight};
    int random_direction = rand() % 2;

    while (1) {
        if (!API_wallFront()) {
            int random_choice = direction[random_direction];

        }
        while (API_wallRight()) {
            API_turnLeft();
        }
        API_moveForward();
    }
}
