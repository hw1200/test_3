#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void p_1() {
	int i;
	while (scanf("%d", &i) != EOF)
	{
		if (i > 10)
		{
			printf("��10��\n");
		}
		else {
			printf("������10\n");
		}
	}
}

void p_2()
{
	int month;
	printf("������һ���·�:");
	while (scanf("%d", &month) != EOF)
	{
		switch (month)
		{
		case 2:
			printf("%dth is 28 days\n", month); break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("%dth is 30 days\n", month); break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("%dth is 31 days\n", month); break;
		default:
			printf("������·���Ч\n"); break; 
		}
	}
}

void p_3()
{
	int i = 1;
	int total = 0;
lable:
	total = total + i;
	i++;
	if (i <= 100)
	{
		goto lable;
	}
	printf("total=%d\n", total);
}

void do_while()
{
	int i = 1;
	int totle = 0;
	do {
		totle = totle + i;
		i++;
	} while (i <= 100);
		printf("%d\n", totle);
}

void do_while_continue() {
	int i = 1;
	do
	{
		printf("%d\n", i);
		i++;
		if (i < 15)
		{
			continue;
		}
	} while (0);
}

void use_for()
{
	int i, totle;
	for (i = 1, totle = 0; i <= 100; i++)//��for���;������ѭ��,��������
	{
		totle += i;
	}
	printf("%d\n", totle);
}

void use_for_continue()
{
	int i, totle;
	for (i = 1, totle = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}//���iΪż�� ����continue;
		//��iΪż��ʱ������i%2==0��������ִ��continue��䣬�����´�ѭ��������ִ��printf��䡣
		totle += i;
	}
	printf("%d\n", totle);
}







int main()
{
	//p_1();

	//p_2();

	//p_3();

	//do_while();

	//do_while_continue();

	//use_for();

	//use_for_continue();



	return 0;
}