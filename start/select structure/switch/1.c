#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    int nums[100];      // 存储操作数
    char ops[100];      // 存储运算符
    int num_count = 0;  // 操作数数量
    int op_count = 0;   // 运算符数量
    int i = 0;

    while(1)
    {
        if (strlen(s) == 0) {
            continue;
        }
        else
        {
            for(int k =0;k<strlen(s);k++)
            {
                s[k]='\0';
            }
         
        }

        int result = 0;
        num_count = 0;  // 操作数数量
        op_count = 0;   // 运算符数量
        i = 0;
    

    // 读取输入字符串（直到等号结束）
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    // 去除末尾的等号和可能的换行符
    for (int j = 0; j < len; j++) {
        if (s[j] == '=') {
            s[j] = '\0';
            break;
        }
    }

    // 解析字符串，提取操作数和运算符
    while (s[i] != '\0') {
        // 提取数字（可能是多位数）
        if (isdigit(s[i])) {
            int num = 0;
            while (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            nums[num_count++] = num;
        }
        // 提取运算符
        else {
            // 检查是否为合法运算符
            if (s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/') {
                printf("ERROR\n");
                return 0;
            }
            ops[op_count++] = s[i];
            i++;
        }
    }

    // 校验操作数和运算符数量是否匹配（操作数应比运算符多1）
    if (num_count != op_count + 1) {
        printf("ERROR\n");
        //return 0;
    }

    // 处理只有一个操作数的情况（如"123="）
    if (op_count == 0) {
        printf("%d\n", nums[0]);
        //return 0;
    }

    // 按从左到右顺序计算
    result = nums[0];
    for (int j = 0; j < op_count; j++) {
        switch (ops[j]) {
            case '+':
                result += nums[j + 1];
                break;
            case '-':
                result -= nums[j + 1];
                break;
            case '*':
                result *= nums[j + 1];
                break;
            case '/':
                // 处理除数为0的情况
                if (nums[j + 1] == 0) {
                    printf("ERROR\n");
                    //return 0;
                }
                result /= nums[j + 1];  // 整数除法
                break;
            default:
                // 理论上不会走到这里（前面已校验）
                printf("ERROR\n");
                //return 0;
        }
    }

    // 输出计算结果
    printf("%d\n", result);
    }
    return 0;
}