#include <iostream>
bool string_equal(std::string s1, int st, int si1)
{
    if (s1[st] != s1[si1 - 1])
        return false;
    else
    {
        string_equal(s1, st + 1, si1 - 1);
    }
    return true;
}

int main()
{
    std::string s1 = "madam";
    // std::string s2="hello World";
    int si1 = s1.length(); //,si2=s2.length();
    bool ans = string_equal(s1, 0, si1);
    std::cout << ans << "\n";
}