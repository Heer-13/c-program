#include<stdio.h>
#include<conio.h>
int main()
{

int a[5],i;
printf("enter 5 values");
for(i=0;i<5;i++)
    scanf("%d",&a[i]);
printf("\nOriginal array:");
for(i=0;i<5;i++)
printf("%d  ",a[i]);

    printf("%d  ",a[i]);
for(i=0;i<4;i++)
    for(int j=i+1;j<5;j++)
    if(a[i]>a[j])
{

    int t=a[i];
    a[i]=a[j];
    a[j]=t;
}
printf("\nSorted array:");
for(i=0;i<5;i++)
    printf("%d  ",a[i]);
}

