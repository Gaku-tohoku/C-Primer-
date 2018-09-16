#include <iostream>
int main()
{
    int sum = 0;
    // 从 50 加到 100
    for (int val = 50; val <= 100; ++val) 
        sum += val;   // 将 sum + val 赋予 sum
    std::cout << "Sum of 50 to 100 inclusive is "
              << sum << std::endl;
    return 0;
}