#include <stdio.h>

int main() {
    // Khai bao va khoi tao hai bien so nguyen
    int num1 = 10; // Bien so nguyen thu nhat
    int num2 = 20; // Bien so nguyen thu hai

    // Tinh tong, hieu, tich, va thuong
    int sum = num1 + num2;        // Tong cua num1 va num2
    int hieu = num1 - num2; // Hieu cua num1 va num2
    int tich = num1 * num2;    // Tich cua num1 va num2

    // Kiem tra chia cho 0 de tinh thuong
    float thuong = 0.0f; // Khai bao bien thuong voi kieu float
    if (num2 != 0) {
        thuong = (float)num1 / num2; // Tinh thuong, ep kieu de ket qua chinh xac
    } else {
        printf("Khong the chia cho 0\n");
    }

    // In ket qua
    printf("Tong cua %d va %d la: %d\n", num1, num2, sum);
    printf("Hieu cua %d va %d la: %d\n", num1, num2, hieu);
    printf("Tich cua %d va %d la: %d\n", num1, num2, tich);
    if (num2 != 0) {
        printf("Thuong cua %d va %d la: %.2f\n", num1, num2, thuong);
    }

    return 0;
}
