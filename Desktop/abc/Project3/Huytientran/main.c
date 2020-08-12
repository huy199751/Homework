#include "Header.h"

void main()
{
	float a,b,h,x, sum=0, integral;
	int i,n;
	printf("nhap so lan chia:"); 
	scanf_s("%d", &n);
	printf("nhap can dau cua tich phan:"); 
	scanf_s("%f", &a);
	printf("nhap can cuoi cua tich phan:"); 
	scanf_s("%f", &b);
	h = (b - a) / n;
	for (i = 1;i < n;i++)
	{
		x = a + i * h;
		sum += Tich_phan(x);
	}
	integral = h/2*(Tich_phan(a)+ Tich_phan(b)+2*sum);
	printf("Nghiem cua tich phan:%f",integral);
}
