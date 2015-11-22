#include<stdio.h>

int m_valores(double n, double v){
    double m;
    int resultado;

    m=(n+v)/2;
    resultado= (int) m;
    m=m-resultado;

    if(m>=0.5)
        resultado++;


    return resultado;
}




void main(){

    double n,v;
    int x;
    printf("Introduza o primeiro valor \n");
    scanf("%lf",&n);

    printf("Introduza o segundo valor \n");
    scanf("%lf",&v);

    x=m_valores(n,v);
    printf("Resultado:%d",x);









}
