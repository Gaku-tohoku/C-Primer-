#include <iostream>
int main()
{
    std::cout << "Numbers between 10 and 0 are "  << std::endl;
    // 只要 i 的值大于等于0，while 循环就会持续执行
    for (int val = 10; val >= 1; --val)
         std::cout << val << std::endl;
        return 0;
}