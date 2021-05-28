#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int tmp = 0;
    int arr[4] = {a, b, c, d};

    for(int i = 0; i < 4; i++){
        if(arr[i] < arr[i+1]){
            tmp = arr[i+1];
        }
    }
    return tmp;
}


int main() {
    int a, b, c, d, m1, m2;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = (m1=a>b?a:b)>(m2=c>d?c:d)?m1:m2;//max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}