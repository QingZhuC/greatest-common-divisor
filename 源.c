#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tem,m, n = 0;
	scanf("%d%d", &m, &n);

	while(m % n != 0)	//此处不需要增加比较m,n大小的步骤
	{					//因为循环体里面可以做到m,n的大小判断并排序
		tem = n;
		n = m % n;
		m = tem;
	}
	printf("最大公约数为%d\n", n);
	system("pause");
	return 0;
}