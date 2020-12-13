#include <stdio.h>
#include <stdlib.h>  //rand fonk icin kütüphaneyi include ettik
#include <time.h>
int main(){
	
	/*
	tas->makas , makas->kaðýt, kaðýt->taþ
	
	
	*/
	
	srand(time(NULL));  //her defasýnda ayný sayýyý üretmemesi için time fonk kullanýldý
	
	int i=0, tahmin;
	int kullaniciSkor=0,bilgisayarSkor=0;
	
	while(i<5){
		
		printf("Lutfen tahmininizi giriniz: (1. tas, 2.kagit, 3.makas) \n");
		scanf("%d", &tahmin);
		
		int bilgisayarTahmini=(rand()%3)+1;
		
		if(tahmin==1){
			
			if(bilgisayarTahmini==3){
				kullaniciSkor++;
				printf("kazandiniz! \n");
			}else if(bilgisayarTahmini==2){
			    bilgisayarSkor++;
				printf("kaybettiniz! \n");
			}else if(bilgisayarTahmini==1){
			    
				printf("berabere! \n");
			}
			
			
		}else if(tahmin==2){
			
			if(bilgisayarTahmini==3){
				bilgisayarSkor++;
				printf("kaybettiniz! \n");
			}else if(bilgisayarTahmini==1){
			    kullaniciSkor++;
				printf("kazandiniz! \n");
			}else if(bilgisayarTahmini==2){
			    
				printf("berabere! \n");
			}
		
	   }else if(tahmin==3){
			
			if(bilgisayarTahmini==1){
				bilgisayarSkor++;
				printf("kaybettiniz! \n");
			}else if(bilgisayarTahmini==2){
			    kullaniciSkor++;
				printf("kazandiniz! \n");
			}else if(bilgisayarTahmini==3){
			    
				printf("berabere! \n");
			} 
			
        }
        else{
			printf("Kural disi tahmin girisi!\n");
		}	

        i++;


}

 printf("Kullanici %d - %d Bilgisayar", kullaniciSkor,bilgisayarSkor);
 
 return 0;
 


}
