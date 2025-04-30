#include <stdio.h>

// 최대공약수(GCD)를 구하는 함수
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("두 수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);
    printf("%d와 %d의 최대공약수(GCD)는: %d\n", num1, num2, result);

    return 0;
}
