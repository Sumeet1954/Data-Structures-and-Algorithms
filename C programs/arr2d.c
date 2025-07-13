#include<stdio.h>

void main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{11,10,19}};
    int key = 6;
    for(int i = 0 ; i< 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] == key){
                printf("Key Found");
            }
            else{
                printf("Not Found");
            }
        }
    }
}