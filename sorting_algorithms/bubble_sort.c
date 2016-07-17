/*sort an array on integers in ascending order using a Bubble sort*/
void bubble_sort(int *array, int size)
{ 
  int i, j, temp;
  temp = 0;

  for (i = 0; i < size; i++)
    {
      for (j = 0; j < (size - i - 1); j++)
        {
	  if (array[j] > array[j + 1])
            {
	      temp = array[j];
	      array[j] = array[j + 1];
	      array[j + 1] = temp;
            }
        }
    }
  
}
