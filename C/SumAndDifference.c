#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int x, y;
    float j, k;

    scanf("%d", &x);
    scanf("%d", &y);  
    scanf("%f", &j);  
    scanf("%f", &k);  

    int sum = x+y;
    int sub = x - y;

    float sumf = j + k;
    float subf = j - k;

    printf("%d %d\n", sum, sub);
    printf("%.1f %.1f", sumf, subf);

    return 0;
}