#include<stdio.h>

void swap(int*a,int *b)
{
    int *tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int n,int a[])
{
    for(int j=0; j<n; j++)
    {
        int min = a[j],pos=j;

        for(int i=j; i<n; i++)
        {
            if(a[i]<min)
            {

                min= a[i];
                pos = i;
            }
        }
        swap(&a[j],&a[pos]);
    }
}

int main()
{

    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    sort(n,a);

    for(int i=0; i<n; i++)
        printf("%d ",a[i]);

    return 0;

}
