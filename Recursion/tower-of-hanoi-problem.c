#include<stdio.h>

void performTransfer(int n, char from, char to, char using){
   if(n==0) return;
        performTransfer(n-1, from, using, to);
        printf("transfering %d from %c to %c \n", n, from, to );
        performTransfer(n-1, using, to, from);
}
int main(){
    int n;
    printf("enter the number of discs: \n");
    scanf("%d", &n);
    performTransfer(n, 'A', 'C', 'B');
}