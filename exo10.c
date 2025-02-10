#include<stdio.h>

int main()
{
    int n ,i ;
    printf("Entrer le nombre n:");
    scanf("%d",&n);
    printf("les diviseurs de %d sont: ",n);
    for (i=1 ; i<=n ; i++)
    {
        if(n%i==0)
        printf("%d ,",i);
    }
    return (0);

}