#include <stdio.h>

int add(int a, int b) {
    printf("%d + %d = %d\n", a, b, (a+b));
}
int sub(int a, int b) {
    printf("%d - %d = %d\n", a, b, (a-b));
}
int mul(int a, int b) {
    printf("%d * %d = %d\n", a, b, (a*b));
}
int div(int a, int b) {
    printf("%d / %d = %d\n", a, b, (a/b));
}

int main(void) {
    int a = 10;
    int b = 5;
    add(a, b);
    sub(a, b);
    mul(a, b);
    div(a, b);
    
    return 0;
}
