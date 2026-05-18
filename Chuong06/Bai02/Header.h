#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
// Hàm kiểm tra xem chuỗi có phải là số nguyên
inline bool CheckInteger(const string& input)
{
    for (size_t i = 0; i < input.length(); i++)
        if (!isdigit(static_cast<unsigned char>(input[i])))
            return false;
    return true;
}
// Hàm kiểm tra xem chuỗi có phải là số thực
inline bool CheckFloat(const string& input)
{
    bool decimalPointFound = false;
    for (size_t i = 0; i < input.length(); i++)
    {
        if (input[i] == '.')
        {
			if (decimalPointFound) // Nếu đã tìm thấy dấu thập phân trước đó, trả về false
                return false;
            decimalPointFound = true;
        }
        else if (!isdigit(static_cast<unsigned char>(input[i])))
            return false; 
    }
    return true;
}
#endif