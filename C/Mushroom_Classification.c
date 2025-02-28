#include <stdio.h>
int main(void) {
    float T; 
    scanf("%f", &T);
    if (T < 5) {printf("SAFE");}
    else if (T < 8.9) {printf("TOXIC");}
    else {printf("VERY TOXIC");}
}