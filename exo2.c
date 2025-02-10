#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Veuillez entrer le premier nombre :");
    scanf("%d",&a);
    printf("Veuillez entrer le second nombre :");
    scanf("%d",&b);
    c=a*b;
    if(a>0 && b>0 || a<0 && b<0)
    {  
        printf("le produit est positif");
    }
    else
    {
        printf("le produit est négatif");
    }
    return (0);
}