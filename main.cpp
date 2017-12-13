#include <stdio.h>

int main()
{
    int a[10],i,j,*p,*k,aux;

    p=a;
    for(i=0;i<10;i++)
    {
        printf ("Digite um numero: ");
        scanf("%d",p++);
    }

    p = a;
    for(i=0;i<10;i++)
    {
        k = a;
        for(j=0;j<10;j++)
        {
            if(*p < *k)
            {
                aux=*p;
                *p=*k;
                *k=aux;
            }
            k++;
        }
        p++;
    }
    p=a;
    for(i=0;i<10;i++)
    {
    printf("Ordem: %d\n",*p);
    p++;
    }
}
