#include<stdio.h>
int main ()
{
    //somme de 1 à n//
    int somme,i,n;
    printf("Veuillez entrer le nombre n:");
    scanf("%d",&n);
    somme=0;
    printf("0");
    for(i=1 ; i<=n ; i++)
    {
        somme= somme + i;
        printf("+%d ",i);

    }

    printf("=%d",somme);
    return(0);

}