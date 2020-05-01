/*
Mohammed Mudassir Mohiuddin
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        
        if(strs.empty()) return res;
        
        map<string, vector<string>> map_str;
        
        for(auto str: strs){
            string to_sort = str;
            sort(to_sort.begin(), to_sort.end());
            map_str[to_sort].push_back(str);
        }
        
        map<string,vector<string>>::iterator o = map_str.begin();
        while(o != map_str.end())
        {
            res.push_back(o->second);
            o++;
        }
        
        return res;
        
        
    }
};