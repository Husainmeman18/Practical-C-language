#include <stdio.h>

int main() {
    int i,num,sum=0,first,last;
    printf("Enter a three digit's positive number:");
    scanf("%d",&num);
    first=num;
    while(first >= 10){
        first=first/10;
    }
    last=num%10;
    sum=first+last;
    printf("The sum of First and Last digit is:%d",sum);
    return 0;
}