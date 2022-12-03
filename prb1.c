//adding array prb.1 25.5
#include<stdio.h>
int Checking (int n, int arr[n],int k)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<k)
        {
            count++;
        }
        if(arr[i]>k)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n,k;
    int arr[n];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);

    printf("%d\n",Checking(n,arr,k));

    return 0;

}
