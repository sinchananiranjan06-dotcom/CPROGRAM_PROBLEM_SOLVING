#include<stdio.h>
#include<math.h>

int cal(int nums[],int n, int k){
    int left=0;
    int right=k-1;
    int sum=0;
    for(int i=left;i<=right;i++){ 
        sum+=nums[i];
    }
    printf("%d\n ",sum);
    while(right<n-1){
        sum=sum-nums[left];
        left++;
        right++;
        sum=sum+nums[right];

        printf("%d\n ",sum);
    }
    return sum;
}

int main(){
    int nums[]={1,2,5,7,1};
    int n=5;
    int k=3;

    cal(nums, n, k);
    
    return 0;
}