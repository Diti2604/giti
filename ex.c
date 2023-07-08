//iferati22
#include <stdio.h>
#include <stdlib.h>
void read(int n,int arr1[],int arr2[]);
void sum(int n,int arr1[],int arr2[]);

int main()
{
    int n;
    scanf("%d", &n);
    int arr1[10000];
    int arr2[10000];
    read(n,arr1,arr2);
    sum(n,arr1,arr2);
    return 0;
}

void read(int n,int arr1[],int arr2[])
{
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr2[i]);
    }
}

void sum(int n,int arr1[],int arr2[])
{
    for(int i=0; i<n; i++)
    {
        int sumt=0;
        sumt=arr1[i]+arr2[i];
        printf("%d ", sumt);
    }
}