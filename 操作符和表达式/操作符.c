//#include <stdio.h>
//#include <stdlib.h>
//#define FALSE 0
//#define TRUE 1
//
//int count_one_bits(unsigned char value)
//{
//	int ones;
//	for (ones = 0; value != 0; value >>= 1)
//	{
//		//如果最低位的值为1，ones加1
//		if (value % 2 != 0)
//		{
//			ones++;
//		}
//	}
//	return ones;
//}
//int main()
//{
//	//int a = 100, b = 20;
//	//printf("%8d%8d%8d%8d", a + b, a - b, a * b, a / b);
//	//a = 46;
//	//printf("%8d\n\n", a % b);
//
//
//	//char c = 109;
//	//printf("初始值：%d\n", c);
//	//c <<= 3;
//	//printf("左移三位后：%d\n", c);//104
//	//c = 109;
//	//c >>= 3;
//	//printf("右移三位后：%d\n", c);//13
//	//char d = -109;
//	//printf("初始值：%d\n", d);
//	//d >>= 3;
//	//printf("右移三位后：%d\n", d);//-14   算术右移
//	//unsigned char e = 118;
//	//int ret = count_one_bits(e);
//	//printf("%d的二进制序列中有%d个1\n\n", e, ret);
//
//
//	//char f = 46;
//	//char g = 91;
//	//printf("%d按位与%d：%d\n%d按位或%d：%d\n%d按位异或%d：%d\n\n", f, g, f & g, f, g, f | g, f, g, f ^ g);
//	
//
//	//int h = 100;
//	//int i = 90;
//	//if ((100 == h) == TRUE)
//	//{
//	//	printf("1\n");
//	//}
//	//if ((i == 100) == FALSE)
//	//{
//	//	printf("0\n");
//	//}
//
//
//	char j, k, l;
//	j = k + l;//k和l的值被提升为普通整型，然后再执行加法运算，结果将被截短，然后再存储于j中
//
//	return EXIT_SUCCESS;
//}