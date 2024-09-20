#include <stdio.h>
int main() {
    int arr[10];
    int n, largest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("The largest element in the array is: %d\n", largest);
    return 0;
}


