#include<stdio.h>
int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Your given age is %d\n",age);
    if (age>=18)
    {
        printf("You are eligible to vote !\n");
    } else if (age>10)
    {
        printf("You are a teenager ");
    }
    
    
    else {
        printf("Your are not eligible to vote !\n");
    }
    
    return 0;
}
