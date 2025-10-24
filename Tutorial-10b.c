/*Date: 10/10/2025*/
// 


#include<stdio.h>
int main() {
    int subject;
    printf("enter 1 for science\n");
    printf("enter 2 for maths\n");    
    printf("enter 3 for both");
    printf("enter your subject number :");
    scanf("%d", &subject);
if (subject==1 || subject==2) {
    printf("your gift is of $15");
}
else if(subject==3) {
    printf("your gift is of $45");
}
else {
    printf("enter a valid subject number and try again");
}
return 0;
}
