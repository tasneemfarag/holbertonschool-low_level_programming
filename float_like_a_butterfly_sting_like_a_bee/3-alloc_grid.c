#include <stdlib.h>

/*returns a pointer to a newly created 2 dimensional integers grid*/ 
int **alloc_grid(int width, int height){
  int i, j;
  /* Allocate top level of pointers.*/
  int** grid = malloc(sizeof(int*)*width);
  
  if (grid == NULL){
    return NULL;
  }
  

  /* Allocate each individual array, and fill with random numbers */
  for (i=0; i<width; i++) {
    grid[i] = malloc(sizeof(int)*height);
    for (j=0; j<height; j++)
      grid[i][j] = 0;
  }

  /* Return pointer to newly created array.*/
  return grid;
}
