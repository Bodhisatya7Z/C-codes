#include <stdio.h>
int fib(int n){
    if (n==1 || n==2){
        return 1;
    }
    else
    return fib(n-1)+fib(n-2);
}
int main(){
    int iUser, x;
    printf("Enter a range number: ");
    scanf("%d", &iUser);
    printf("The fibonacci series is:\n ");
    for(x=1; x<=iUser;x++){
        printf("%d\t", fib(x));
    }
return 0;
}