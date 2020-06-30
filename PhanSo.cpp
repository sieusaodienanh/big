#include<stdio.h>
#include<stdlib.h>
typedef struct PhanSo
{
    int tu;
    int mau;
};
int uocChungLonNhat(int a, int b);
void nhapPhanSo(PhanSo *phanso);
void nhapPhanSo(PhanSo *phanso1, PhanSo *phanso2);
void xuatPhanSo(PhanSo *phanso);
void rutGonPhanSo(PhanSo *phanso);
PhanSo* tongPhanSo(PhanSo *phanso1, PhanSo *phanso2);
void xuatTongPhanSo(PhanSo *phanso1, PhanSo *phanso2);
PhanSo* hieuPhanSo(PhanSo *phanso1, PhanSo *phanso2);
void xuatHieuPhanSo(PhanSo *phanso1, PhanSo *phanso2);
PhanSo* tichPhanSo(PhanSo *phanso1, PhanSo *phanso2);
void xuatTichPhanSo(PhanSo *phanso1, PhanSo *phanso2);
PhanSo* thuongPhanSo(PhanSo *phanso1, PhanSo *phanso2);
void xuatThuongPhanSo(PhanSo *phanso1, PhanSo *phanso2);
void doidauPS(PhanSo *phanso);
int main()
{
    PhanSo *phanso1, *phanso2;
    phanso1 = (PhanSo*) malloc(sizeof(struct PhanSo));
    phanso2 = (PhanSo*) malloc(sizeof(struct PhanSo));
    nhapPhanSo(phanso1,phanso2);
    xuatTongPhanSo(phanso1, phanso2);
    xuatHieuPhanSo(phanso1, phanso2);
    xuatTichPhanSo(phanso1, phanso2);
    xuatThuongPhanSo(phanso1, phanso2);
    free(phanso1);
    free(phanso2);
    return 0;
}
void nhapPhanSo(PhanSo *phanso)
{
    // nh?p t? và m?u
    printf("Tu so: ");
    scanf("%d", &phanso->tu);
    printf("Mau so: ");
    scanf("%d", &phanso->mau);
}
void nhapPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
    printf("\nPhan so thu 1:\n ");
    nhapPhanSo(phanso1);
    printf("\nPhan so thu 2: \n");
    nhapPhanSo(phanso2);
}
void xuatPhanSo(PhanSo *phanso)
{
    // rút g?n phân s?
    rutGonPhanSo(phanso);
    doidauPS(phanso);
    // in phân s?
    printf("\n%d/%d", phanso->tu, phanso->mau);
}
void rutGonPhanSo(PhanSo *phanso) 
{
    // B1: tìm u?c chung l?n nh?t c?a t? và m?u
    int uocchunglonnhat = uocChungLonNhat(phanso->tu, phanso->mau);
    // B2: rút g?n phân s?
    phanso->tu = phanso->tu / uocchunglonnhat;
    phanso->mau = phanso->mau / uocchunglonnhat;
}
int uocChungLonNhat(int a, int b)
{// s? d?ng d? quy
     if (b == 0) return a;
    return uocChungLonNhat(b, a % b);
}
PhanSo* tongPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
    PhanSo *ketqua;
    ketqua = (PhanSo*) malloc(sizeof(struct PhanSo));
    ketqua->tu = phanso1->tu * phanso2->mau + phanso1->mau * phanso2->tu;
    ketqua->mau = phanso1->mau * phanso2->mau;
    return ketqua;
}
void xuatTongPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
    // tinh tong phan so
    PhanSo *tong = tongPhanSo(phanso1, phanso2);
    // xuat phan so
    xuatPhanSo(tong);
}
PhanSo* hieuPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
	PhanSo *ketqua;
	ketqua = (PhanSo*)malloc(sizeof(struct PhanSo));
	ketqua->tu = phanso1->tu * phanso2->mau - phanso1->mau * phanso2->tu;
    ketqua->mau = phanso1->mau * phanso2->mau;
    return ketqua;
}
void xuatHieuPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
    // tinh hieu cua phan so
    PhanSo *hieu = hieuPhanSo(phanso1, phanso2);
    // xuat phan so
    xuatPhanSo(hieu);
}
PhanSo* tichPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
	PhanSo *ketqua;
	ketqua = (PhanSo*)malloc(sizeof(struct PhanSo));
	ketqua->tu = phanso1->tu * phanso2->tu;
    ketqua->mau = phanso1->mau * phanso2->mau;
    return ketqua;
}
void xuatTichPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
    // tinh tich cua phan so
    PhanSo *tich = tichPhanSo(phanso1, phanso2);
    // xuat phan so
    xuatPhanSo(tich);
}
PhanSo* thuongPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
	PhanSo *ketqua;
	ketqua = (PhanSo*)malloc(sizeof(struct PhanSo));
	ketqua->tu = phanso1->tu * phanso2->mau;
    ketqua->mau = phanso1->mau * phanso2->tu;
    return ketqua;
}
void xuatThuongPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
    // tinh thuong cua phan so
    PhanSo *thuong = thuongPhanSo(phanso1, phanso2);
    // xuat phan so
    xuatPhanSo(thuong);
}
void doidauPS(PhanSo *phanso)
{
	if(phanso < 0){
		phanso->tu = -(phanso->tu);
		phanso->mau = -(phanso->mau);
	}
}
