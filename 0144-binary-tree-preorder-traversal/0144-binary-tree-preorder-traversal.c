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
void preorder(struct TreeNode *rt,int *arr,int *idx){
    if(rt==NULL){
        return;
    }
    else{
        arr[(*idx)++]=rt->val;
        preorder(rt->left,arr,idx);
        preorder(rt->right,arr,idx);
    }
}
int countNode(struct TreeNode* rt){
    if(rt==NULL){
        return 0;
    }
    return 1+countNode(rt->left)+countNode(rt->right);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize=countNode(root);
    int idx=0;
    int *ans=(int*)malloc((*returnSize)*sizeof(int));
    preorder(root,ans,&idx);
    return ans;
}