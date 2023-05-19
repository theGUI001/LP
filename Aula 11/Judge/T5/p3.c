#include <stdio.h>

#define vSize 20

// V normalizado = V0 - min / max - min

int main()
{

    int V[vSize], max = 0, min = 0, sum = 0, counter = 0;
    float med;

    for (int i = 0; i < vSize; i++)
    {
        scanf("%i", &V[i]);
    }

    for (int i = 0; i < vSize; i++)
    {
        sum += V[i];

        if (V[i] != 0)
            counter++;

        if (V[i] > max)
            max = V[i];

        if (V[i] < min)
            min = V[i];
    }

    med = (float)sum / (float)counter;

    printf("%i %i\n", max, min);
    printf("%.3f\n", med);

    for (int i = 0; i < vSize; i++)
    {
        printf("%.3f ", (float)((float)V[i] - (float)min) / ((float)max - (float)min));
    }
}