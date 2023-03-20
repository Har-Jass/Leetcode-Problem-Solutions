class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int i = 0;
        int j = s.length() - 1;
        while(i <= j) {
            if(ans.length() > 0 && ans[ans.length() - 1] == s[i]) {
                ans.pop_back();
            }
            else {
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
    }
};