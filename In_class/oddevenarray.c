void main() 
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
 
    int arr[n];

    printf("Enter %d elements for array: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
 
    //Print even numbers
    printf("Even numbers are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            printf("%d ", arr[i]);
    }
 
    //print odd numbers
    printf("\nOdd numbers are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
            printf("%d ", arr[i]);
    }
}