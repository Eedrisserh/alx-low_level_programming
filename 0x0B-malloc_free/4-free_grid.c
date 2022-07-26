#include "main.h"

/**
* alloc_grid -> allocation of 2D array
* @width: width of the array
* @height: height of the array
* Return: a pointer to a allocated grid
*/
int **alloc_grid(int width, int height)
{
int i, j, k, l;
int **mat;

if (width <= 0 || height <= 0)
return (NULL);
mat = malloc(height * sizeof(int *));
if (mat == NULL)
{
free(mat);
return (NULL);
}
for (i = 0; i < height; i++)
{
mat[i] = malloc(width * sizeof(int));
if (mat[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(mat[j]);
}
free(mat);
return (NULL);
}
}
for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
mat[k][l] = 0;
}
return (mat);
}
