/*
2022年8月10日10点02分
学习什么是枚举
*/

#include <stdio.h>

enum WeekDay{
	Monday,Tuesday,Wednesday,Thursday,Saturday,Sunday
};

int main (){
	enum WeekDay day = Wednesday;
	printf ("%d\n",day);
}