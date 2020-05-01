/*
Mohammed Mudassir Mohiuddin
*/

class Solution {
    int height(TreeNode* t){
         if (t == 0)
        {
            return 0;
        }
        else
        {
            return 1 + max(height(t->left),height(t->right));
        }
        
    }
public:
    int diameterOfBinaryTree(TreeNode* t) {
        if (t == 0) return 0;

        int lheight = height(t->left);
        int rheight = height(t->right);

        int ldiameter = diameterOfBinaryTree(t->left);
        int rdiameter = diameterOfBinaryTree(t->right);

        return max(lheight + rheight ,
	       max(ldiameter,rdiameter));
        
    }
};