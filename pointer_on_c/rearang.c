/*
 ** 这处程序从标准输入中读取输入行并在标准输出中打印这些输入行,
 ** 每个输入行的后面一行是该行的一部分。
 **
 ** 输入的第一行是一串列标，串的最后以一个负数结尾。
 ** 这些列标号成对出现，说明需要打印的输入行的列的范围
 ** 例如， 0，3，10，12，-1 表示第0列到第3列，第10列到第12列的内容将被打印。
 **
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_COLS 20        /* 所能处理的最大列号 */
#define MAX_INPUTS 1000    /* 每个输入行的最大长度 */

int read_column_numbers(int columns[], int max);
void rearrange(char *output, const char *input, int n_columns, const int columns[]);

int main(void){
    int n_columns;              /* 进行处理的列标号 */
    int columns[MAX_COLS];      /* 需要处理的列数 */
    char input[MAX_INPUTS];     /* 容纳输入行的数组 */
    char output[MAX_INPUTS];    /* 容纳输出行的数组 */

    /*
    ** 读取该串列标号
    */
    n_columns = read_column_numbers(columns, MAX_COLS);

    /*
    ** 读取，处理和打印剩余的输入行。
    */
    while(fgets(input, MAX_INPUTS, stdin) != NULL){
        printf("Original input : %s", input);
        rearrange(output, input, n_columns, columns);
        printf("Rearranged line: %s\n", output);
    }

    return EXIT_SUCCESS;

}

/*
** 读取列标号，如果超出献宝范围则不予理会。
*/
int read_column_numbers(int columns[], int max){
    int num = 0;
    int ch;

    /*
    ** 取得列标号，如果所读取的数小于0则停止。
    */
    while(num < max && scanf( "%d", &columns[num]) ==1 && columns[num] >= 0){
        num += 1;
    }

    /*
    ** 确认已经读取的标号为偶数个，因为它们是以对的形式出现的。
    */
    if(num % 2 != 0){
        puts("Last columns number is not paired. ");
        exit(EXIT_FAILURE);
    }

    /*
    ** 丢弃该行中包含最后一个数字的那部分内容
    */
    while( (ch = getchar()) != EOF && ch != '\n' ){
        continue;
    }

    return num;
}


/*
** 处理输入行，将指定列的字符连接在一直，输出行以NUL（即空字符：\0）结尾
*/
void rearrange(char *output, const char *input, int n_columns, const int columns[]){
    int col;
    int output_col;
    int len;

    len = strlen(input);
    output_col = 0;

    /*
    ** 处理每对列标号。
    */
    for(col = 0; col < n_columns; col += 2){
        int nchars = columns[col + 1] - columns[col] + 1;

        /*
        ** 如果输入行结束或输出行数组已满，就结束任务。
        */
        if(columns[col] >= len || output_col == MAX_INPUTS -1){
            break;
        }

        /*
        ** 如果输出行数据空间不够，只复制可以容纳的数据。
        */
        if(output_col + nchars > MAX_INPUTS -1){
            nchars = MAX_INPUTS - output_col - 1;
        }

        /*
        ** 复制相关的数据
        */

        strncpy(output + output_col, input + columns[col], nchars);
        output_col += nchars;
    }

    output[output_col] = '\0';
}