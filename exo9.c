#include<stdio.h>
int main()
{
    int n ,i;
    printf("Veuillez entrer le nombre que vous voulez: ");
    scanf("%d",&n);
    printf("les nombres paires entre 1 et %d sont:",n);
    for( i=1 ; i<=n ; i++)
    {
        if(i%2==0)
            printf("%d, ",i);
    }
    return (0);
}