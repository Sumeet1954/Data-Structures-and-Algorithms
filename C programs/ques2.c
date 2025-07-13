#include<stdio.h>

void main(){
    int arr[3][3]={{10,2,3},{4,5,6},{7,8,9}};
    int res[3] = {0,0,0};
    for(int i = 0; i < 3;i++){
        for(int j = 0; j < 3; j++){
            res[i] = res[i] + arr[j][i];
        }
    }

    if(res[0]>res[1] && res[0]>res[2]){
        printf("The index 0 is greator\n:%d",res[0]);
    }
    else if(res[0]<res[1] && res[1]>res[2]){
        printf("The index 1 is greator\n :%d",res[1]);
    }
    else{
        printf("The index 2 is greator\n is :%d",res[2]);
    }

}