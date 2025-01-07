#include <PageOptions.h>
#include <sstream>

// #include <iostream>
PageOptions::PageOptions(const std::string &option_str)
{
    if (option_str.find("singlePair:") == std::string::npos)
        return;

    is_single_page = true;
    is_all_pages = false;

    // pages_map = parseString(option_str);
}

// std::unordered_map<int, int> PageOptions::parseString(const std::string &input)
// {
//     std::cout << "进入PageOptions::parseString方法:" << std::endl;
//     std::cout.flush(); // 强制刷新输出缓冲区

//     std::unordered_map<int, int> result;
//     std::istringstream iss(input);
//     std::string segment;

//     // 获取 "single:1-2,3-6" 中的 "1-2,3-6" 部分
//     std::getline(iss, segment, ':');
//     std::getline(iss, segment);

//     // pages_array = stringToArray(pages.ToStdString());
//     std::cout << "segment:" << segment << std::endl;
//     std::cout.flush();

//     // 分割 "1-2,3-6" 为 "1-2" 和 "3-6"
//     std::istringstream segmentStream(segment);
//     std::string range;
//     while (std::getline(segmentStream, range, ','))
//     {
//         std::istringstream rangeStream(range);
//         int start, end;
//         char delimiter;

//         // 分割 "1-2" 为 1 和 2
//         if (rangeStream >> start >> delimiter >> end)
//         {
//             result[start] = end;
//         }
//     }

//     return result;
// }