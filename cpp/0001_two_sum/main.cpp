#include <iostream>
#include "two_sum.h"

int main(int argc, char *argv[])
{
    std::vector<int> numbers {2, 7, 11, 15};
    int target = 9;
    two_sum a;
    
    //std::vector<int> ret = a.get_two_sum_index1(numbers, target);
    std::vector<int> ret = a.get_two_sum_index2(numbers, target);
    for(auto it = ret.begin(); it != ret.end(); ++it) {
        std::cout << *it << std::endl;
    }

    for(auto it : ret) {
        std::cout << it << std::endl;
    }
    
    return 0;
}