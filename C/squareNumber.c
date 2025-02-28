# include <stdio.h>
# include <math.h>
int main(void) {
    long int a;
    scanf("%ld",&a);
    double n = sqrt(a);
    long int max_test = (long int) n + 1;
    int check = 0;
    for (int i = 0; i <= max_test; ++i ){
        if (a == i*i)
        {printf("YES");
        check = 1;
        break;}
    }
if (check == 0) {printf("NO");}
}