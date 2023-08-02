#include<stdio.h>
#include<conio.h>

void main(){
    int arr[5];
    float sum=0.00;
    for (int i=0; i<5; i++){
        scanf("%d ",&arr[i]);
        sum+=arr[i];
    }
    printf("Average - %.21f", sum/5);

}