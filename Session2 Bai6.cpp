#include <stdio.h>

int main() {
    // Khai bao hang so PI va ban kinh hinh tron
    const float PI = 3.14; // Hang so PI
    float banKinh = 5.0;   // Ban kinh hinh tron

    // Tinh chu vi va dien tich
    float chuVi = 2 * PI * banKinh;        // Cong thuc tinh chu vi
    float dienTich = PI * banKinh * banKinh; // Cong thuc tinh dien tich

    // In ket qua
    printf("Ban kinh: %.2f\n", banKinh);
    printf("Chu vi hinh tron: %.2f\n", chuVi);
    printf("Dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}
