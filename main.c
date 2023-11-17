#include <stdio.h>
#include <stdlib.h>

/*int emir(int n) {
    if (n % 2 == 0)
        return 1;
    else if (n < 0)
        return 2;
    else
        return 0;
}

int enver(int n) {
    return n % 3 == 0;
}

int main() {
    int n;
    printf("Bir sayi giriniz:\n");
    scanf("%d", &n);

    int emirResult = emir(n);
    int enverResult = enver(n);

    if (emirResult == 1) {
        printf("Sayimiz cift sayidir.\n");
        if (enverResult == 1) {
            printf("Sayimiz 3 ile tam bolunur.\n");
            if (n % 6 == 0) {
                printf("Sayimiz 6 ile tam bolunur.\n");
            }
        }
    } else if (enverResult == 1) {
        printf("Sayimiz 3 ile tam bolunur.\n");
        if (n % 2 != 0) {
            printf("Sayimiz tek sayidir.\n");
        }
    } else if (emirResult == 0) {
        printf("Sayimiz tek sayidir.\n");
    } else if (emirResult == 2) {
        printf("Negatif bir sayi girdiniz. Gireceginiz sayi 0 veya pozitif olmalidir.\n");
    }

    return 0;
} */
   /* void bolunebilirlik(int *n)
    {
        if(*n%2 == 0)
        {
            printf("Sayimiz cift sayidir.\n");
        }
        if(*n%3 == 0)
        {
            printf("Sayimiz 3'un katidir.\n");
        }
        if(*n%2 == 0 && *n%3 == 0)
        {
            printf("Sayimiz 6'nin katidir.\n");
        }
    }



    int main()
    {
        int sayi;
        printf("Lutfen bir sayi giriniz.\n");
        scanf("%d",&sayi);
        bolunebilirlik(&sayi);
    } */
    float calcul(float bir,float iki,char operasyon)
    {
        float islemsonucu;
        switch(operasyon)
        {
        case '+':
            {
                islemsonucu=bir+iki;

            }
        case '-':
            {
                islemsonucu=bir-iki;
            }
        case '/':
        {
            islemsonucu=bir/iki;
        }
        case '*':
        {
            islemsonucu=bir*iki;
        }
        return islemsonucu;

        }

    }

    int main()
    {
        float birincisayi,ikincisayi;
        char islem;
        float sonuc;
        printf("Hangi islem yapmak istiyorsunuz?\n");
        printf("+ - * /\n");
        scanf("%c",&islem);
        printf("Lutfen 2 adet sayi giriniz.\n");
        scanf("%f%f",&birincisayi,&ikincisayi);
        sonuc=calcul(birincisayi,ikincisayi,islem);
        printf("Ilk sayimiz %.2f, Ikinci sayimiz %.2f, Islemimiz %c ve sonucumuz %.2f",birincisayi,ikincisayi,islem,sonuc);

    }

