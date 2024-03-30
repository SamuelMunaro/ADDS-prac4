#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        size_t index = 0;

        for(size_t i = 1; i <= s2.size(); i++) {
            size_t found = s1.find(s2[i - 1], index); // Find the next character from s2 starting from index
            if (found != string::npos) {
                result.push_back(found);
                index = found + 1; // Update the starting index for the next search
            } else {
                result.push_back(-1);
                break;
            }
        }

        return result;
    }