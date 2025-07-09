#include<iostream>
#include<string>
#include<algorithm>

int main() {
    std::string s1 = "maam";
    std::string s2 = "amam";

    if (s1.size() != s2.size()) {
        std::cout << "Not Anagrams\n";
        return 0;
    }

    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());

    if (s1 == s2) {
        std::cout << "Anagrams\n";
    } else {
        std::cout << "Not Anagrams\n";
    }

    return 0;
}