#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
 This programs executes the binary search in an array.
*/

int main(int argc, char **argv)
{
  int array[] = {1,8,40,51,90,888,746657};
  int number = atoi(argv[1]); 
  int low = 0;
  int high = sizeof(array)/sizeof(array[0]);
  int mid = 0; 
  bool found = false;

  while(found==false)
  {
    mid = low + (high - low)/2;
    if (high<low)
    {
       printf("number: %d not found\n", number);
       return -1;
    }
    if (array[mid] == number)
    {
      printf("number:%d found at index:%d\n", number, mid);
      found = true;
    }
    if (array[mid]>number)
    {
      printf("++\n");
      high = mid + 1;
    }
    if (array[mid]<number)
    {
      printf("--\n");
      low = mid - 1;
      printf("mid:%d\n",mid);
    }
  }

  return 0;
}

