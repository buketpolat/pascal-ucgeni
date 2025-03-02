#include <stdio.h>
#include <stdlib.h>

int main() {
    int satirSayisi, i, j, k, sayi = 1;
/*
    satirSayisi : Kullanıcıdan alınacak satır sayısını tutar.
    i,j,k : Döngüler için sayaç değişkenleri.
    sayi : Pascal üçgenindeki sayıları tutar.
*/
    
    printf("Pascal ucgeninin satir sayisini girin: "); // kullanıcıdan satır sayısının girilmasini ister
    scanf("%d", &satirSayisi); // Kullanıcının girdiği satır sayısını satirSayisi değişkenine atar.

    for (i = 0; i < satirSayisi; i++) {
        for (k = 0; k < satirSayisi - i - 1; k++) {
            printf("  "); // Boşlukları ayarla
        }
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                sayi = 1;
            } else {
                sayi = sayi * (i - j + 1) / j;
            }
            printf("%4d", sayi);
        }
        printf("\n");
    }

    /*
Döngüler ve Pascal Üçgeni Oluşturma:

Dış Döngü (i): Satırları kontrol eder.
İç Döngü (k): Her satırın başında boşlukları ayarlar. Üçgenin düzgün görünmesini sağlar.
İç Döngü (j): Her satırdaki sayıları hesaplar ve yazdırır.
Sayı Hesaplama:
if (j == 0 || i == 0): İlk ve son sayıların 1 olduğunu kontrol eder.
else: Diğer sayıları Pascal üçgeni formülüne göre hesaplar.
Sayı Yazdırma:
printf("%4d", sayi);: Sayıyı 4 karakterlik bir alana yazdırır. Bu, sayıların düzgün hizalanmasını sağlar.
Satır Sonu:
printf("\n");: Her satırın sonunda yeni bir satıra geçer.

Kodun Çalışması:
1-Kullanıcıdan Pascal üçgeninin satır sayısı istenir.
2-Dış döngü satırları kontrol eder.
3-İç döngüler her satırdaki boşlukları, sayıları hesaplar ve yazdırır.
4-Her satırın sonunda yeni bir satıra geçilir.
5-Pascal üçgeni ekrana yazdırılır.
    */
    return 0;
}