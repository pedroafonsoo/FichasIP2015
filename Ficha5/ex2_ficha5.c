#include<stdio.h>

int n_limite(int n, int sup, int inf){



    if(n>=inf && n<=sup)
        return 1;
    else
        return 0;
}


void main(){
    int n,sup,inf,x;
    printf("Introduza o numero \n");
    scanf("%d",&n);
    printf("Introduza o limite superior\n");
    scanf("%d",&sup);
    printf("Introduza o limite inferior \n");
    scanf("%d",&inf);

    x=n_limite(n,sup,inf);

    printf("Resultado:%d ",x);


}
