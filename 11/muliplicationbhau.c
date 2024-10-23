#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[15];
    
    int *ptr;
    ptr = (int*) malloc(10 *sizeof(int));
     if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 10; i++){
        array[i]= 7*(i+1);
        printf("%d\n",array[i]);
    }
    ptr = realloc(ptr,15*sizeof(int));
    for ( int i = 10; i < 16; i++)
    {
     array[i]= 7*(i);
     printf("%d\n",array[i]);
    }

    return 0;
    
}