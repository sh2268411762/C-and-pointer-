//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	int i = 100;
//	
//	if (i >= 100)
//	{
//		printf("*****");
//	}
//	else
//	{
//		printf("**************************");
//	}
//	puts("\n");
//
//
//	while (i > 0)
//	{
//		printf("%4d", i);
//		i--;
//	}
//	puts("\n");
//
//	for (i = 100; i > 0; i--)
//	{
//		printf("%4d", i);
//	}
//	i = 100;
//	puts("\n");
//
//	do {
//		printf("%4d", i);
//		i--;
//	} while (i > 0);
//	puts("\n");
//
//
//
//	switch (1)
//	{
//	case 1:
//		i = 100;
//		do {
//			printf("%4d", i);
//			i--;
//		} while (i > 0);
//		puts("\n");
//		i = 2;
//		goto LOOP1;
//		break;
//
//	case 2:
//	LOOP1:
//
//		for (i = 100; i > 0; i--)
//		{
//			printf("%4d", i);
//		}
//		i = 100;
//		puts("\n");
//		goto LOOP2;
//		break;
//
//	case 3:
//	LOOP2:
//		i = 100;
//		while (i > 0)
//		{
//			printf("%4d", i);
//			i--;
//		}
//		puts("\n");
//		goto LOOP3;
//		break;
//		
//	LOOP3:
//	default:
//		i = 100;
//		if (i >= 100)
//		{
//			printf("*****");
//		}
//		else
//		{
//			printf("**************************");
//		}
//		puts("\n");
//		break;
//	}
//	return EXIT_SUCCESS;
//}