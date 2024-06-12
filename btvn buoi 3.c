#include <stdio.h>
int main() 
{
	char ten;
	int n;
	int ngay,thang,nam;
	int choice;

printf("Menu \n");
	printf("1. Nhap vao ten va ngay thang nam sinh. \n");
	printf ("2.Kiem tra so chan va so le.\n");
	printf("3. Thoat khoi Menu\n");
	
	printf("choice:  ");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			{
				printf("Nhap vao ten nguoi dung:");
				scanf("%s", &ten);
				printf("Nhap vao ngay thang nam sinh(DD/MM/YY):  ");
				scanf("%02d/%02d/%04d", &ngay, &thang, &nam);
				printf("Nhap vao ten %s va ngay thang nam sinh %02d/%02d/%04d\n", ten, ngay, thang, nam);
				break;
			}
		case 2:
			{
				printf("Nhap vao 1 so bat ki:");
				scanf("%d", &n);
				if(n%2==0)
				{
					printf("%d la so chan\n",n);
				}
				else
				{
					printf("%d la so le\n",n);
				}
			break;
			}
		case 3:
			{
				printf("Thoat khoi MENU\n");
				break;
			}
	}
	return 0;
}
