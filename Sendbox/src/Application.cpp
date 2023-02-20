#include <cstdio>
/**
* Created by WuXiangGuJun on 2023/2/19.
*/
namespace Hazel {
    __declspec(dllimport) void Print();
}


int main() {
    printf("你好");
    Hazel::Print();
}