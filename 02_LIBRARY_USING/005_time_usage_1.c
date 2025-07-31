#include <stdio.h>
#include <time.h>

int main(void) {
    // 宣告 time_t 型別的變數，用來存儲「1970 年到現在的秒數」
    // time_t current_time;

    // 把現在的時間寫進 current_time
    // time(&current_time);
    
    // Optimize:
    time_t now = time(NULL);
    if (now == ((time_t) - 1)) {
        perror("time failed");
        return 1;
    }
    
    // ctime() 會把 time_t 格式轉成字串
    printf("Current time: %s", ctime(&now));

    return 0;
}