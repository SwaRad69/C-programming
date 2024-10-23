#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    float arr[n];
    int* ptr;
    ptr=(int*) malloc(n*sizeof(float));
    for (int i = 0; i < n; i++)
    {
      scanf("%f",&arr[i] );  
    }
     for (int i = 0; i < n; i++)
    {
      printf("  %f",arr[i]);
    }
    
    
    return 0;
}