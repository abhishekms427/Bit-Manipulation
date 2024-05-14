#include<stdio.h>
int is_power_of_two(int n){
    return n && !(n&n-1);
}

int main(){
    int n;
    scanf("%d",&n);

    if(is_power_of_two(n)) printf("Yes %d is power of 2",n);
    else printf("No %d is not power of 2.",n);
}