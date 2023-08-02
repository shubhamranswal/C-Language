#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    printf("\nEnter the number of terms in the array: ");
    scanf("%d", &n);

    int array[n];

    printf("\nEnter the elements: ");

    for (int i = 0; i<n; i++){
        scanf("%d", &array[i]);
    }

    for (int k = 0; k < n; k++){
        for (int ptr = 0; ptr <= n-k; ptr++ ){
            if (array[ptr] > array[ptr+1]){
                int temp = array[ptr];
                array[ptr] = array[ptr+1];
                array[ptr+1] = temp;
            }
        }
    }

    for (int j = 0; j<n; j++){
        printf("%d ", array[j]);
    }
}