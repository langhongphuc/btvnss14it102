#include <stdio.h>
void isPerfectNumber(int n) {
    if (n <= 1) {
        return false;
    }
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

int main() {
    int num1, num2;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);

    if (isPerfectNumber(num1)) {
        printf("%d la so hoan hao.\n", num1);
    } else {
        printf("%d khong phai la so hoan hao.\n", num1);
    }

    if (isPerfectNumber(num2)) {
        printf("%d la so hoan hao.\n", num2);
    } else {
        printf("%d khong phai la so hoan hao.\n", num2);
    }

    return 0;
}
