#include<stdio.h>
#include<stdlib.h>
int main()
{
   int arr[] = {12, 123, 45, 67, 1};
   int max, min;
   max = 0;
   min = 500;
   for( int i = 0; i<5; i++){
      
        max = (arr[i]>max)?arr[i]:max ;
         min = (arr[i]<min)?arr[i]:min ;
        
     
}
printf("min:%d max:%d", min, max);
}
