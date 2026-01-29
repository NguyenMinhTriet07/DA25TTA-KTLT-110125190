#include<stdio.h>
int main()
{
	int a,b;
	printf("nhap so nguyen a:");
	scanf("%d",&a);
	printf("\nnhap so nguyen b:");
	scanf("%d",&b);
	float thuong,tong , hieu ,tich;
	tong=a+b;
	hieu=a-b;
	tich=a*b;
	thuong=(float)a/b;
	printf("\n%d + %d= %f",a,b,tong);
    printf("\n%d - %d= %f",a,b,hieu);
    printf("\n%d x %d= %f",a,b,tich);
    printf("\n%d / %d= %.5f",a,b,thuong);
	return 0;
}
