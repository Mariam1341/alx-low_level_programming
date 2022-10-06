#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int **alloc_grid(int width, int height)
{
int **tab, i, j;
tab = malloc(sizeof(*tab) * height);

if (width <= 0 || height <= 0 || tab == 0)
	return (NULL);

else
{
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(**tab) * width);
		if (tab[i] == 0)
		{
			/*Free everything if malloc fails*/
			while (i--)
				free(tab[i]);
			free(tab);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			tab[i][j] = 0;
	}
}

return (tab);
}
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}
