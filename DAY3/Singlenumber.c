#include<stdio.h>
int main(){
    int nums[]={4,1,2,1,2};
    int n=5;
    int single=0;
    for(int i=0;i<n;i++){
        single^=nums[i];
    }
    printf("%d",single);
    return 0;
}