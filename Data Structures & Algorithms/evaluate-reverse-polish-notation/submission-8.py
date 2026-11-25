class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for num in tokens:
            if num == '+':
                sum = stack.pop()
                sum += stack.pop()
                stack.append(sum)

            elif num == '-':
                subtra = stack.pop()
                minue  = stack.pop()
                stack.append(minue - subtra)

            elif num == '*':
                prod = stack.pop()
                prod *= stack.pop()
                stack.append(prod)

            elif num == '/':
                denom, numer = stack.pop(), stack.pop()
                stack.append(int(float(numer) / denom))

            else:
                stack.append(int(num))

        return stack[0]