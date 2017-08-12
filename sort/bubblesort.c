#include<stdio.h>

int main(void)
{
  int myarray[] = {1,8,2,9,10,4,3};
  int length = sizeof(myarray)/sizeof(myarray[0]);
  int i = 0;
  int j = 0;
  int swap = 0;
  int temp = 0;
  do
  {
    swap = 0;
    for(i=0;i<length-1;i++)
    {
      j= i+1;
      if(myarray[i]>myarray[j])
      {
        temp = myarray[i];
        myarray[i] = myarray[j];
        myarray[j] = temp;
        swap = 1;
        printf("swapped\n");
      }
    } 
  }while(swap==1);
  
  for(int k=0;k<length; k++) printf("element:%d at index:%d\n", myarray[k], k);
  return 0;
}
