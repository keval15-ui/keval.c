#include <stdio.h>

int main() {
     int a,b,c;
     printf("enter the value a:");
     scanf("%d",&a);
     printf("enter the value of b:");
     scanf("%d",&b);
     printf("enter the value of c:");
     scanf("%d",&c);
     if(a>b&&a>c){
         printf("%d number is gratest :",a);
     }
     else if (b>a&&b>c){
         printf("%d greatest number:",b);
     }
     else {
         printf("c is the greatest:%d",c);
     }
    return 0;
}
