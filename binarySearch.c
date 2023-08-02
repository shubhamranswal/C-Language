#include<stdio.h>
#include<conio.h>

void main(){
    int n, search, start=0;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    int loc = n;
    int end = n-1;
    int mid = (start + end)/2;

    int array[n];

    printf("\nEnter the elements: ");

    for (int i = 0; i<n; i++){
        scanf("%d", &array[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d",&search);

    while(start<=end){
        if (search == array[mid]){
            loc = mid;
            break;}
        else if (array[mid] > search)
            end = mid - 1;
        else if (array[mid] < search)
            start = mid + 1;
        mid = (start + end)/2;
    }

    if (loc == n)
        printf("\nSearch failed!!!\nItem not found.");
    else
        printf("The position of %d is %d.", search, loc+1);
}