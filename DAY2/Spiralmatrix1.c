#include<stdio.h>

int main(){
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int row=3;
    int col=4;
    int top = 0;
    int bottom = row-1;

    int left = 0;
    int right = col-1;
    while(top<=bottom&&left<=right){
        for(int i=left;i<=right;i++){
            printf("%d ",arr[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            printf("%d ",arr[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                printf("%d ",arr[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                printf("%d ",arr[i][left]);
            }
            left++;
        }
    }
}