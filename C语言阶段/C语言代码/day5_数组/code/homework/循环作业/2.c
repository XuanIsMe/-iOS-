#include <stdio.h>
/*
 8.	循环(二进制输出整数)	从键盘输入一个数, 使用二进制形式输出该数, 例如输入4,输出二进制形式为100,输入10,输出的二进制形式为1010(数组做)
 */
int main(void)
{
	int num;
	scanf("%d",&num);
	//定义一个数组 并清零
	int a[32] = {};//把所求的二进制的每一位保存在数组中

	int i = 0;
	//2-->10
	//4-->100
    //
	while(num != 0) {
		a[i++] = num%2;
		num /= 2;
	}
	
	//4 -->100  a[0]->0  a[1]->0  a[2]->1
	for(int j = i-1;j >= 0;j--) {
		printf("%d",a[j]);
	}
	printf("\n");

	return 0;
}
