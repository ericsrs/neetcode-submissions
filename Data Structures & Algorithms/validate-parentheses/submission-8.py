class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        
        for i, a in enumerate(s):
            if a == '(' or a == '[' or a == '{':
                stack.append(a)

            if a == ')':
                if stack and stack[-1] == '(' :
                    stack.pop()
                else:
                    return False

            if a == ']':
                if stack and stack[-1] == '[' :
                    stack.pop()
                else:
                    return False

            if a == '}':
                if stack and stack[-1] == '{' :
                    stack.pop()
                else:
                    return False
                
        if stack:
            return False
            
        return True