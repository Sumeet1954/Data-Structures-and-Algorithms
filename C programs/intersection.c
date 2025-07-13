#include<stdio.h>

int main(){
    int arr1[] = {1,2,3,4};
    int arr2[] = {2,3,4,5};

    int res[4] ={0,0,0,0};
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            if(arr1[i] == arr2[j]){
                res[i] = arr1[i];
             }
        }
    }
    printf("The Result array is :");
    for(int i = 0 ; i<4; i++){
        if(res[i] != 0){
            printf("%d",res[i]);
        }
    }

    return 0;
}
