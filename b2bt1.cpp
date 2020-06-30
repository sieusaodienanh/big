#include<stdlib.h>
#include<stdio.h>

int nhap(float *a,int n);
void xuat(float *a, int n);
int maxduong(int n, float *a, float *max);
int fibo(int n, float *a);
int menu(float *a, int n);
int main(){
	float *a,*max;
	int n;
	printf("\nnhap so phan tu trong mang:");
	scanf("%d",&n);
	a=(float*)malloc(n*sizeof(float));
	free(a);
	menu(a,n);
	return 0;
}
int nhap(float *a,int n){
	float b;
	for(int i=0; i<n; i++){
		printf("\na[%d]:",i);
		scanf("%f",(a+i));	
		b=*(a+i);
	}
	return b;
}
void xuat(float *a, int n){
	for(int i=0; i<n; i++){
		printf("\ncac phan tu trong mang la:%.2f",*(a+i));
	}
}
int maxduong(int n, float *a, float *max){
	float Max=0;
	      max=&Max;
	for(int i=0; i<n; i++){
		if(*(a+i)>0){
			if(*(a+i)>Max){
				Max=*(a+i);
			}
		}
	}
	printf("\ngia tri duong lon nhat la:%f",*max);
	return *max;
}
int fibo(int n, float *a){
	int c=0;
		if(n<3)	printf("\nkhong co tinh fibonacci!");
		else{
			for(int i=0; i<n-2; i++){
			if(*(a+i+2)!=*(a+i+1)+*(a+i)){
				c=1;
				break;
			}
		}
		if(c==0) printf("\nday so co tinh fibonacci");
		else printf("\nday so khong co tinh fibonacci");
	}
	return 0;
}
int menu(float *a, int n){
	int b;
	float *max;
	printf("\n1.nhap day");
	printf("\n2.xuat day");
	printf("\n3.max duong lon nhat");
	printf("\n4.day co tinh fibonacci khong");
	printf("\n5.thoat");
	while(true){
		printf("\nhay nhap tu 1->5:");
	    scanf("%d",&b);
	switch(b){
		case 1: nhap(a,n); break;
		case 2: xuat(a,n); break;
		case 3: maxduong(n,a,max); break;
		case 4: fibo(n,a); break;
		case 5: return 0;
		default: printf("\nkhong co chuc nang nay");
	    }
    }
}
