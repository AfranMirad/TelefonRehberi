#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Telephone
{
    int isim[100];
    long int kod;
    long int numara;
};
int main()
{

        setlocale(LC_ALL,"Turkish");

        struct Telephone Tel;

        int i,x,s=0;

        FILE *fp;

        do
        {
        printf("\n***** TELEFON REHBERÝ *****\n\n");
        printf("1 -- Kayit ekle\n");
        printf("2 -- Telefonlari Listele\n");
        printf("3 -- Kaydý Düzenle\n");
        printf("4 -- Numara ile Kayýt Bul\n");
        printf("5 -- Ýsim ile Kayýt Bul\n");
        printf("6 -- Kayýt Sil\n");
        printf("0 -- Cikis\n");
        scanf("%d",&x);

        if(x==1)
        {
            fp=fopen("rehber.txt","w");
            if(fp ==NULL)
            {
            printf("rehber.txt dasyasi acilmadi.\n");
            exit(1);
            }
            else{
            printf("Isım Giriniz     :  ");
            scanf("%s",Tel.isim);
            printf("\n");
            printf("Kodunu Giriniz   :  ");
            scanf("%d",&Tel.kod);
            printf("\n");
            printf("Numarayı Giriniz :  ");
            scanf("%d",&Tel.numara);
            printf("\n");
            printf("\n");
            s++;
            fprintf(fp,"%d   %s  %d\n", Tel.kod , Tel.isim, Tel.numara);
            fclose(fp);
            }
        }
        if(x==2)
        {
            for(i=0;i<s;i++)
                printf("%d  %s  %d\n",Tel.kod,Tel.isim,Tel.numara);
        }

        if(x==3)
        {
            printf("Kayddı dzenle yapilacak");
        }
        if(x==4)
        {
            printf("asd");
        }



//            printf("%s",Tel[s].isim);


        }while(x != 0);

}
