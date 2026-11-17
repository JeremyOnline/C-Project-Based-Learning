#include <stdio.h>

int main(){
	
	int a,b,c,d,x;
	
	
	printf("Masukkan jumlah baris = ");scanf("%d",&x);
	
	if(x<=3){
		printf("Lu niat buat pohon natal ga sih?!");
		return 1;
	}
	for(a=1;a<=x;a++){
		for(b=x;b>=a;b--){
			printf(" ");
		}
		for(c=1;c<=a;c++){
			printf("*");
		}
		for(d=1;d<a;d++){
			printf("*");
		}
		printf("\n");
	}
	 a,b,c,d = 0;
	
	//Model sementara
	for(a=1;a<=x/2;a++){  // nentukan tinggi pohon
		for(b=1;b <= x*2;b++)
			if(b != x && b != x+2 && b != x+1){ // nentukan lebar pohon
				printf(" ");
			}else{
				printf("*");	
		}
		printf("\n");
		
		
	}
	
// Ansi color, should try it!	
	
}

//int main(){
//	// simulasi tower
//	int a,b,c,d,x;
//	
//	
//	printf("Masukkan jumlah baris = ");scanf("%d",&x);
//	
//	if(x<=1){
//		printf("Lu niat buat pohon natal ga sih?!");
//		return 1;
//	}
//	for(a=1;a<=x;a++){
//		for(b=x;b>=a;b--){
//			printf(" ");
//		}
//		for(c=1;c<=a;c++){
//			printf("*");
//		}
//		for(d=1;d<a;d++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	 
//	for(a=1;a<=x/2;a++){
//		printf(" ");
//		for(b=1;b<=(x+x-1);b++){
//			printf("#");
//		}
//		printf("\n");
//	}
//}
	
	
	
