#ifndef FINDER_H
#define FINDER_H
#include <iostream>
#include <string>
#include <vector>
#include <chrono>


class Finder {
    
    public:
        static std::vector<int> findSubstrings(const std::string& s1, const std::string& s2);
};

#endif