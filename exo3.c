#include<stdio.h>
int main ()
{
    int a,b,tmp;
    printf("Veuillez entrer la première valeur que vous voulez A=");
    scanf("%d",&a);
    printf("Veuillez entrer la deuxième valeur que vous voulez B=");
    scanf("%d",&b);
    tmp=a; //echange valeur
    a=b;
    b=tmp;
    printf("la valeur finale de A= %d,et B=%d",a,b);
    return(0);

}