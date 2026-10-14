class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string pf = strs[0];
        for (int i = 0; i < strs.size() ; i ++){
            while (strs[i].find(pf) != 0){
                pf = pf.substr(0,pf.length()-1);
                if (pf.empty()) return "";
            } 
        }
        return pf;
    }
};