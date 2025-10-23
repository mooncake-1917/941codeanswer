# include <stdio.h>
int main()
{
    int arr[5];
    int i;
    if (scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]) != 5) return 0;
    for (i = 0; i < 5; i++) {
        int part = arr[i] / 3; /* 每份的大小，余数被吃掉 */
        int left = (i + 4) % 5;
        int right = (i + 1) % 5;
        arr[left] += part; /* 给左邻居一份 */
        arr[right] += part; /* 给右邻居一份 */
        arr[i] = part; /* 自己留一份 */
    }
    printf("%5d%5d%5d%5d%5d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    return 0;
}
