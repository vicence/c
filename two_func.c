/*
//	Copyright (c), vicence
//	All rights reserved
//	tessvicence@gmail.com
//
//	文件名称：two_func.c 
//	文件标识：
//	摘	  要：一个文件中使用两个函数 
//
//	当前版本： 1.0
//	作	  者： vicence 
// 	完成日期： 2013.3.27
//
//	历史版本： 
//	作	  者： 
// 	完成日期： 
*/

// two_func.c --在一个文件中使用两个函数
#include <stdio.h> 		//预处理指令 

void butler (void);		/*	ISO/ANSI C函数原型	*/  
						//函数声明后要跟分号，因为也是C语言语句	
int main (void)			
{
	printf ("I will summon the butler function.\n");
	butler ();
	printf ("Yes. Bring me some tea and writeable CD-ROMS.\n");
	return 0;
}

void butler (void)		//函数定义的开始
{
	printf ("You rang, sir?\n");
} 
