/*
Mohammed Mudassir Mohiuddin
*/
class Solution {
public:
    bool checkInPath(TreeNode* root, vector<int>& arr, int indx){
        if(!root || indx == arr.size()) 
            return false;
        
        if(!root->left && !root->right && root->val == arr[indx] && indx == arr.size()-1)
            return true;
        
        return (root->val == arr[indx] && (checkInPath(root->left, arr, indx+1)||checkInPath(root->right, arr, indx+1)));
        
    }
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        return checkInPath(root, arr, 0);
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();