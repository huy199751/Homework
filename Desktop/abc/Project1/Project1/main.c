# include <stdio.h>
# include <math.h>
int baitoan, a, b, c, x, y, z;
void main()
{
	int a = 1;
	int b = 6;
	int c = 2;
	float baitoan = b * b - 4 * a*c;
	if (baitoan < 0)
	{
		printf("vo nghiem");
		}
	else if (baitoan = 0)
	{
		float z= - b / 2 * a;
		printf("%d=%d=-(%d/2*%d)",x,y,b,a);
	}
	else
	{
		printf("%d=(-%d+sqrt(%f.))/2*%d",x,b,baitoan,a);
		printf("%d=(-%d-sqrt(%f.))/2*%d", x,b,baitoan,a);
	}
}


#include <stdio.h>
#include <math.h>
int ten_bien;
void main()
{
	float a = 1;
	float b = 8;
	float c = 3;
	float x1 = 0, x2 = 0;
	float delta = b * b - 4 * a*c;
	if (delta > 0)
	{
		printf("phuong trinh co 2 nghiem phan biet:");
		x1 = (-b - sqrt(delta)) / (4 * a*c);
		x2 = (-b + sqrt(delta)) / (4 * a*c);
		printf("x1=%f,x2=%f", x1, x2);
	}
	else if (delta == 0)
	{
		printf("phuong trinh co 1 nghiem: x=%f", -b / (4 * a*c));

	}
	else
	{
		printf("phuong trinh vo nghiem");

	}
}

