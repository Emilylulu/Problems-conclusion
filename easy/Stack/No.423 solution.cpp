    bool isValidParentheses(string &s) {
        // write your code here
        std::stack<char> ss;
        for(int i = 0; i <s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] =='{'){ // if it is a left just push in stack
                ss.push(s[i]);
            }else{
                if(ss.empty()){ // if it is a right and stack already empty return false
                    return false;
                }else{
                    char c = ss.top(); // char c is next pop one
                    ss.pop(); // in c pop() doesnot return anything so need use top() then pop().
                    if(s[i] == ')' and c !='('){ // test pop char is match s[i] or not
                        return false;
                    }
                    else if(s[i] == ']' and c !='['){
                        return false;
                    }
                    else if(s[i] == '}' and c !='{'){
                        return false;
                    }
                }
            }
        }
        if(!ss.empty()){ //if string finish, stack is not empty return false.
            return false;
        }
        return true;
    }
