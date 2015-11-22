#include<stdio.h>

int v_int(float n1,float n2){

    float media,mediainteira;

    media=(n1+n2)/2;
    mediainteira=(int)media;

    if(media-mediainteira >=0.5)
        return mediainteira+1;
    else
        return mediainteira;




}




void main(){

        float n1,n2;
        int resultado;
        printf("Introduza o primeiro valor \n");
        scanf("%f",&n1);

        printf("Introduza o segundo valor \n");
        scanf("%f",&n2);

        resultado=v_int(n1,n2);
        printf("O resultado e´:%d",resultado);





}
