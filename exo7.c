#include<stdio.h>
int main ()
{
    int a,b, c ,max;
    printf("veuillez entrer la valeur de a:");
    scanf("%d",&a);
    printf("veuillez entrer la valeur de b:");
    scanf("%d",&b);
    printf("veuillez entrer la valeur de c:");
    scanf("%d",&c);
    max=a;
    if(max<b && b<c || (max>b && b<c))
    {   max=c;
        printf("le nombre c=%d est max ",max);
    }
    else if (max<c && c<b || (max>c || c<b))
    {   max=b;
        printf("le nombre b=%d  est max",max);
    }
    else
    {
        printf("le max est A= %d ",max);
    }
    return (0);
}

