#include <stdio.h>

// Tarih: 14 Ekim 2014

// Projede amaciniz a matrisinin transpozesini almak:
//
// Istenenler:
// 1) Matrris elemanlari kullanici tarafindan girilecek
// 2) Matrisin transpozesi alinacak baska bir matrise esitlenecek (mesela b matrisi)
// 3) b matrisi bir matris formatinda ekrana yazdirilacak
// 
// Size sablon olarak verilen kisimlari degistirmeden kodunuzu yazin

#include<stdio.h>
int main()
{
    int i;
    int j;
    int a[5][8]={{1,2,3,4,5,6,7,8},{1,2,3,4,5,6,7,8},{1,2,3,4,5,6,7,8},{1,2,3,4,5,6,7,8},{1,2,3,4,5,6,7,8}};//8x5 matris degerleri atandi(ixj)
    int b[8][5];//transpose alcagimizdan oturu matris 5x8 e cevrildi (jxi)

    
    for(i=0;i<5;i++)	{        // 5 tane satirin degeri girildi
		
	printf("\n");               // satirlari alt alta gostermek icin.Her 1 islemlik satir islemini tamamladiktan sonra alt satira gec
			
    for(j=0;j<8;j++)	{      // i ye karsilik j degerleri atandi 

printf("%3d",a[i][j]);    {       //goruntu net olmasi icin elemanlar arasi 3 bosluk birakildi
b[j][i]=a[i][j];                  //kumenin son islemi olarak " b nin j satirina a nin i satiri atandi" "b nin i sutununa a nin j sutunu atandi" ve transpse edildi
								//artik isleme bu kumede devam edemeyiz b matrisine i ve j degeri atamak icin asagida ayri kume acildi
}				
}
}

printf("\n");				
printf("transpose\n");			//  transpose edilmis hali asagida gosterir

    for(j=0;j<8;j++){			// transpose edilen satirlari diziyorum
    	
    printf("\n");{      		//satirlari alt alta gosterir her bi j satir islemi biter ardindan alt satira iner
	
	for(i=0;i<5;i++){			//i sutunlari
		
	
	printf("%3d",b[j][i]);		// hayirli olsun ...
	
	}
	
	}
    }
    
   	

return 0;
}

