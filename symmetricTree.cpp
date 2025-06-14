class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
            return true;
        if (p == NULL || q == NULL)
            return false; // agar koi ak null hai aur dusra null nahi h

        if (p->val != q->val)
            return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }

    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL)
            return NULL;

        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        root->left = invertTree(root->left);
        root->right = invertTree(root->right);

        return root;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        root->left = invertTree(root->left);
        return isSameTree(root->left, root->right);
    }
};