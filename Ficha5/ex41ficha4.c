#include <stdio.h>

    float IMC (float p,float a){

            float res;

            res= p/(a*a);
            return res;

    }



void main(){

        float p,a,i_m_c,res;

        printf("Introduza o seu peso \n");
        scanf("%f",&p);

        printf("Introduza a sua altura \n");
        scanf("%f",&a);

        i_m_c=IMC(p,a);

            if(i_m_c<=18,5)
                printf("Abaixo do peso normal \n");
        else
            if(i_m_c>=18,5 && i_m_c<=25)
                printf("Peso normal \n");

        else
            if(i_m_c>25 &&i_m_c<30)
                printf("Acima do peso normal \n");
        else
            if(i_m_c >30)
                printf("Obesidade \n");


           printf("Introduza o valor de IMC: %f \n",res);



}
