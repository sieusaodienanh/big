#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct olympic{
	char HT[20];
	int SD;
	char T[30];
}O;

void nhap(olympic O[], int n){
	for(int i=0;i<n;i++){
	printf("\nnhap ho va ten:");
	fflush(stdin); gets(O[i].HT);
	printf("\nnhap diem :");
	scanf("%d",&O[i].SD);
	printf("\nnhap ten truong dai hoc :");
	fflush(stdin); gets(O[i].T);
   }
}
void xuat(olympic O[], int n){
	    printf("\n stt                 ho va ten           diem                truong  ");
	for(int i=0; i<n; i++){
		printf("\n %-20d%-20s%-20d%-20s ",i+1,O[i].HT,O[i].SD,O[i].T);
	}
}
void xapxep(olympic O[], int n){
	int d;	
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if(O[i].SD<O[j].SD){
				d=O[i].SD;
				O[i].SD=O[j].SD;
				O[j].SD=d;
			}
		}
	}
	xuat(O,n);
}

int main(){
	int n;
	printf("\nnhap so luong sinh vien dang ki thi:");
	scanf("%d",&n);
	olympic O[100];
	nhap(O,n);
	printf("\nban xep theo stt dang ki:");
	xuat(O,n);
	printf("\nban xep han diem cua cac sinh vien:");
	xapxep(O,n);
}
