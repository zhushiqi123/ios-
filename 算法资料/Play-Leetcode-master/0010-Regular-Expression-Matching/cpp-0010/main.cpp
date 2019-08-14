/// Source : https://leetcode.com/problems/regular-expression-matching/
/// Author : liuyubobobo
/// Time   : 2019-03-19

#include <iostream>
#include <vector>

using namespace std;


/// DFS给定两个字符串s和p，验证是否符合正则匹配，其中s包含的是a-z,p不光包含a-z，还包含了'.'和'',其中'.'可以匹配任何字符，'*'代表可以有0个或者多个'*'前面的字符，比如'a*'，就可以匹配0个a到任意个a。
/// Time Complexity: O((s + p) * 2^(s + p))
/// Space Complexity: O(s + p)
class Solution {
public:
    // 判断是不是正则字符串
    bool isMatch(const string& s, const string& p) {
        return match(s, 0, p, 0);
    }

private:
    
     //
    bool match(const string& s, int sl, const string& p, int pl){

        if(sl == s.size()) return no_more_match(p, pl);
        if(pl == p.size()) return false;

        if(pl + 1 < p.size() && p[pl + 1] == '*'){
            if(s[sl] == p[pl] || p[pl] == '.')
                return match(s, sl + 1, p, pl) || match(s, sl, p, pl + 2);
            else
                return match(s, sl, p, pl + 2);
        }
        else if(s[sl] == p[pl] || p[pl] == '.')
            return match(s, sl + 1, p, pl + 1);
        return false;
    }

    bool no_more_match(const string& p, int pl){
        int i;
        for(i = pl; i < p.size(); i += 2)
            if(i + 1 < p.size() && p[i + 1] != '*') return false;
        return i == p.size();
    }
};


int main() {

    cout << Solution().isMatch("aa", "a") << endl; // false
    cout << Solution().isMatch("aa", "a*") << endl; // true
    cout << Solution().isMatch("ab", ".*") << endl; // true
    cout << Solution().isMatch("aab", "c*a*b") << endl; // true
    cout << Solution().isMatch("mississippi", "mis*is*p*") << endl; // false
    cout << Solution().isMatch("ab", ".*c") << endl; // false
    cout << Solution().isMatch("a", ".*..a") << endl; // false
    cout << Solution().isMatch("", ".*") << endl; // true

    return 0;
}
