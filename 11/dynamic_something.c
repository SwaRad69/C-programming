#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;
    scanf("%d",&n);
    ptr=(int*)malloc (n*sizeof(int));

    return 0;
}