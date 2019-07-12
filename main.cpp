#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"

// https://leetcode.com/problems/find-the-difference/

// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    char findTheDifference(string& s, string& t) {
        vector<int> sc(26);
        vector<int> tc(26);
        for (auto c : s) {
            ++sc[c - 'a'];
        }
        for (auto c : t) {
            ++tc[c - 'a'];
        }
        for (int i = 0; i <= 26 ; ++i) {
            if (sc[i] != tc[i])
                return 'a' + i;
        }
        return 'a';
    }
};

void test1() {
    vector<int> v1{1,2,3,4,5,6,7,8};
    string s = "abcd", t = "abcde";
    cout << "e ? " << Solution().findTheDifference(s, t) << endl;
}

void test2() {

}

void test3() {

}