#include <stdio.h>

int main() {
    int distance;
    scanf("%d", &distance);
    
    // 步行时间 = 距离 / 速度
    double walk_time = distance / 1.2;
    
    // 骑车时间 = 找车开锁时间 + 骑行时间 + 停车锁车时间
    double bike_time = 27 + (distance / 3.0) + 23;
    
    if (bike_time < walk_time) {
        printf("Bike\n");
    } else if (bike_time > walk_time) {
        printf("Walk\n");
    } else {
        printf("All\n");
    }
    
    return 0;
}