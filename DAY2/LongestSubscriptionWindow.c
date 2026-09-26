#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int longestwindow(int days[],int n,int k){
    int left=0,right=0;
    int maxlen=0;
    for(right=0;right<n;right++){
        if(days[right]-days[left]>k){
            left++;
        }
        maxlen=fmax(maxlen,right-left+1);
    }
    return maxlen;
}

int main(){
    int days[]={1,3,5,7,9};
    int n=sizeof(days)/sizeof(days[0]);
    int k=4;
    int result=longestwindow(days,n,k);
    printf("The longest subscription window is: %d\n", result);
    return 0;
}