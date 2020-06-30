#include <stdio.h>
#include <math.h>

void nhapday(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
}
void xuatday(int a[],int n){
	for(int i=0; i<n;i++){
		printf("\nphan tu thu a[%d] la %d",i,a[i]);
	}
}
int tongday(int a[], int n){
	int s=0;
	for(int i=0; i<n; i++){
		  s=s+a[i];
	}
    return s;
}
int trungbinhcong(int a[], int n){
	float tbc=0;
	tbc=tongday(a,n)/n;
	printf("\ntbc la:%.2f",tbc);
}
int max(int a[], int n){
	int s;
	for(int i=0; i<n; i++){
		if(s>a[i]){
			s=a[i];
		}
	}
	printf("\ngia tri lon nhat la:%d",s);
}
int min(int a[], int n){
	int s;
	for(int i=0; i<n; i++){
		if(s<a[i]){
			s=a[i];
		}
	}
	printf("\ngia tri nho nhat la:%d",s);
}
int thongkesochan(int a[], int n){
	int s[100];
	int x,dem=0;
	printf("\nnhap x=");
	scanf("%d",&x);
	printf("\ncac so chan nho hon x la:");
	for(int i=0; i<n; i++){
		if(a[i]<x){
		if(a[i]%2==0){
			s[i]=a[i];
			printf("\t%d",s[i]);
			dem++;
		    }
    	}
	}
	printf("\nso chan nho hon x la %d",dem);
}
int main(){
	int a[100],n;
	printf("\nnhap n:");
	scanf("%d",&n);
	nhapday(a,n);
	xuatday(a,n);
	printf("\n tong day la:%d", tongday(a,n));
	trungbinhcong(a,n);
	max(a,n);
	min(a,n);
	thongkesochan(a,n);
}
