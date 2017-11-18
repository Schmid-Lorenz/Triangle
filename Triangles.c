#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int elements = 1;
int* array = NULL;
array = malloc(elements * sizeof(int));


if (array == NULL)
{
printf("Allocating memory was not possible\n");
return 1;
}

for (int counter = 0; counter < elements; counter++)
{
  array[counter] = counter *counter;
  printf("%3i\n", array[counter]);
}

free(array);
//test
//test
return 0;
}
