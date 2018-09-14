#include <iostream>
int main()
{
    int i = 0, val = 10;
    std::cout << "Numbers between 10 and 0 are "  << std::endl;
    // 只要 i 的值大于等于0，while 循环就会持续执行
    while (val >= 0) {
        i = val;    // 将 val 赋予 i
        --val;      // 将 val 减 1
        std::cout << i << std::endl;
        }
        return 0;
}