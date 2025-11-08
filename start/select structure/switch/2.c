#include <stdio.h>
#include <math.h>


int main()
{
    double a, b, c;
    int i = 0;
    double x[100], y[100], z[100];
    for (i ; i < 100; i++) {
        scanf("%lf %lf %lf", &x[i], &y[i], &z[i]);

    }


    void result(double a, double b, double c);
    result(a, b, c);
    return 0;
}

void result(double a, double b, double c) {
    int status;
    double root, root1, root2, real_part1, imaginary_part1, real_part2, imaginary_part2;
    double discriminant;
    
    // 情况4: 所有系数都为0
        if (a == 0 && b == 0 && c == 0) {
            status = 0;
        }
        // 情况5: a和b为0，c不为0
        else if (a == 0 && b == 0 && c != 0) {
            status = 1;
        }
        // 情况: a为0，b不为0（一次方程）
        else if (a == 0 && b != 0) {
            root = -c / b;
            status = 2;
        }
        else {
            // 计算判别式
            discriminant = b * b - 4 * a * c;

            // 情况3: 只有一个根（判别式为0）
            if (discriminant == 0) {
                root = -b / (2 * a);
                status = 3;
            }
            // 情况1: 两个不相等的实数根
            else if (discriminant > 0) {
                root1 = (-b + sqrt(discriminant)) / (2 * a);
                root2 = (-b - sqrt(discriminant)) / (2 * a);
                status = 4;
            }
            // 情况2: 两个复数根
            else {
                real_part1 = -b / (2 * a);
                imaginary_part1 = sqrt(-discriminant) / (2 * a);
                real_part2 = real_part1;
                imaginary_part2 = imaginary_part1;
                status = 5;
            }
        }

        switch (status) {
            case 0:
                printf("Zero Equation\n");
                break;
            case 1:
                printf("Not An Equation\n");
                break;
            case 2:
                printf("%.2lf\n", root);
                break;
            case 3:
                printf("%.2lf\n", root);
                break;
            case 4:
                if (root1 > root2){
                    printf("%.2lf %.2lf\n", root1, root2);
                    break;}
                else{
                    printf("%.2lf %.2lf\n", root2, root1);
                    break;}
            case 5:
                printf("%.2lf + %.2lfi\n", real_part1, imaginary_part1);
                printf("%.2lf - %.2lfi\n", real_part2, imaginary_part2);
                break;
        }
           
} 