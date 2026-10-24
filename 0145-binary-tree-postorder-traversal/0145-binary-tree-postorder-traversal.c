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
 void postorder(struct TreeNode *rt,int *arr,int *idx){
    if(rt==NULL){
        return;
    }
    else{
        postorder(rt->left,arr,idx);
        postorder(rt->right,arr,idx);
        arr[(*idx)++]=rt->val;
    }
}
int countNode(struct TreeNode* rt){
    if(rt==NULL){
        return 0;
    }
    return 1+countNode(rt->left)+countNode(rt->right);
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int idx=0;
    *returnSize=countNode(root);
    int *ans=(int*)malloc((*returnSize)*sizeof(int));
    postorder(root,ans,&idx);
    return ans;
}