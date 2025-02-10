#include <stdio.h>

//pgcd de deux nombres//
int main()
{
    long a,b,r ;
    printf("Veuillez entrer le premier nombre : ");
    scanf("%ld",&a);
    printf("Veuillez entrer le second nombre : ");
    scanf("%ld",&b);
    r=a%b;
    do
    {
        if(a>b)
       {
        a=b;
        b=r;
        r= a%b;
        
       }
       else 
       
        {
        b=a;
        a=r;
        r=b%a;
        
        }
       
    }while(r!=0);
    printf("le PGCD entre ces deux nombres est: %ld", b);
    return (0);
}
