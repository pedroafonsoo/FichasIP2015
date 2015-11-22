#include<stdio.h>

int cubo (int n){
    int r;

    r=n*n*n;

    return(r);


}




void main(){

    int n,x;
    printf("Introduza um numero \n");
    scanf("%d",&n);

    x=cubo(n);
    printf("Resultado:%d",x);



}
