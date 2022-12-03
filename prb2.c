#include <stdio.h>
void findingLargAndSmall(int n, int arr[n],int k){
        for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
printf("%dth large element %d\n",k,arr[n-k]);
printf("%dth small element %d\n",k,arr[k-1]);

}
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
   findingLargAndSmall(n,arr,k);
    return 0;
}
