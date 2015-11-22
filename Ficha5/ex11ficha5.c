#include<stdio.h>

int n_int(int n){

    int i,max,num,max;


    for(i=1;i<=n;i++){

         printf("Introduza um numero inteiro \n");
        scanf("%d",&num);
        if(i==1 || num >max){

            num=max;
            i++;
        }
        else
            if(num==max)
                i++;



    }

    return i;

}


void main(){

    int n,x;
    x=n_int(n);

    printf("O valor máximo é :%d",x);







}
