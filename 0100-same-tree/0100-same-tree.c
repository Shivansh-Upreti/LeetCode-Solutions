/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool preorder(struct TreeNode* p, struct TreeNode* q){
    if(p==NULL&&q==NULL){
        return 1;
    }
    else if((p==NULL&&q!=NULL) || (p!=NULL&&q==NULL)){
        return 0;
    }
    else if(p->val!=q->val){
        return 0;
    }
    return preorder(p->left,q->left)&&preorder(p->right,q->right);
}
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    return preorder(p,q);
}