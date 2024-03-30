#include <iostream>
#include <string>
#include "Finder.h"

using namespace std;

int main() {
    Finder a;

    string s1 = "4 6 3 4 5 5 4 5 6 7";
    string s2 = "4 5 6 8 9";

    std::vector<int> result = a.findSubstrings(s1, s2);
    //cout << result.size() << endl;

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << std::endl;
    }

    return 0;
}