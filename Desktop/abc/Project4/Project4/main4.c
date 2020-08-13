#include <stdio.h>
#include <math.h>
/*void main()
{
	int arr_tinh[4] = { 1,2,3,4 };
	char arr_dong[] = { 1,2,3,4,5 };
	sizeof(arr_tinh);
	printf("do lon %d\n", sizeof(arr_tinh)/sizeof(int));
	printf("%d\n", arr_tinh[1]);
	printf("%0x%x\n", arr_tinh+1);
}*/
/*void main()
{
	int i,sum=0;
	int arr_tinh[4] = {1,2,3,4};
	for (i = 0;i < 4;i++)
	{
		sum += arr_tinh[i] + 1;
		printf("%d\n", sum); 
	}
}*/
//tính tổng array
/*void main()
{
	int arr_tinh[4] = { 1,2,3,4 };
	int arr_size[4] = { 1,2,3,4 };
	int arr_sum = 0;
	for (int i = 0;i < arr_size;i++)
	{
		arr_sum += arr_tinh[i] + 1;
		}
	printf("%d\n", arr_sum);
}*/
/*void hoanvi(int *a, int*b)
{
	int temp = *a;
	*b=*a;
	*b=temp;
}
void main()
{
	int a = 1;
	int b = 2; 
	printf("[truoc]%d%d\r\n", a, b);
	hoanvi(&a, &b);
	printf("[sau]%d%d\r\n", a, b);
}*/
/*void main()
{
	
	int arr[4] = { 1,2,3,4 };
	printf("%d", *(arr + 1));
	for (int i = 0;i < arr_size;i++)
	{
		sum += *(arr + 1);
	}
	printf("%d\n", arr_sum);
}*/
//tinh tong
/*void sapXep(char* arr, int size)
{

}
void main()
{
	char arr[4] = { 1,4,2,3 };
	sapxep(arr, sizeof(arr) / sizeof(char));
	int i = 0;
	while (bieuthucdieukien)
	{

	}
}*/
//học while
/*void Nhapdulieu(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]= ", i);
		scanf_s("%d", &a[i]);

	}

}
void Xuatdulieu(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Xuat %5d",a[i]);
	}

}
void Hoanvi(int a[],int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if(a[i]>a[j])
			{
				int temp= a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}

	}
}
void main()
{
	int n;
	int a[10];
	printf("so ky tu: ");
	scanf_s("%d", &n);
	Hoanvi(int a[], int n);
	Nhapdulieu(int a[], int n);
	Xuatdulieu(int a[], int n);
}
*/
//(test chưa biêt lỗi)
void main()
{
	int arr1[10];
	int i, n, j, temp;
	printf("nhap so ky tu can nhap: ");
	scanf_s("%d", &n);
	for (i = 0;i < n;i++)
	{
		printf("%d", i);
		scanf_s("%d", &arr1[i]);
	}
	for (i = 0;i < n;i++)
	{
		for (j = i + 1;j < n;j++)
		{
			if (arr1[i] > arr1[j])
			{
				temp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp;
			}
		}
	}
	printf("day so ta co la:\n");
	for (i = 0;i < n;i++)
	{
		printf("%d", arr1[i]);
	}

}