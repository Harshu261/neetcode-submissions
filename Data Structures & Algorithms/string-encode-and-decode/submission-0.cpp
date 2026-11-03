class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for (const string s : strs){
            encoded += to_string(s.length())+"#"+s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector <string> decoded;
        size_t i=0;
        size_t n = s.length();
        while (i < n){
            size_t hash_pos = s.find("#",i);

            int len = stoi(s.substr(i,hash_pos-i));

            size_t start = hash_pos+1;
            decoded.push_back(s.substr(start,len));
            i = start +len;
        }
        return decoded;
    }
};
