#include<stdio.h>
#include<conio.h>
#include<Windows.h>
void kisiekle();
void goruntule();
void guncelle();
void sil();
void arama();
FILE *rehber;
struct{
	char ad[20];
	char syad[20];
	char evtelno[11];
	char ceptelno[11];
}kisi;

void main()
{
	int secim;
		printf("\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\n");
		printf("\t\t\t\t\tMENU\n");
		printf("\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\n");
		printf("\n");
		printf("\n");
	for(;;)
	{
		printf("1-Kisi ekle\n");
		printf("2-Goruntule\n");
		printf("3-Guncelle\n");
		printf("4-Sil\n");
		printf("5-Arama(ad)\n");
		printf("6-Cikis");
		printf("\nSeciminiz: ");
		scanf_s("%d",&secim);
		system("CLS");
		switch(secim)
		{
			case 1:
				kisiekle();
					break;
			case 2:
				goruntule();
					break;
			case 3:
				guncelle();
					break;
			case 4:
				sil();
					break;
			case 5:
				arama();
					break;
			case 6:
					exit(0);
					break;
			default:
				printf("Lutfen 1-6 arasinda bir islem numarasi giriniz..");
				getch();
				system("CLS");
				break;
		}
	}
}
void kisiekle()
{
	char kosul='E';
	rehber=fopen("rehber.txt","a");
	if(rehber==NULL)
	{printf("dosya acilamadi.. ");}
	else
	{
		int a=0;
		printf("\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\n");
		printf("\t\t\t\t\tKISI EKLEME\n");
		printf("\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\n");
		printf("\n");
		printf("\n");
		for(;;)
		{
			printf("kisinin adi: ");
			scanf("%s",kisi.ad);
			a=strlen(kisi.ad);
			for(int i=0;i<a;i++)
			{
				if(kisi.ad[i]<='9'&&kisi.ad[i]>='0')
				{	
					printf("hatali giris yeniden giris yapiniz..");
					getch();
					system("CLS");
					main();
				}
				else
					break;
			}
			printf("kisinin soyadi: ");
			scanf("%s",kisi.syad);
			a=strlen(kisi.syad);
			for(int i=0;i<a;i++)
			{
				if(kisi.syad[i]<='9'&&kisi.syad[i]>='0')
				{	
					printf("hatali giris yeniden giriniz..");
					getch();
					system("CLS");
					main();
				}
				else
					break;
			}
			printf("kisinin ev telefonu numarasi: ");
			scanf("%s",kisi.evtelno);
			a=strlen(kisi.evtelno);
			for(int i=0;i<a;i++)
			{
				if(kisi.evtelno[i]>='a'&&kisi.evtelno[i]<='z')
				{	
					printf("hatali giris yeniden giriniz...");
					getch();
					system("CLS");
					main();
				}
				else
					break;
			}

			printf("kisinin cep telefon numarasi: ");
			scanf("%s",kisi.ceptelno);
			a=strlen(kisi.ceptelno);
			for(int i=0;i<a;i++)
			{
				if(kisi.ceptelno[i]>='a'&&kisi.ceptelno[i]<='z')
				{	
					printf("hatali giris yeniden giriniz...");
					getch();
					system("CLS");
					main();
				}
				else
					break;
			}
			fprintf(rehber,"%s\t%s\t%s\t%s\t\n",kisi.ad,kisi.syad,kisi.evtelno,kisi.ceptelno);
			printf("Ekleme basarili...\n\n");
			printf("Devam etmek istiyor musunuz(E\H?)\n");
			scanf("%s", &kosul); 
			if(kosul=='H'||kosul=='h')
			{	system("CLS");
			fclose(rehber);
			main();}
			else
				continue;
		}
	}
	
}
void goruntule()
{
	rehber=fopen("rehber.txt","r");
		if(rehber==NULL)
			printf("dosya acilamadi...");
		else
		{
			printf("\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\n");
			printf("\t\t\t\t\tLISTE\n");
			printf("\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\n");
			printf("\n");
			printf("\n");
			printf("ad\t\soyad\tevtelno\tceptelno\n");
			printf("*********************************\n");
			while(!feof(rehber))
			{
				fscanf(rehber,"%s\t%s\t%s\t%s\n",kisi.ad,kisi.syad,kisi.evtelno,kisi.ceptelno);
				printf("%s\t%s\t%s\t%s\n",kisi.ad,kisi.syad,kisi.evtelno,kisi.ceptelno);
			}
		}
		fclose(rehber);
		printf("\nana menu icin bir tusa basiniz...");
		getch();
		system("CLS");
}
void guncelle()
{
	FILE *rehber2;
	char arananad[20];
	char aranansyad[20];
	printf("Duzenlemek istediginiz kisinin adini giriniz: ");
	scanf("%s",arananad);
	printf("Duzenlemek istediginiz kisinin adini giriniz: ");
	scanf("%s",aranansyad);
	rehber=fopen("rehber.txt","r");
	rehber2=fopen("rehber1.txt","w");
		printf("\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\n");
		printf("\t\t\t\t\tDUZENLEME\n");
		printf("\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\n");
		printf("\n");
		printf("\n");
	while(!feof(rehber))
	{
		fscanf(rehber,"%s\t%s\t%s\t%s\n",kisi.ad,kisi.syad,kisi.evtelno,kisi.ceptelno);
		if(strcmp(kisi.ad,arananad)==0)
		{
			printf("kisinin adi: ");
			scanf("%s",kisi.ad);
			printf("kisinin soyadi: ");
			scanf("%s",kisi.syad);
			printf("kisinin ev telefonu numarasi: ");
			scanf("%s",kisi.evtelno);
			printf("kisinin cep telefon numarasi: ");
			scanf("%s",kisi.ceptelno);
			fprintf(rehber2,"%s\t%s\t%s\t%s\t\n",kisi.ad,kisi.syad,kisi.evtelno,kisi.ceptelno);
			printf("Bilgiler guncellendi..");
			getch();
		}
		else
		fprintf(rehber2,"%s\t%s\t%s\t%s\t\n",kisi.ad,kisi.syad,kisi.evtelno,kisi.ceptelno);
	}
	fclose(rehber);
	fclose(rehber2);
	remove("rehber.txt");
	rename("rehber1.txt","rehber.txt");
	system("CLS");
}
void sil()
{
	int sayac=0;
	FILE *rehber2;
	char arananad[20];
	char aranansyad[20];
		printf("\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\n");
		printf("\t\t\t\t\tSILME\n");
		printf("\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\n");
		printf("\n");
		printf("\n");
	printf("Silinmesi istediginiz kisinin adini giriniz: ");
	scanf("%s",arananad);
	printf("Silinmesi istediginiz kisinin soyadini giriniz: ");
	scanf("%s",aranansyad);
	rehber=fopen("rehber.txt","r");
	rehber2=fopen("rehber1.txt","w");
	while(!feof(rehber))
	{
		fscanf(rehber,"%s\t%s\t%s\t%s\n",kisi.ad,kisi.syad,kisi.evtelno,kisi.ceptelno);
		if((strcmp(kisi.ad,arananad)==0)&&(strcmp(kisi.syad,aranansyad)==0))
		{
			sayac++;
			printf("Basariyla silindi...");
			continue;

		}
		else
		fprintf(rehber2,"%s\t%s\t%s\t%s\t\n",kisi.ad,kisi.syad,kisi.evtelno,kisi.ceptelno);
	}
	if(sayac==0)
		printf("Bulunamadi..");
	getch();
	fclose(rehber);
	fclose(rehber2);
	remove("rehber.txt");
	rename("rehber1.txt","rehber.txt");
	system("CLS");
	
}
void arama()
{
	int sayac=0;
	char arananad[20];
	char aranansyad[20];
	printf("\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\n");
		printf("\t\t\t\t\tARAMA\n");
		printf("\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\n");
		printf("\n");
		printf("\n");
	printf("Bulmak istediginiz kisinin adini giriniz: ");
	scanf("%s",arananad);
	printf("Bulmak istediginiz kisinin soyadini giriniz: ");
	scanf("%s",aranansyad);
	system("CLS");
	rehber=fopen("rehber.txt","r");
	while(!feof(rehber))
	{
		fscanf(rehber,"%s\t%s\t%s\t%s\n",kisi.ad,kisi.syad,kisi.evtelno,kisi.ceptelno);
		if((strcmp(kisi.ad,arananad)==0)&&(strcmp(kisi.syad,aranansyad)==0))
		{
			printf("ad\t\soyad\tevtelno\tceptelno\n");
			printf("*********************************\n");
			sayac++;
			printf("%s\t%s\t%s\t%s",kisi.ad,kisi.syad,kisi.evtelno,kisi.ceptelno);
		}
		
	}
	if(sayac==0)
		printf("Bulunamadi..");
	getch();
	fclose(rehber);
	system("CLS");
}
