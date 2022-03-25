#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 50

int main()
{
    double array[MAX_SIZE][MAX_SIZE];
    int  width, height;
    do
    {
        printf("Enter width < %d", MAX_SIZE);
        scanf("%d", &width);
    } while (width > MAX_SIZE);
    do
    {
        printf("Enter height < %d", MAX_SIZE);
        scanf("%d", &height);
    } while (height > MAX_SIZE);
    FILE *in_file = fopen("input.txt", "r");
    for(int i = 0; i < width; i++)
    {
        for(int j = 0; j < height; j++)
        {
            if(in_file == EOF)
            {
                printf("\nERROR: not enough elements in file");
                return 1;
            }
            fscanf(in_file, "%lf", &array[i][j]);
        }
    }
    for(int i = 0; i < width; i++)
    {
        for(int j = 0; j < height; j++)
        {
            printf("%lf ", array[i][j]);
        }
        printf("\n");
    }
    fclose(in_file);
    return 0;
}
