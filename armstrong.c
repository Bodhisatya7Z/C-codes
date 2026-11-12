#include <stdio.h>
#include <math.h>
int main(){
    int num, count=0, sum=000, r,d, t;
    printf("Type your number: ");
    scanf("%d", &num);
    t=num;
    while(num!=0){
        r=num%10;
        num/=10;
        count++;
    }
    num = t;
    while(t!=0){
        r = t%10;
        t/=10;
        sum+=pow(r, count);

    }

    if(sum==num){
        printf("The number is an Armstrong number");
    }
    else{
        printf("The number is not an Armstrong number");
    }
    return 0;
}