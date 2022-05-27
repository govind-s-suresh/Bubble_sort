# include<stdio.h>
int main(){
    int i,j,t,n;
    printf("Enter the Number of Elements\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    for(i=0;i<n-1;i++)
    for(j=0;j<(n-1)-i;j++)
    if(array[j]>array[j+1])
    {
        t=array[j];
        array[j]=array[j+1];
        array[j+1]=t;
    }
    printf("The sorted array is as Follows\n");
    for(i=0;i<n;i++)
    printf("%d ",array[i]);

}