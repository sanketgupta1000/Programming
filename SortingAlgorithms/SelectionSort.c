#include<stdio.h>

int main(){
    int arr_len, i, j, temp;
    printf("Enter the number of elements you want to sort in ascending order:");
    scanf("%d", &arr_len);
    int array[arr_len];
    printf("Enter the numbers:");
    for(i=0; i<arr_len; i++){
        scanf("%d", &array[i]);
    }

    for(i=0; i<arr_len; i++){
        for(j=i+1; j<arr_len; j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    printf("The sorted numbers are:");
    for(i=0; i<arr_len; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}