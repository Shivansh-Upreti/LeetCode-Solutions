/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void inorder(struct TreeNode *rt,int *arr,int *idx){
    if(rt==NULL){
        return;
    }
    else{
        inorder(rt->left,arr,idx);
        arr[(*idx)++]=rt->val;
        inorder(rt->right,arr,idx);
    }
}
int countNode(struct TreeNode* rt){
    if(rt==NULL){
        return 0;
    }
    return 1+countNode(rt->left)+countNode(rt->right);
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int idx=0;
    *returnSize=countNode(root);
    int *ans=(int*)malloc((*returnSize)*sizeof(int));
    inorder(root,ans,&idx);
    return ans;
}