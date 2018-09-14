//练习1.11: 编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。

#include <iostream>
int main()
{
    // 提示用户输入两个数
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;     // 保存我们读入的输入数据的变量
    std::cin >> v1 >> v2;   // 读取输入数据
    int i = v2;
    std::cout << "Numbers between v1 and v2 are "  << std::endl;
    while (i >= v1 + 2) {
        --i;      // 将 i 减 1      
        std::cout << i << std::endl;
        }
        return 0;
}