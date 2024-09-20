#include <stdio.h>
int main() {
    int num1, num2, num3, num4, num5;
    float avg;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
    avg = (num1 + num2 + num3 + num4 + num5)/5.0;
    printf("The average is %f\n", avg);
    printf("**Coded by Ashim Bastola**\n");
    printf("**Grade 11 'M1'**\n");
    return 0;
}
