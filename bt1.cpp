#include <stdio.h>
#include <math.h>
#include <conio.h>

void nhap(float &a, float &b){
	printf("\nnhap a:");
	scanf("%f",&a);
	printf("\nnhap b:");
	scanf("%f",&b);
}

int tinhtoan(float &a, float &b){
	
	char c;
	do{
		printf("\nnhap phep tinh:");
	    scanf("%s",&c);
	switch(c){
		case '+':
		nhap(a,b);
		printf("\n%.2f +%.2f=%f",a,b,a+b);
		break;
		case '-':
		nhap(a,b);
        printf("\n%.2f-%.2f=%.2f",a,b,a-b);
        break;
        case '*':
        nhap(a,b);
        printf("\n%.2f*%.2f=%.2f",a,b,a*b);
        break;
        case '/':
        nhap(a,b);
        printf("\n%.2f/%.2f=%.2f",a,b,a/b);
        break;
        case '^':
        nhap(a,b);
        printf("\n%.2f^%.2f=%.2f",a,b,pow(a,b));
        break;
        case '0':
        return 0;
        default:
        printf("/nban hay nhap phep tinh +, -, *, /,^, neu ban muon thoat hay nhan so 0.");
	}
	}while(c);
}
int main(){
	float a,b;
	tinhtoan(a,b);
}
