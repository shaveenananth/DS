#include <stdio.h>

int main() {
    int rem;
    long int ph;
    int arr[10]={};
    printf("Enter your phone number");
    scanf("%ld",&ph);
    while(ph>0)
    {
        
        rem=ph%10;
        arr[rem]=1;
        ph=ph/10;
    }
    int s=sizeof(arr)/sizeof(arr[0]);
    printf("%d",s);
    for(int i=0;i<s;i++)
    {
        printf("\n %d",arr[i]);
    }

    return 0;
}
