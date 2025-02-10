#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,x,x0,x1,x2,x3,x4, delta;
    printf("---Résolution de l'équation du second degré---\n\n");
    printf("Veuillez entrer la valeur de a:");
    scanf("%f",&a);
    printf("Veuillez entrer la valeur de b:");
    scanf("%f",&b); 
    printf("Veuillez entrer la valeur de c:");
    scanf("%f",&c);

    if(a==0 && b==0 )
    {
        printf("pas de solution");
    }
    else if (a==0)
    {
        x= -c/b;
        printf("la solution est : %.2f\n",x);
    }
    else if (a != 0)
    {
        delta = (pow(b,2) - (4 * a *c));
        if (delta > 0)
        {
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            printf("les 2 solutions rélles sont=\n x1=%.2f , x2= %.2f\n",x1,x2);
        }
        else if(delta==0)
        {
            x0= -b /(2*a);
            printf("l'unique solution est: \n x0= %.2f\n",x0);
        }
        else 
        {
            x3= -b /(2*a);
            x4= (sqrt(-delta))/ (2*a);
            printf("les solutions complexes sont: %.2f-i %.2f, %.2f+i %.2f",x3,x4,x3,x4);
        }

    }
            return 0 ;
} 
