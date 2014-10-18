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


int main()
{
    int i;
    int j;
    int n;
    int m;
    int a[i][j];
    int b[j][i];

    
   	printf("nxm matrisi olusturacak sekilde once satir sonra sutun sayisini gir \n"); // komutta bilgiyi verdim
	scanf("%d %d",&n,&m);															  // satir ve sutun elemani secildi
	printf("%d adet matris elemanini sirasiyla aralarinda bosluk birakarak girin\n",n*m);	//toplam matris elemani n*m olcaktir. a[i][j] yi olusturcak rakamlar
	
    for(i=0;i<n;i++){       		//n satirlik satirin sinirleri girildi
	printf("\n");{    				//satirlari alt alta gostermek icin.Her 1 islemlik satir islemini tamamladiktan sonra alt satira gec
    for(j=0;j<m;j++){				//n1 e karsi m1 , m2,m3 ...
    scanf("%d",&a[i][j]);{       	//matrisin kume degerleri girilir
	printf("%3d",a[i][j]);{      	// matrisi olusturur.
    b[j][i]=a[i][j];                  
								
    }						
    }
    }
	}
	}
    printf("\n");							// onceki islemlerimden hareket ettim fakat buradan sonra hata var arkadaslar.  
    printf("transpose\n");		     		// matris olusuyor fakat transpose edemedim.  yardiminiza ihtiyacim var 
    for(j=0;j<n;j++){			
    printf("\n");{      
	for(i=0;i<m;i++){		
	printf("%3d",b[j][i]);	
	}
	}
    }  

    
   	

return 0;
}

