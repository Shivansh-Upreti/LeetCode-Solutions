class Solution {
public:
    void push(char stack[],int *top,char ch){
        (*top)++;
        stack[*top]=ch;
    }
    void pop(int *top){
        (*top)--;
    }
    bool isValid(string s) {
        if(s.size()>1){
            int top=-1;
            char stack[s.size()];
            int flag=-1;
            for(int i=0;i<s.size();i++){
                if(s[i]=='('||s[i]=='{'||s[i]=='['){
                    push(stack,&top,s[i]);
                }
                else if(top!=-1){
                    if(s[i]==')'&&stack[top]=='('){
                        pop(&top);
                    }
                    else if(s[i]==']'&&stack[top]=='['){
                        pop(&top);
                    }
                    else if(s[i]=='}'&&stack[top]=='{'){
                        pop(&top);
                    }
                    else{
                        flag=0;
                    }
                }
                else{
                    flag=0;
                }
            }
            if(top!=-1||flag==0){
                return false;
            }
            if(top==-1||stack[top]==NULL||flag==1){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
};