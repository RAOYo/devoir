#include<stdio.h>

//somme factorielle
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
        somme= somme + fact;
        printf("+%d!",i);
    }
    printf("= %d \n",somme);
    printf("la somme est: %d",somme);
    return (0);
}