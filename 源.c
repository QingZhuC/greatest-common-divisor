#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tem,m, n = 0;
	scanf("%d%d", &m, &n);

	while(m % n != 0)	//�˴�����Ҫ���ӱȽ�m,n��С�Ĳ���
	{					//��Ϊѭ���������������m,n�Ĵ�С�жϲ�����
		tem = n;
		n = m % n;
		m = tem;
	}
	printf("���Լ��Ϊ%d\n", n);
	system("pause");
	return 0;
}