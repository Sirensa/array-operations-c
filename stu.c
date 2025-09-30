#include <stdio.h>
#include<stdlib.h>

int max (int *T,int n){
  int max;
  int i;
  max=T[0];
  for ( i = 0; i <n; i++)
  {
    if (max<T[i])
    {
      max=T[i];
    }
    
  }return max;
}
 int min (int *T,int n){
  int min;
  int i;
  min=T[0];
  for ( i = 0; i <n; i++)
  {
    if (min>T[i])
    {
      min=T[i];
    }


  }return min;

 }
int reverse (int *T,int n){
  int j;
  for (j =n ; j >=0; j--)
  {
    printf("T[%d]= %d",j-1,T[j]);

  }
  return T[j];

}

int main (){
  int T[10],n;
  printf ("Enter a number (n=10):");
  scanf ("%d",&n);
  if (n>10 || n<10)
  {
    printf ("The nember is incorrect :\n ");
   
    return 1;
  }
  
  for (int  i = 0; i<n; i++)
  {
    printf("T[%d]= ",i+1);
    scanf ("%d",&T[i]);
  }
  
  printf ("The max is :%d\n",max(T,n));
  printf ("The min is :%d\n",min (T,n));
  printf("The reverse order of the elements in the array is :%d\t",reverse(T,n));


  return 0;
}

