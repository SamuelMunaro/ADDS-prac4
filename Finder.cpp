#include "Finder.h"

#include <string>

std::vector<int> Finder::findSubstrings(const std::string& s1, const std::string& s2) {
    std::vector<int> result;

    size_t prevFound = 0;
    for(size_t i = 1; i <= s2.size(); i++) {
        size_t found = s1.find(s2.substr(0, i), prevFound);
        if (found != std::string::npos) {
            result.push_back(found);
            prevFound = found + i; // Update prevFound to the end of found prefix
        } else {
            result.push_back(-1);
        }
    }

    // Check if s2 is longer than s1
    if (s2.size() > s1.size()) {
        for (size_t i = s1.size() + 1; i <= s2.size(); i++) {
            result.push_back(-1);
        }
    }

    return result;
}