#include <stdio.h>

// İsim SOYİSİM: İlker Mırık
// Öğrenci Numarası: 2420161145
// BTK Akademi Sertifika Bağlantısı: https://github.com/ilker05/veri-yapilari-odev/blob/main/sertifika.pdf

void bubbleSort(int dizi[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int dizi[], int sol, int sag, int aranan) {
    while (sol <= sag) {
        int orta = sol + (sag - sol) / 2;
        if (dizi[orta] == aranan)
            return orta;
        if (dizi[orta] < aranan)
            sol = orta + 1;
        else
            sag = orta - 1;
    }
    return -1;
}

int main() {
    int dizi[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int aranan, i;

    bubbleSort(dizi, n);

    printf("Siralanmis Dizi: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    printf("Aranacak sayiyi giriniz: ");
    scanf("%d", &aranan);

    int sonuc = binarySearch(dizi, 0, n - 1, aranan);

    if (sonuc != -1)
        printf("Sayi bulundu, indeks: %d\n", sonuc);
    else
        printf("Sayi bulunamadi.\n");

    return 0;
}