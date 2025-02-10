#include<stdio.h>
int main ()
{
    //somme //
    int n,i,somme;
    printf("Veuillez entrer le nombre n: ");
    scanf("%d",&n);
    printf("0");
    somme=0;
    for(i=1 ; i<= n ; i++)
    {
        somme=somme + (1/i);
        printf("+(1/%d )",i);
    }
    
    printf("= %d",somme);
    return (0);
}
