// testConsole.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h> //win头文件
#include<stdio.h>

typedef struct {
	int x;
	int y;
	int data;
}STRU;
STRU *s;// 全局变量(静态存储)s地址可以作为基地址 他的地址为程序入口地址加上一个定值偏移
int main()
{
	STRU *a; //局部变量(自动存储)a不能作为基地址 每次都在变 
	printf("a %#x\n", (unsigned int)&a
	);

	printf("%d\n",sizeof(s));
	 s= new STRU;
	 printf("s %#x\n", (unsigned int)&s);
	s->data = 10;
	char c;
	while (true) {
		printf("%d\n",s->data);
		c= getchar();
		getchar();
		if (c =='w')
			s->data++;
		else if (c == 's')
			s->data--;
		else
			;
	}
	delete s;
    return 0;
}

