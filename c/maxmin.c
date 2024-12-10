#include<stdio.h>
int main()
{
    int n,i,max,min;
    printf("enter the array elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d integers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);}
        max=arr[0];
        min=arr[0];
        for(i=1;i<n;i++)
        {
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        printf("maximum number:%d\n",max);
        printf("minimum numbber:%d\n",min);
        return 0;
    
}