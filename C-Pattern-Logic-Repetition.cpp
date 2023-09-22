#include<stdio.h>

int main(){
	
	int batas;
	
	printf("Input nilai n [5..100]: ");
    scanf("%d", &batas);
    while(batas<5 || batas>100){
    	printf("Input nilai n [5..100]: ");
		scanf("%d", &batas);
	}
	point:
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	int a;
	printf("Bentuk apa yang akan anda tampilkan?\n");
	printf("======================================\n");
	printf("||   1. Segitiga siku-siku isi      ||\n");
	printf("||   2. Segitiga siku-siku kosong   ||\n");
	printf("||   3. Kotak isi                   ||\n");
	printf("||   4. Kotak kosong                ||\n");
	printf("||   5. Huruf N                     ||\n");
	printf("||   6. Huruf N terbalik            ||\n");
	printf("||   7. Huruf Z                     ||\n");
	printf("||   8. Huruf Z terbalik            ||\n");
	printf("||   9. Huruf X                     ||\n");
	printf("||   10. Merubah nilai n            ||\n");   
	printf("||   0. Selesai                     ||\n");
	printf("======================================\n");
	printf("Pilihan anda adalah: ");
	scanf("%d", &a);
	
	play:
	if(a==1){
	printf("\n\nBentuk Segitiga Siku-siku isi sebagai berikut\n");
	for(int i = 1; i <= batas; i++){ //segitiga siku siku isi
        for(int j = 1; j <= i; j++){
        		printf("*");
        }
        printf("\n");
    } 
    	char d;
    	getchar();
    	scanf("%c", &d);
    	goto point;
	}else if(a==2){
	printf("\n\nBentuk Segitiga Siku-siku Kosong sebagai berikut\n");
	for(int i = 1; i <= batas; i++){ //segitiga siku siku kosong
        for(int j = 1; j <= i; j++){
        	if(i==1 || i==batas || j==1 || j==i){
        		printf("*");
			}else{
				printf(" ");
			}
        }
        printf("\n");
    }
    	char d;
    	getchar();
    	scanf("%c", &d);
    	goto point;
	}else if(a==3){
	printf("\n\nBentuk Kotak Isi sebagai berikut\n");
	for(int i = 1; i <= batas; i++){ //kotak isi
        for(int j = 1; j <= batas; j++){
        		printf("*");
        }
        printf("\n");
	}
		char d;
    	getchar();
    	scanf("%c", &d);
		goto point;
	}else if(a==4){
	printf("\n\nBentuk Kotak Kosong sebagai berikut\n");
	for(int i = 1; i <= batas; i++){ // kotak kosong
        for(int j = 1; j <= batas; j++){
        	if(i==1 || i==batas || j==1 || j==batas){
        		printf("*");
			}else{
				printf(" ");
			}
        }
        printf("\n");
    }
		char d;
    	getchar();
    	scanf("%c", &d);	
    	goto point;
	}else if(a==5){
	printf("\n\nBentuk huruf N sebagai berikut\n");
	for(int i = 1; i <= batas; i++){ //huruf N
        for(int j = 1; j <= batas; j++){
        	if(i==j || j==1 || j==i || j==batas ){
        		printf("*");
			}else{
				printf(" ");
			}
        }
        printf("\n");
    }
    	char d;
    	getchar();
    	scanf("%c", &d);
    	goto point;
	}else if(a==6){
	printf("\n\nBentuk huruf N Terbalik sebagai berikut\n");
    for(int i = 1; i <= batas; i++){ //huruf N kebalik
        for(int j = 1; j <= batas; j++){
        	if(j==1 || j== (batas + 1)- i || j==batas ){
        		printf("*");
			}else{
				printf(" ");
			}
        }
        printf("\n");
    }
    	char d;
    	getchar();
    	scanf("%c", &d);
    	goto point;
	}else if(a==7){
	printf("\n\nBentuk huruf Z sebagai berikut\n");
	for(int i = 1; i <= batas; i++){ // Z
        for(int j = 1; j <= batas; j++){
        	if(i==1 || i==batas || j== (batas + 1)- i ){
        		printf("*");
			}else{
				printf(" ");
			}
        }
        printf("\n");	
	}
		char d;
    	getchar();
    	scanf("%c", &d);
		goto point;
	}else if(a==8){
	printf("\n\nBentuk huruf Z Terbalik sebagai berikut\n");
	for(int i = 1; i <= batas; i++){ // Z kebalik
        for(int j = 1; j <= batas; j++){
        	if(i==1 || i==batas || i==j  ){
        		printf("*");
			}else{
				printf(" ");
			}
        }
        printf("\n");
    }
    	char d;
    	getchar();
    	scanf("%c", &d);
    	goto point;
	}else if(a==9){
	printf("\n\nBentuk huruf X sebagai berikut\n");
	for(int i = 1; i <= batas; i++){ // X
        for(int j = 1; j <= batas; j++){
        	if(i==j || j== (batas + 1)- i ){
        		printf("*");
			}else{
				printf(" ");
			}
        }
        printf("\n");
    }
    	char d;
    	getchar();
    	scanf("%c", &d);
    	goto point;
	}else if(a==10){
		 do{
		 printf("\nInput nilai n yang baru [4..15]: ");
		 scanf("%d", &batas);
		 }while (batas<4 || batas>15);
		 goto point;
	}else if(a==0){
		printf("\n\nTerima kasih. Sampai jumpa lagi!");
	}else{
		while(a>10){
		printf("Pilihan anda adalah: ");
		scanf("%d", &a);
			if(true){
				goto play;
			}
		}
	}
	
    return 0;
}

