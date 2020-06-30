#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void nhap(int a[],int b[], int n){
	for(int i=0; i<n; i++){
		printf("\nnhap m co x,y lan luot la:",a[i],b[i]);
		scanf("%d%d",&a[i],&b[i]);
	}
}
void xuat(int a[],int b[], int n){
	for(int i=0; i<n; i++){
		printf("\nm(%d,%d)",a[i],b[i]);
	}
}
int tinhdoday(int a[],int b[],int n){
	float s = 0;
	for( int i=0;i<(n-1); i++){
    s =s + (float)sqrt(((a[i+1]-a[i])*(a[i+1]-a[i])+(b[i+1])-b[i])*(b[i+1]-b[i]));
	}
	printf("\nDo dai duong gap khuc la: %0.2f",s);
}
void Timdiemxa(int a[], int b[], int n){
	int x=a[0];
	int y=b[0];
	for(int i=1; i<n; i++){
		if(abs(b[i])> abs(y)){
			x=a[i];
			y=b[i];
		}
	}
	printf("\nDiem xa nhat truc hoanh la: (%d,%d)\n",x,y);
}
int main(){
	int a[100], b[100],n;
	printf("\nnhap so diem:");
	scanf("%d",&n);
	nhap(a,b,n);
	xuat(a,b,n);
	tinhdoday(a,b,n);
	Timdiemxa(a,b,n);
}