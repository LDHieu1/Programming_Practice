#include <stdio.h>
int min_num( int x, int y, int z) {
    int min = x; 
    if (min > y) {min = y;}
    if (min > z) {min = z;}
    return min;
}
int max_num( int x, int y, int z) {
    int max = x; 
    if (max < y) {max = y;}
    if (max < z) {max = z;}
    return max;
}
int medium_num (int x, int y, int z) {
    return x + y + z - (min_num(x,y,z) + max_num(x,y,z));
}
int main(void) {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
  
    printf("%d %d %d",min_num(a,b,c), medium_num(a,b,c), max_num(a,b,c));

}