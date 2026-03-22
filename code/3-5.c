#include <stdio.h>
#include <stdarg.h>

void my_sum(char type, int count, ...) {
    va_list ap;
    va_start(ap, count);

    if (type == 'S') {                    // 문자열 여러 개 출력 (공백으로 구분)
        for (int i = 0; i < count; i++) {
            char *str = va_arg(ap, char *);
            printf("%s", str);
            if (i != count - 1) printf(" ");
        }
        printf("\n");
    }
    else if (type == 'C') {               // 문자 여러 개 이어서 출력
        for (int i = 0; i < count; i++) {
            char c = (char)va_arg(ap, int);
            printf("%c", c);
        }
        printf("\n");
    }
    else if (type == 'D') {               // 정수 합계 계산 후 출력
        int sum = 0;
        for (int i = 0; i < count; i++) {
            sum += va_arg(ap, int);
        }
        printf("%d\n", sum);
    }

    va_end(ap);
}

int main() {
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);

    return 0;
}
