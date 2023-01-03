2)
#include <stdio.h> //Kütüphane eklendi

int main() {
    int a;
    printf("Hos Geldiniz! Lutfen Alanini Hesaplamak Istediginiz Sekli Seciniz.\n"); //Kullanıcıya çokgen seçimi yaptırdık
    printf("1-Kare\n2-Dikdortgen\n3-Ucgen\n4-Daire\n"); //Seçenekleri belirledik
    scanf_s("%d", &a);

    if (a == 1) {  //Karenin alanı için tanımlamalar yapılıyor
        float kenar, alan;
        printf("Alani Hesaplanacak Olan Karenin Kenarini Giriniz: "); //Kenar bilgisi isteniyor
        scanf_s("%f", &kenar);
        alan = kenar * kenar;  //Karenin alan hesaplama formulünü girdik
        printf("Karenin Alani: %f Seklindedir", alan); //Hesaplamayı yaptı ve çıktıyı verdi
    }

    if (a == 2) { //Dikdörtgenin alanı için tanımlamalar yapılıyor
        float uzunkenar, alan, kisakenar;
        printf("Alani Hesaplanacak Olan Dikdortgenin Once Uzun Sonra Kisa Kenarini Giriniz: \n"); //Kenar bilgileri isteniyor
        scanf_s("%f", &uzunkenar);
        scanf_s("%f", &kisakenar);
        alan = uzunkenar * kisakenar; //Dikdörtgenin alan hesaplama formulünü girdik
        printf("Dikdortgenin Alani: %f Seklindedir", alan); //Hesaplamayı yaptı ve çıktıyı verdi
    }

    if (a == 3) { //Üçgenin alanı için tanımlamalar yapılıyor
        float taban, alan, h;
        printf("Alani Hesaplanacak Olan Ucgenin Taban ve Yukseklik Bilgisini Giriniz: \n");
        scanf_s("%f", &taban);
        scanf_s("%f", &h);
        alan = (taban * h) / 2; //Üçgenin alan hesaplama formulünü girdik
        printf("Ucgenin Alani: %f Seklindedir", alan); //Hesaplamayı yaptı ve çıktıyı verdi
    }

    if (a == 4) { //Dairenin alanı için tanımlamalar yapılıyor
        float r, alan, pi = 3.14;
        printf("Alani Hsaplanacak Olan Dairenin Yaricapini Giriniz: \n");
        scanf_s("%f", &r);
        alan = pi * r * r; //Dairenin alan hesaplama formulünü girdik
        printf("Dairenin Alani: %f Seklindedir", alan); //Hesaplamayı yaptı ve çıktıyı verdi
    }
    return 0;
}
