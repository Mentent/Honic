/****************************************************
 # File        : kernel.c
 # Blog        : www.cnblogs.com/lucasysfeng
 # Author      : lucasysfeng
 # Description : 内核入口函数
 ****************************************************/
#include "include\kprint.h"

void Init()
{
	print_str("Inintalizing...");
}

int kernel_main()
{
	print_clear();

	Init();

	return 0;
}
