#include <stdlib.h>

/*function that frees a 2 dimensional grid*/
void free_grid(int **grid, int height){
  int i;
  for (i=0; i<height; i++){
    free(grid[i]);
  }
  free(grid);

}
