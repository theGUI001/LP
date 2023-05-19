#include <stdio.h>

#define MAX_RES 128

int main()
{

    short I[MAX_RES][MAX_RES][3], tmp;

    for (short i = 0; i < MAX_RES; i++)
    {
        for (short j = 0; j < MAX_RES; j++)
        {
            for (short c = 0; c < 3; c++)
            {
                scanf("%hd", &tmp);
                if (tmp > 255)
                {
                    I[i][j][c] = 255;
                }
                else if (tmp < 0)
                {
                    I[i][j][c] = 0;
                }
                else
                {
                    I[i][j][c] = tmp;
                }
            }
        }
    }
}