#ifndef __TWO_SUM_H__
#define __TWO_SUM_H__

#include <vector>
#include <unordered_map>

class two_sum {
public:
    two_sum();
    virtual ~two_sum();

public:
    std::vector<int> get_two_sum_index1(std::vector<int> &numbers, int target);
    std::vector<int> get_two_sum_index2(std::vector<int> &numbers, int target);
};

#endif