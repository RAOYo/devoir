#include<stdio.h>
#include<math.h>

int main ()// premier ou non
{
    int n,b,i;
    float a;
    a = sqrt(n); // racine carrée de n
    do
    {
        printf("Veuillez entrer le nombre : ");
        scanf("%d",&n);
    }while(n<0);
    for(i=2 ; i<a ; i++);
    b = n % i;
    if (b==0)
        printf("\vLe nombre %d n'est pas premier",n);
    else
        printf("\vle nombre %d est premier",n);
 
    return (0);
}