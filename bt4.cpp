#include <stdio.h>
#include <conio.h>


void nhap(int a[][100], int m, int n){
	for (int i=0; i<m; i++)
	for (int j=0; j<n; j++){
	    printf("\nma tran a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
	} 
}
void xuat(int a[][100], int m, int n){
	for (int i=0; i<m; i++){
    	for (int j=0; j<n; j++)
			printf("%d\t",a[i][j]);
			printf("\n");
		}
}
int tongmt(int a[][100], int m, int n){
	int s=0;
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			s+=a[i][j];
		}
	}
	printf("\ntong ma tran la:%d",s);
}
int max(int a[][100], int m, int n){
	int max=0;
	for( int i=0; i<m; i++){
		for( int j=0; j<n; j++){
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
	}
	printf("\ngia tri lon nhat trong ma tran la:%d",max);
}
int tichnntrongcot(int a[][100], int m, int n){
	int dem=0,c,i;
	    for(int j=0; j<n; j++){
	    	int b=1;
			c=1;
		for(i=0; i<m; i++){
		c*=a[i][j];
		b*=a[i][j];
		if(c>b){
			c=b;
		}
	   }
	    dem++;
	    printf("\ntich cac phan tu thu %d trong cot la:%d",dem,b);
	}
	printf("\ntich cot nn la:%d",c);
}

int main(){
	int a[100][100];
	int n,m;
	printf("\nnhap so hang:");
	scanf("%d",&m);
	printf("\nnhap so cot:");
	scanf("%d",&n);
	printf("\nnhap vao ma tran:");
	nhap(a,m,n);
	xuat(a,m,n);
	tongmt(a,m,n);
	max(a,m,n);
	tichnntrongcot(a,m,n);

}
