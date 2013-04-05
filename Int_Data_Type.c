/*
Copyright (c) 2013, vicence
All rights reserved.

文件名称：Int_Data_Type.c
文件标识：
摘    要：显示INT数据类型的取值范围

当前版本: 0.0
作    者：vicence
完成时间：2013.4.4

取代版本: 0.0
原  作者：vicence
完成时间：2013.4.4


//  加入八进制和十六进制输出，注意格式说明符


					int				->%d
				signed	int = int			->%d
			      unsigned  int				->%u

			         short	int = short			->%hd
			  signed short  int = short = signed short	->%hd
			unsigned short  int = unsigned short		->%hu

				  long	int = long			->%ld
			   signed long  int = long = signed long	->%ld	
			 unsigned long  int = unsigned long		->%lu

			     long long  int = long long				->%lld
		      signed long long  int = long long = signed long long	->%lld
		    unsigned long long  int = unsigned long long		->%llu 
*/
#include <stdio.h>
#include <math.h>
void Int_Range (void);
void Short_Range (void);
void Long_Range (void);
void Longlong_Range (void);

int main (void)
{
	Int_Range ();
	getchar ();
	Short_Range ();
	getchar ();
	Long_Range ();
	getchar ();
	Longlong_Range ();
	return 0;
}	

void Int_Range (void)
{
	int i;			// int 类型所占字节数
	int signed_i;		// signed int 类型所占字节数
	int I_range;	//signed int = int ,是不是在输出时用的格式说明符也一样？
	
	i = sizeof(int);
//	signed_i = sizeof(short int);	
	printf ("int = %d bytes\n", sizeof(int));		
	printf ("signed int = %d bytes\n", sizeof(signed int));		
	printf ("unsigned int = %d bytes\n", sizeof(unsigned int));

	I_range = pow (2, 8 * i);	//前提是 i == signed_i，
//	printf ("int range = %d\n", range );
//	printf ("int range = %d\n", range - 1);
	printf ("%d < int range_d <%d\n", I_range, I_range - 1);			//显示有符号INT取值范围
	
	unsigned int un_int_range;
	un_int_range = pow (2, 8 * i);
	printf ("%u < unsigned_int_range_u < %u\n", un_int_range, un_int_range - 1);	//显示无符号INT取值范围
}

void Short_Range (void)
{
	int s;
//	int short_int_s;
//	int signed_short_int_s;
//	int signed_short_s;
	short S_range;

//	short = short int = signed short int = signed short ,是不是在输出时用的格式说明符也一样


	s = sizeof(short);
//	short_int_s = sizeof(short int);
//	signed_short_int_s = sizeof(signed short int);
//	signed_short_s = sizeof(signed short);

	printf ("short = %d bytes\n", sizeof(short));
	printf ("short int = %d bytes\n", sizeof(short int));
	printf ("signed short int = %d bytes\n", sizeof(signed short int));
	printf ("signed short = %d bytes\n", sizeof(signed short));
	printf ("unsigned short int = %d bytes\n", sizeof(unsigned short int));
	printf ("unsigned short = %d bytes\n", sizeof(unsigned short));

	S_range = pow(2, 8 * s);
	printf ("%d < Short Range_d < %d\n", S_range, S_range - 1);
	printf ("%hd < Short Range_hd < %hd\n", S_range, S_range - 1);					//显示有符号short 取值范围

//	unsigned short int = unsigned short

	unsigned short int  un_short_int_range;
	un_short_int_range = pow(2, 8 * s);
	printf ("%hu < unsigned short int_hu < %hu\n", un_short_int_range, un_short_int_range - 1);	//显示无符号short 取值范围
	printf ("%u < unsigned short int_u < %u\n", un_short_int_range, un_short_int_range - 1);
}

void Long_Range (void)
{
	int l;
//	int long_int_l;
//	int signed_long_int_l;
//	int signed_long_l;
	long L_range;

//	long = long int = signed long int = signed long ,是不是在输出时用的格式说明符也一样

	l = sizeof(long);
//	long_int_l = sizeof(long int);
//	signed_long_int_l = sizeof(signed long int);
//	signed_long_l = sizeof(signed long);

	printf ("long = %d bytes\n", sizeof(long));		
	printf ("long int = %d bytes\n", sizeof(long int));		
	printf ("signed long int = %d bytes\n", sizeof(signed long int));		
	printf ("signed long = %d bytes\n", sizeof(signed long));		
	printf ("unsigned long int = %d bytes\n", sizeof(unsigned long int));		
	printf ("unsigned long = %d bytes\n", sizeof(unsigned long));		

	L_range = pow(2, 8 * l);
	printf ("%ld < Long Range_ld < %ld\n", L_range, L_range - 1);					//显示有符号long 取值范围

//	unsigned long int = unsigned long 

	unsigned long int un_long_int_range;
	un_long_int_range = pow(2, 8 * l);
	printf ("%lu < unsigned long int_lu < %lu\n", un_long_int_range, un_long_int_range - 1);	//显示无符号long 取值范围
}

void Longlong_Range (void)
{
	int ll;
//	int long_long_int_ll;
//	int signed_long_long_int_ll;
//	int signed_long_long_ll;
	long long LL_range;

//	long long = long long int = signed long long int = signed long long ,是不是在输出时用的格式说明符也一样

	ll = sizeof(long long);
	printf ("long long = %d\n", sizeof(long long));						
	printf ("long long int = %d\n", sizeof(long long int));						
	printf ("singed long long int = %d\n", sizeof(signed long long int));						
	printf ("signed long long = %d\n", sizeof(signed long long));						
	printf ("unsigned long long int = %d\n", sizeof(unsigned long long int));						
	printf ("unsigned long long = %d\n", sizeof(unsigned long long));						

	LL_range = pow(2, 8 * ll);
	printf ("%lld < Longlong Range_lld < %lld\n", LL_range, LL_range - 1);				//显示有符号long long 取值范围

//	unsigned long long int = unsigned long long 

	unsigned long long int un_long_long_int;
	un_long_long_int = pow(2, 8 * ll);
	printf ("%llu < unsigned long long int_llu < %llu\n", un_long_long_int, un_long_long_int - 1);	//显示无符号long long 取值范围
}
