#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_COLS 20        //所能处理的最大列号
#define MAX_INPUT 1000     //每个行输入的最大长度



int read_c_numbers(int c[], int max);
void rearrange(char* output, char const* input, int n_c, int const c[]);


int main(void)
{
	int n_c;                //进行处理的列标号
	int c[MAX_COLS];        //需要处理的列数
	char input[MAX_INPUT];  //容纳输入行的数组
	char output[MAX_INPUT]; //容纳输出行的数组

	//读取该串列标号
	n_c = read_c_numbers(c, MAX_COLS);

	//读取、处理和打印剩余的输入行
	while (gets_s(input,MAX_INPUT) != NULL)
	{
		printf("原始输入：%s\n", input);
		rearrange(output, input, n_c, c);
		printf("重新安排行：%s\n", output);
	}

	return EXIT_SUCCESS;//0
}


//读取列标号，如果超出规定范围则不予理会
int read_c_numbers(int c[], int max)
{
	int num = 0;
	int ch = 0;

	//取得列标号，如果所读取的数小于0则停止
	while (num < max && scanf("%d", &c[num]) == 1 && c[num] >= 0)
	{
		num += 1;
		//num++;
	}
		//确认已经读取的标号为偶数个，因为他们是以对的形式出现的
		if (num % 2 != 0)
		{
			puts("最后一个列号不是成对的。");
			exit(EXIT_FAILURE);//1
		}

		//丢弃该行中包含最后一个数字的那部分内容
		while (ch = getchar() != EOF && ch != '\n');

		return num;
	
}



//处理输入行，将指定列的字符连接在一起，输出行一NUL结尾
void rearrange(char* output, char const* input, int n_c, int const c[])
{
	int col;         //c数组的下标
	int output_col;  //输出列计数器
	int len;         //输入行的长度

	len = strlen(input);
	output_col = 0;

	//处理每队列标号
	for (col = 0; col < n_c; col += 2)
	{
		int nchars = c[col + 1] - c[col] + 1;
		//如果输入行结束或输出行数组已满，就结束任务
		if (c[col] >= len || output_col == MAX_INPUT - 1)
			break;

		//如果输出行的数据空间不够，只复制可以容纳的数据
		if (output_col + nchars > MAX_INPUT - 1)
			nchars = MAX_INPUT - output_col - 1;

		//复制相关的数据
		strncpy(output + output_col, input + c[col], nchars);
		output_col += nchars;
	}
	output[output_col] = '\0';
}
