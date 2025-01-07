#ifndef _PageOptions_h_
#define _PageOptions_h_

#include <unordered_map>
// #include <string>
// #include <vector>

class PageOptions
{
public:
    // 构造函数
    PageOptions(const std::string &option_str) {}

    // 成员变量
    bool is_all_pages = true;
    bool is_single_page = false;
    std::vector<int> pages_array;
    std::unordered_map<int, int> pages_map;
    // 成员函数
    // std::unordered_map<int, int> parseString(const std::string &input);
};

#endif // _PageOptions_h_