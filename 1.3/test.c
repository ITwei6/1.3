#include <stdio.h>
//int main()
//{
//	int b;
//	const int* a = &b;//const在*的左边，则指针指向的变量的值不可以直接通过指针改变
//	int const* a = &b;//可以通过其他途径改变
//	int* const a = &b;
//	return 0;
//}//在*右边则指针的指向不可变，简记为左定值，右定向。
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	/*if(*(char*)&a==1)*/
//	/*eturn *(char*)&a;*/
//	/*if (*p == 1)
//	{
//		return 1;r
//	}
//	else
//		return 0;*/
//	return *p;
//}
//int main()
//{
//	/*int a = 1;*/
//	int ret=check_sys();
//	/*char* p = (char*)&a;*/
//	if (ret == 1)
//	{
//		printf("小段\n");
//	}
//	else
//		printf("大段\n");
//	return 0;
//}
//011111111111111111111111
//int main()
//{
//	unsigned int i;//无符号数--1 -2 -3 ....-128  127 126 125  1 0
//	for (i = 9;i >= 0;i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//unsigned char i = 0;
//int main()
//{//恒成立i不可能超过255变成256的
//    for (i = 0;i <= 255;i++)
//    {
//        printf("hello world\n");
//    }
//    return 0;
//}
//int main()
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//}

//int main()
//{
//    char a = -1;
//    signed char b = -1;
//    unsigned char c = -1;
//    printf("a=%d,b=%d,c=%d", a, b, c);
//    return 0;
//}

int main()
{
    char a = -128;
    printf("%u\n", a);
    return 0;
}