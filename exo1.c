#include<stdio.h>

int main()
{
    int a;
    printf("Veuillez entrer la valeur de A:");
    scanf("%d",&a);

    if (a>0)
        printf("le nombre est positif");
    else if (a == 0)
        printf("le nombre est nul");
    else
        printf("le nombre est négatif");
    return (0);
}
