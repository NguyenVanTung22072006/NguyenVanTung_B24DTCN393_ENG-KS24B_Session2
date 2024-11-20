#include <stdio.h>

int main() {
	    // Kieu so nguyen (integer): Luu tru cac so nguyen, khong co phan thap phan.
    int age = 18; // Bien so nguyen, luu tru tuoi.

    // Kieu so thuc (float): Luu tru cac so thuc voi do chinh xac don (khoang 6-7 chu so thap phan).
    float height = 1.70f; // Bien so thuc, luu tru chieu cao.

    // Kieu so thuc (double): Luu tru cac so thuc voi do chinh xac kep (khoang 15 chu so thap phan).
    double weight = 53; // Bien so thuc, luu tru can nang.

    // Kieu ky tu (char): Luu tru mot ky tu ASCII (1 byte).
    char grade = 'A'; // Bien ky tu, luu tru mot ky tu duy nhat.

    // Chuoi ky tu (char array): Luu tru mot chuoi cac ky tu, ket thuc bang '\0'.
    char name[] = "Nguyen Van Tung"; // Chuoi ky tu, luu tru ten.

    // In ra cac gia tri bien
    printf("Tuoi: %d\n", age);
    printf("Chieu cao: %.2f m\n", height);
    printf("Can nang: %.1f kg\n", weight);
    printf("Diem: %c\n", grade);
    printf("Ten: %s\n", name);

    return 0;
}
