#include<stdio.h>
#include<stdlib.h>

int main()
{
    void printarray(int arr[100], int size){
        printf("given array:[");
    for (int k=0; k<size; k++){
            printf("%d", arr[k]);

    }
    printf("]\n\n");
    }
    /*array insertation algorithms*/
    int size =6, pos,item,i;
    int arr[100] = { 10, 3, 6, 4, 8, 6, 2};
    printarray(arr,size);
    printf("please give the item to insert\n");
    scanf("%d", & item);
    printf("please give the position to insert\n");
    scanf("%d", & pos);
    if (pos<0||pos>size+1){
        printf("invalid position!\n");
    }
    else{
        for (i=size-1; i>=pos -1; i--){
            arr[i+1]=arr[i];//right shift
        }
        arr[pos-1]=item;//insert item
        size++; //increase size
    }
    printarray (arr, size);
    return 0;
}
