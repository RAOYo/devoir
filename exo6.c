#include<stdio.h>
int main ()
{
    float nb1,nb2,coef1,coef2,moyenne;
    printf("Veuillez entrer la première note:");
    scanf("%f ", &nb1);
    printf("Veuillez entrer la deuxième note:");
    scanf("%f ", &nb2);
    printf("Veuillez entrer  le coefficient dela première note:");
    scanf("%f ", &coef1);
    printf("Veuillez entrer le coefficient de la deuxième note:");
    scanf("%f ", &coef2);
    moyenne=((nb1*coef1)+(nb2*coef2))/ (coef1+ coef2);
    printf("la moyenne est : %.2f",moyenne);
    return (0);

}