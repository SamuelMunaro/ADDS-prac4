#include "Finder.h"

#include <string>

std::vector<int> Finder::findSubstrings(const std::string& s1, const std::string& s2) {
    std::vector<int> result;

    size_t prevFound = 0;
    for(size_t i = 1; i <= s2.size(); i++) {
        size_t found = s1.find(s2.substr(0, i), prevFound);
        if (found != std::string::npos) {
            result.push_back(found);
            prevFound = found + 1;
        } else {
            // If any prefix is not found, the remaining won't be found either
            for (size_t j = i; j <= s2.size(); j++)
                result.push_back(-1);
            break;
        }
    }

    // If some substrings are still needed to be added
    while (result.size() < s2.size()) {
        result.push_back(-1);
    }

    return result;
}