#include<stdio.h>

int insertion(int newvalue, int index, int *array, int *size);
int traverse(int *array, int size);
int deletion(int index, int *array, int *size);
int search(int value, int *array, int size);
int update(int updatedvalue, int index, int *array);

int main(void)
{
  printf("Hello World!\n");
  int LA[10] = {1,10,20,30,40,500,30,75,80,40};
  int size = sizeof(LA)/sizeof(int); //step 2
  
  insertion(24, 3, LA, &size);
  traverse(LA, size);
  deletion(5, LA, &size);
  traverse(LA, size); 

  search(30,LA, size);
  update(38, 6, LA);
  traverse(LA, size);
  return 0;
}

int insertion(int newvalue, int index, int *array, int *size)
{
  printf("*************insertion function***********\n");

  int j = *size;
  while (j>=index)
  {
   array[j+1] = array[j];
   j = j-1;
  }
  array[index] = newvalue;
  *size = *size + 1;
  return 0;
}

int traverse(int *array, int size)
{
  printf("***********traverse function*************\n");

  int i;  
  for(i=0;i<size;i++) printf("index: %d - value: %d\n",i,array[i]);
 return 0;
}

int deletion(int index, int *array, int *size)
{
  printf("***********delection function************\n");
  int j = 0;
  for( j=index; j<*size;j++)
  {
   array[j] = array[j+1]; 
  }
  *size = *size - 1;
  return 0;
}

int search(int value, int *array, int size)
{
  printf("**********search function**********\n");
  int j = 0;
  for (j=0; j<size; j++)
  { 
    if (array[j] == value)
    {
      printf("element found, index:%d\n",j); 
      return j;
    }
  }
  printf("element no found\n");
  return -1;
}

int update(int updatedvalue, int index, int *array)
{
  printf("**********update function***************\n");
  array[index] = updatedvalue;
  return 0;
}
