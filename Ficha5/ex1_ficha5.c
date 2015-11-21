#include<stdio.h>

double quadrado(double n){

    double q;

    q=n*n;
    return q;
}


void main(){

    double n,x;
    do{
    printf("Introduza um numero \n");
    scanf("%lf",&n);
    x=quadrado(n);

    if(n!=0)
        printf("Resultado: %lf",x);

}while(n!=0);




}
