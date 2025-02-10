#include<stdio.h>

int main ()
{
    int i, n ;
    printf("Veuillez entrer le nombre que vous voulez n : ");
    scanf("%d",&n);
    printf(" Tous les nombres entre 1 et %d sont: \n", n);
    for(i=1; i<=n; i++)
    {
        printf("%d,", i);
    }
    
    
    return (0);
}