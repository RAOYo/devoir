#include<stdio.h>

int main () //calcul factoriel//
{
    float n, fact, ;
    int i;
    printf("entrer un nombre :");
    scanf("%f",&n);
    fact=1;
    for(i=1 ; i<=n ; i++)
    {
        fact=fact *i;
        printf("*%.0f ",i);
        
    }
    printf("= %.0f\n",fact);
    printf("le factoriel de ce nombre %.0f est: %.0f " ,n,fact);
    return(0);
}