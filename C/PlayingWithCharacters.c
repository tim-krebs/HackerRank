#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char ch[100];
    scanf("%[^\n]%*c", &ch);

    char s[100];
    scanf("%[^\n]%*c", &s); 

    char scn[100];
    scanf("%[^\n]%*c", &scn);

    printf("%s\n", ch);
    printf("%s\n", s);  
    printf("%s\n", scn);


    return 0;
}