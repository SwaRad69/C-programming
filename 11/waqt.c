#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=5;
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
    for(int i=0;i<n;i++){
        ptr[i]=7*(i+1);
        printf("%d\n",ptr[i]);


    }
    ptr=realloc(ptr,10*sizeof(int));
    for(int i=5;i<10;i++){
          ptr[i]=7*(i+1);
        printf("%d\n",ptr[i]);
    }
    return 0;
}