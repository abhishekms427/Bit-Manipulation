#include<stdio.h>

int setBit(int n){
    int count =0;
    while(n!=0){
        if(n&1){
            count++;
        }
       n=n>>1;
    }

    return count;
}

int main(){
    int n;
    scanf("%d",&n);

    
    printf("%d",setBit(n));
    return 0;
}