#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10, 11};
    //we are searching for the number of 9
    int low_index = 0;
    int high_index = 10; 
    int mid_index;
    int num = 9;

    while (low_index <= high_index)
    {
        mid_index = (low_index + high_index) / 2; 

        if (num == arr[mid_index])
        {
            break;           
        }

        if (num < arr[mid_index])
        {
            high_index = mid_index - 1;

        }else
        {
            low_index = mid_index + 1;
        }
    }

    if (low_index > high_index)
    {
        printf("%d is not in the array\n", num);
    }
    else
    {
        printf("%d is pound in the array, it is the %d th element of the array.\n", arr[mid_index], mid_index);
    } 

    return 0;
}