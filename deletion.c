#include<stdio.h>

void display(int arr[], int n)
//Traversing the array

{
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//C Program for Deletion
int indDeletion(int arr[], int size, int index)
{
    for(int i = index; i<size-1;i++)
    {
        arr[i] = arr[i+1];
    }
    
    return 1;
}

int main()
{
    int arr[100] = {7,8,12,27,88};
    int size = 5, index=3;
    display(arr, size);
    indDeletion(arr, size, index);
    size -=1;
    display(arr, size);

    return 0;
}
