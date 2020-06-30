#include <stdio.h>
#include <math.h>

void nhap(int a[], int b[],int m, int n){
	for(int i=0; i<=m; i++){
		printf("\nhe so cua da thuc m a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<=n; i++){
		printf("\nhe so cua da thuc n b[%d]:",i);
		scanf("%d",&b[i]);
	}
}
void xuat(int a[], int b[],int m, int n){
	printf("\nda thuc m la:");
		for(int i=0; i<=m; i++){
			if(i!=m){
				printf("%d*x^%d+",a[i],m-i);
			}
			else{
				printf("%d",a[i]);
			}
	    }
	printf("\nda thuc n la:");    
	    for(int i=0;i<=n;i++){
	    	if(i!=n){
	    		printf("%d*x^%d+",b[i],n-i);
			}
			else{
				printf("%d",b[i]);
			}
		}
	
}
int tong(int a[], int b[], int m, int n){
	int p=0,q=0,x1,x2;
	printf("\nnhap gia tri x cua da thuc m:");
	scanf("%d",&x1);
	printf("\nnhap gia tri x cua da thuc n:");
	scanf("%d",&x2);
	for (int i=0; i<=m; i++){
		p=p+a[i]*pow(x1,(m-i));
	}
	for (int i=0; i<=n; i++){
		q=q+b[i]*pow(x2,(n-i));
	}
	int sum=p+q;
	printf("\ntong cua 2 da thuc la:%d",sum);
}


int main(){
	int a[100],b[100],n,m;
	printf("\nnhap bac cua da thuc m:");
	scanf("%d",&m);
	printf("\nnhap bac cua da thuc n:");
	scanf("%d",&n);
	nhap(a,b,m,n);
	xuat(a,b,m,n);
	tong(a,b,m,n);
}
