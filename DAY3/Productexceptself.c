#include<stdio.h>
#include<stdlib.h>
int *proself(int *nums,int n){
    int *result=malloc(n*sizeof(int));
    //prefix product
    result[0]=1;
    for(int i=1;i<n;i++){
        result[i]=result[i-1]*nums[i-1];
    }
    //suffix product
    int suffix=1;
    for(int i=n-1;i>=0;i--){
        result[i]=result[i]*suffix;
        suffix=suffix*nums[i];
    }
    return result;
}
int main(){
    int nums[]={1,2,3,4};
    int n=4;
    //printf("%p",nums);
    int *result = proself(nums, n);

    // Print result
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    free(result);

    return 0;
}