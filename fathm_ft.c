// fathm_ft.c  --把两个fathoms换算成英尺

#include <stdio.h> 			//预处理指令 
int main (void)				//带有参数的函数名 
{
	int feet, fathoms;		//声明两个变量 
	
	fathoms = 2;			//赋值语句，从右向左赋值 
	feet = 6 * fathoms;		//赋值语句 
	printf ("There are %d feet in %d fathoms!\n", feet, fathoms);	// 
	printf ("Yes, I said %d feet!\n", 6 * fathoms);

	return 0;			//带有返回值的C语言函数要使用一个return语句
					//return语句是用来保持逻辑连贯性的所需的内容 
}
