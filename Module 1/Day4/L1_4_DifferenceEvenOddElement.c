#include<stdio.h>

int main(){

    int n,i;
    int evenSum=0,oddSum=0;
    printf("Enter number of inputs\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(i=0 ; i<n ; i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            evenSum+=arr[i];
        else
            oddSum+=arr[i];
    }
    int res;
    if(evenSum>=oddSum)
        res=evenSum-oddSum;
    else
        res=oddSum-evenSum;
    // printf("Sum of Even Elements: %d\nSum of Odd Elements: %d\n",evenSum,oddSum);
    printf("Difference between even and odd elements is : %d",res);
    return 0;
}