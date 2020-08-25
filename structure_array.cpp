#include<stdio.h>
#include<conio.h>
struct employee
	{
		int empno;
		char empname[20];
		char departmentname[20];
		int salary;
	};
	main()
{
	struct employee emp[20];
	
	int i;
	
	for(i=0;i<20;i++)
		{
		printf("enter the details of the employees %d \n",i);
		printf("enter empno:");
		scanf("%d",&emp[i].empno);
		printf("enter empname:");
		scanf("%s",emp[i].empname);
		printf("enter departmentname:");
		scanf("%s",emp[i].departmentname);
		printf("enter salary :");
		scanf("%d",&emp[i].salary);
		}
	printf("printing details\n");
	printf("empno\tempname\tdepartname\t\salary \n");
	for(i=0;i<20;i++)
	{
		printf("%d\t",emp[i].empno);
		printf("%s\t",emp[i].empname);
		printf("%s\t\t",emp[i].departmentname);
		printf("%d\t",emp[i].salary);
		printf("\n");
	}
}
