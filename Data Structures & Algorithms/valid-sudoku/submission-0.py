class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:

        # rows
        numberMap = {}
        for i in range(9):
            for j in range(9):
                if board[i][j] == ".":
                    continue
                if board[i][j] in numberMap:
                    return False

                numberMap[board[i][j]] = True

            numberMap = {}

        # cols
        numberMap = {}
        for i in range(9):
            for j in range(9):
                if board[j][i] == ".":
                    continue
                if board[j][i] in numberMap:
                    return False

                numberMap[board[j][i]] = True

            numberMap = {}

    
        seen1 = set()
        seen2 = set()
        seen3 = set()
        for i in range(9):
            for j in range(9):
                if board[i][j] == '.':
                    continue

                if j < 3:
                    if board[i][j] in seen1:
                        return False
                    seen1.add(board[i][j])
                elif j < 6:
                    if board[i][j] in seen2:
                        print(board[i][j], i, j)
                        return False
                    seen2.add(board[i][j])
                elif j < 9:
                    if board[i][j] in seen3:
                        return False
                    seen3.add(board[i][j])

            if i == 2 or i == 5:
                print(seen1)
                seen1.clear()
                seen2.clear()
                seen3.clear()




        return True