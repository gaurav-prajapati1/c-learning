#include<stdio.h>
int main() {
    int a;
    printf("1 means passed in maths or science\n2 means passed in both\n3 means failed");
    printf("\nEnter:");
    scanf("%d",&a);
    if (a==1) {
        printf("prize is 15");
    }
    else if (a==2) {
        printf("prize is 45");
}
else {
printf ("failed"); 
    
}
return 0;
}