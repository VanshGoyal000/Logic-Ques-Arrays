// Write a C program to find the position of a target value within a sorted array using binary search.

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[20];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int low = 0 , high = n-1;

    int target;
    printf("Enter the target value: ");
    scanf("%d", &target);

    while(low <= high){
        int mid = (low + high)/2;
        if(target == arr[mid]){
            printf("The target value is at index %d", mid);
            break;
        }
        else if(target < arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        }
    

}