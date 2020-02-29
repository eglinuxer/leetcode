#include <iostream>
#include "two_sum.h"

two_sum::two_sum() {
    std::cout << "构造函数执行了" << std::endl;
}

two_sum::~two_sum() {
    std::cout << "析构函数执行了" << std::endl;
}

std::vector<int> two_sum::get_two_sum_index1(std::vector<int> &numbers, int target) {
    std::unordered_map<int, int> m;
    std::vector<int> result;

    for(int i = 0; i < numbers.size(); ++i) {
        // 找不到当前数对应满足条件的另一个数
        if(m.find(numbers[i]) == m.end()) {
            // 将另一个数为 key 的地方存入当前数的下标
            m[target - numbers[i]] = i;
        } else {
            // 找到了，放入 result 容器
            result.push_back(m[numbers[i]]);
            result.push_back(i);
            break;
        }
    }

    return result;
}

std::vector<int> two_sum::get_two_sum_index2(std::vector<int> &numbers, int target) {
    std::vector<int> result;
    int low = 0, high = numbers.size() - 1;

    while(low < high) {
        if(numbers[low] + numbers[high] == target) {
            result.push_back(low);
            result.push_back(high);
            break;
        } else {
            numbers[low] + numbers[high] > target ? high-- : low++;
        }
    }

    return result;
}