#include <stdio.h>

// İsim SOYİSİM: İlker Mırık
// Öğrenci Numarası: 2420161145
// BTK Akademi Sertifika Bağlantısı: https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=WJ1SkNNkmw

#include <stdio.h>

// siralama fonksiyonu
void bubbleSort(int dizi[], int n) {
    int i, j, temp;
    
    // eleman sayisi kadar doner
    for (i = 0; i < n - 1; i++) {
        // siralananlari atla
        for (j = 0; j < n - 1 - i; j++) {
            // buyukse yer degis
            if (dizi[j] > dizi[j + 1]) {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
}

// arama fonksiyonu
int binarySearch(int dizi[], int n, int aranan) {
    int ilk = 0;
    int son = n - 1;
    int orta;

    while (ilk <= son) {
        orta = (ilk + son) / 2; // ortayi bul

        if (dizi[orta] == aranan) {
            return orta; // buldu
        }
        else if (dizi[orta] < aranan) {
            ilk = orta + 1; // saga bak
        }
        else {
            son = orta - 1; // sola bak
        }
    }
    return -1; // yoksa -1 don
}

int main() {
    // ornek sayilar
    int dizi[] = {21, 13, 9, 12, 4};
    int n = 5;
    int aranan, sonuc;
    int i;

    printf("Dizi ilk hali:\n");
    for(i=0; i<n; i++) printf("%d ", dizi[i]);
    printf("\n\n");

    // once sirala
    bubbleSort(dizi, n);

    printf("Sirali hali:\n");
    for(i=0; i<n; i++) printf("%d ", dizi[i]);
    printf("\n\n");

    printf("Aranacak sayi: ");
    scanf("%d", &aranan);

    // aramayi yap
    sonuc = binarySearch(dizi, n, aranan);

    if (sonuc != -1) {
        printf("Sayi %d. sirada bulundu.\n", sonuc);
    } else {
        printf("Sayi bulunamadi.\n");
    }

    return 0;
}
