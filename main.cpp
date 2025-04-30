#include <stdio.h>

int main() {
    int n;
    printf("정수의 합을 구할 숫자의 개수를 입력하세요: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("1부터 %d까지의 합은: %d\n", n, sum);

    return 0;
}
