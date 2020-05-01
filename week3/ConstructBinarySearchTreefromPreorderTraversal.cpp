/*
Mohammed Mudassir Mohiuddin
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size() == 0) return NULL;
        TreeNode* root = new TreeNode(preorder[0]);
        for(int i=1; i<preorder.size(); ++i){
            bool flag = false;
            TreeNode* curr = root;
            while(flag == false){
                if(preorder[i] < curr->val){
                    if(curr->left == NULL){
                        curr->left = new TreeNode(preorder[i]);
                        flag = true;
                    }else{
                        curr = curr->left;
                    }
                }
                else{
                    if(curr->right == NULL){
                        curr->right = new TreeNode(preorder[i]);
                        flag = true;
                    }else{
                        curr = curr->right;
                    }
                }
            }
        }
        return root;
        
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

