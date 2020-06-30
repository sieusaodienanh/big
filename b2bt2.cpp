#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct sach{
	char tensach[30];
	char tacgia[30];
	int namxuatban[30];
};
void nhap(int n, sach *&a);
void xuat(int n, sach *a);
int demsach(int n, sach *a);
void thongke(int n, sach *a);
int menu(int n, sach *a);
int main(){
	int n;
	printf("\nnhap so luong sach:");
	scanf("%d",&n);
	sach *a;
	a = (sach*)malloc(n*sizeof(sach));
	free(a);
	menu(n,a);
}
void nhap(int n, sach *&a){
	for(int i=0; i<n; i++){
		printf("\nnhap ten sach:");
		fflush(stdin);
		gets((a+i)->tensach);
		printf("\nnhap ten tac gia:");
		fflush(stdin);
		gets((a+i)->tacgia);
		printf("\nnhap nam sang tac:");
		scanf("%d",(a+i)->namxuatban);
	}
}
void xuat(int n, sach *a){
	for(int i=0; i<n; i++){
		printf("\nten cua sach la:%s",*&(a+i)->tensach);
		printf("\nten cua tac gia la:%s",*&(a+i)->tacgia);
		printf("\nnam xuat ban la:%d",*(a+i)->namxuatban);
	}
}
int demsach(int n, sach *a){
	char d[30];
	int dem=0,e=0;
	printf("\nnhap ten tac gia can tim:");
	fflush(stdin);
	gets(d);
	for(int i=0; i<n; i++){
		if(strcmp(d,(a+i)->tacgia)==0){
			dem++;
			e++;
		}
	}
	if(e++){
		printf("\ntac gia %s co %d cuon sach",d,dem);
	}
	else printf("\nkhong co tac gia nay trong danh sach.");
	return dem;
}
void thongke(int n, sach *a){
	for(int i=0; i<n; i++){
		int dem=1;
		for(int j=i+1; j<n; j++){
			if(*(a+i)->namxuatban==*(a+j)->namxuatban){
				n--;
				dem++;
			}
			else{
				dem=dem;
			}
		}
		printf("\n%d.  %-5d:%d cuon ",i+1,*(a+i)->namxuatban,dem);
	}
}
int menu(int n, sach *a){
	int b;
	while(true){
	printf("\n1.nhap n cuon sach");
	printf("\n2.xuat so cuon sach");
	printf("\n3.dem theo tac gia");
	printf("\n4.thong ke");
	printf("\n5.thoat");
	printf("\nhay nhap tu 1->5");
	scanf("%d",&b);
	switch(b){
		case 1: nhap(n,a); break;
		case 2: xuat(n,a); break;
		case 3: demsach(n,a); break;
		case 4: thongke(n,a); break;
		case 5: return 0;
		default: printf("\nhay nhap tu 1->5");
	}
    }
}


