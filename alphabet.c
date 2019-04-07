#include <stdio.h>

int main() {
    char ch;
    printf("read the value of ch");
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
       {
           printf("ch is an alphabet\n");
       } else {
           printf("ch is not an alphabet\n");
       }  
       return 0;
}         
