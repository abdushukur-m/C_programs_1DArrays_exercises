// C program to print first local minimum element
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>

int main(){

    int array[1000], n;
    srand(time(0));

    printf("Enter size of the array a[]: ");
    scanf(" %d", &n);

    for (int  i = 0; i <= n; i++){
        array[i]=rand()%100;
    }

    for (int j = 0; j <= n; j++){
        printf("\na[%d]= %d",j,array[j]);
    }
    printf("\n\n");

    for (int k = 0; k < n; k++){
        if(array[k]<array[k-1]&&array[k]<array[k+1]){
        printf("\na[%d]=%d ",k,array[k]);
        break;
        }
    }
    printf("\n\n");

    return 0;
}
