#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=10;
    int *ptr;
    scanf("%d",&n);
    ptr=(int*)malloc (5*sizeof(int));
    ptr=realloc(ptr,10*sizeof(int));

    return 0;
}