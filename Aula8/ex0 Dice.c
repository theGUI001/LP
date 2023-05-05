#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 1000
#define NFACES 6

int main() {

    int faces[NFACES], i;

    for (i = 0; i < NFACES; i++)
        faces[i] = 0;

    
    for (i = 0; i < ROLLS; i++)
    {
        faces[rand()%6]++;        
    }
    
    for (i = 0; i < NFACES; i++)
    {
        printf("Face %i: %i (%.2f%%)\n", (i + 1), faces[i], ((float)faces[i] / (float)ROLLS * 100.0));
    }
    
}