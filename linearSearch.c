#include<stdio.h>
#include<conio.h>

void main(){
    int n, search;
    printf("\nEnter the number of terms in the array: ");
    scanf("%d", &n);

    int loc = n;

    int array[n];

    printf("\nEnter the elements: ");

    for (int i = 0; i<n; i++){
        scanf("%d", &array[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d",&search);

    for (int k = 0; k < n; k++){
        if(array[k] == search)
            loc = k;
    }
    if (loc == n)
        printf("\nSearch failed!!!\nItem not found.");
    else
        printf("The position of %d is %d.", search, loc+1);
}