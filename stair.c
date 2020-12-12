#include <stdio.h>
#include <stdlib.h>

void step(int* v, int size)
{
    int count = 1;
    for (int i = 0; i < size - 2; i++)
    {
        if(v[i + 1] - v[i] != v[i + 2] - v[i + 1])
        {
            count++;
        }
    }
    printf("There are %d steps.", count);
}

int main()
{
    /* you can put any value to the vector, or you can ask that the use enter with values and the size of vector */
    int v[] = {1, 1, 1, 3, 5, 4, 8, 12};
    int size = 8;
    step(v, size);
}