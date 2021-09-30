#include<stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i=0; i<size; i++)
    {
        if(arr[i]==element)
        {
        return i;
        }
    }
    return -1;
    
}

int main()
{
    int arr[] = {1,3,4,5,7,8,9,2};
    
    int size = sizeof(arr)/sizeof(int);
    int element = 10;
    int searchIndex = linearSearch(arr, size, element);
    printf("The element %d was found at %d\n", element, searchIndex);
    return 0;
}
