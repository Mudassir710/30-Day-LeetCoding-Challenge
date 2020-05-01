/*
Mohammed Mudassir Mohiuddin
*/

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int k=0, l=0;       
        for(int i=0; i<S.size(); i++){
            if(S[i] == '#')
            {
                k--;
            }
            else
            {
                if(k < 0) k=0;
                S[k++] = S[i];
            }
        }
        for(int i=0; i<T.size(); i++){
            if(T[i] == '#')
            {
                l--;
            }
            else
            {
                if(l < 0) l=0;
                T[l++] = T[i];
            }
        }
        if(S.substr(0,k) == T.substr(0,l)) return 1;
        return 0;
    }
};