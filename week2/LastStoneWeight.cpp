/*
Mohammed Mudassir Mohiuddin
*/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int, vector<int>, less<int>> pq(stones.begin(), stones.end());
        int res = 0;
        
        while(!pq.empty()){
            res = pq.top();
            pq.pop();
            if(pq.empty()) break;
            res = abs(res - pq.top());
            pq.pop();
            if(res)
                pq.push(res);
        }
        return (pq.empty())?res:pq.top();
    }
};
static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();



/*
8 7 1
4 2 2
2 1 1
1 1 0
*/