#include<stdio.h>
int main ()
{
    int a,b,somme,moyenne;
    printf("Veuillez entrer le premier nombre:");
    scanf("%d",&a);
    
    printf("Veuillez entrer le second nombre:");
    scanf("%d",&b);

    somme= a+b;
    moyenne=(a*b)/2;
    printf("La somme est : %d \n La moyenne est :%d",somme,moyenne);
    return (0);
} 

