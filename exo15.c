#include<stdio.h>
#include<math.h>

int main ()
 
 //calcul de la somme élevée au carée//
 {
    long n,somme;
    int i;
    printf("Veuillez entrer un nombre: ");
    scanf("%ld",&n);
    printf("0");
    somme= 0;
    for(i=0; i<=n ; i++)
    {
        somme=somme + pow(10,i);
        printf("+ 10^%d",i);
    }
    printf("=%ld",somme);
    return (0);
 }
