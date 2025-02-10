#include<stdio.h>

//somme factorielle inverse
int main ()
{
    int i,n,somme,fact;

    printf("Veuillez entrer un nombre :");
    scanf("%d",&n);
    printf("0");
    fact =1;
    somme=0;
    for(i=1 ; i<=n; i++)
    {
        fact= fact *i;
        somme= somme + (1/fact);
        printf("+1/%d!",i);
    }
    printf("= %d \n",somme);
    printf("la somme est: %d",somme);
    return (0);
}
