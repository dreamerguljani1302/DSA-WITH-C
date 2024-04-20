#include<stdio.h>
 void ss(int a[],int n)
 {
 }
void main()
{
    int a[10]={23,33,43,44,42,32,46,12,3,10};
    int n=10;
    printf("sorted array  in ascending order:\n");
    int temp;
    for(int gap=n/2;gap>=1;gap /= 2)
    {
        for(int j=gap;j<n;j++)
        {
            for(int i=j-gap;i >=0 ;i-=gap)
            {
                if(a[j]>a[i])
                {break;}
                else
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
                
            }    

        }
    }
    for(int i = 0;i < 10;i++)
    printf( "%d\t",a[i]);    

    
}