#include <stdio.h>

int main() {
    // Khai bao va khoi tao hai bien chieu dai va chieu rong
    int chieuDai = 10; // Bien chieu dai cua hinh chu nhat
    int chieuRong = 5; // Bien chieu rong cua hinh chu nhat

    // Tinh chu vi va dien tich
    int chuVi = 2 * (chieuDai + chieuRong); // Cong thuc tinh chu vi
    int dienTich = chieuDai * chieuRong;    // Cong thuc tinh dien tich

    // In ket qua
    printf("Chieu dai: %d\n", chieuDai);
    printf("Chieu rong: %d\n", chieuRong);
    printf("Chu vi hinh chu nhat la: %d\n", chuVi);
    printf("Dien tich hinh chu nhat la: %d\n", dienTich);

    return 0;
}
