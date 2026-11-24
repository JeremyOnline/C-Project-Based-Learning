#include <stdio.h>
#include <windows.h>

int main(){
	
//	Program metode penjumlahan milik Carl Friedrich Gauss

	int hasil;
	int n;
	int i;
	//s = n x (a + un)
	
	printf("==PROGRAM METODE PENJUMLAHAN CARL FRIEDRICH GAUSS==\n");
	printf("Masukkan n = ");scanf("%d",&n);
	
	hasil = ((n+1 )* (0+n)) / 2;
	
	sleep(2);
	printf("Dari jarak 0 ke %d adalah %d\n",n,n+1);
	sleep(2);
	
	for( i = 0; i<=n; i++){
		if(i >= n){
			printf("%d = ",i);
		}else{
			printf("%d + ",i);	
		}
		
	}
	
	sleep(5);
	printf("%d",hasil);
	


}
