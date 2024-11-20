#include <stdio.h>

int main() {
    // Khai bao va khoi tao bien luu canh hinh vuong
    int canh = 5; // Canh hinh vuong co do dai 5 don vi

    // Tinh chu vi va dien tich hinh vuong
    int chuvi = 4 * canh;    // Chu vi hinh vuong = 4 * canh
    int dientich = canh * canh; // Dien tich hinh vuong = canh * canh

    // In ket qua
    printf("Canh hinh vuong: %d\n", canh);
    printf("Chu vi hinh vuong: %d\n", chuvi);
    printf("Dien tich hinh vuong: %d\n", dientich);

    return 0;
}
