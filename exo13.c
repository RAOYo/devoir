#include<stdio.h>

int main()

{ 
    //multiplication//
    long n, i , multiplication;
    printf("veuillez entrer un nombre :");
    scanf("%ld",&n);
    multiplication=1;
    printf("1");
    for(i=2 ; i<=n ; i++)
    {
        multiplication=multiplication*i;
        printf("*%ld ",i);
        
    }
    printf("= %ld\n",multiplication);
    printf("la multiplication %ld est: %ld " ,n,multiplication);
    return(0);
}
