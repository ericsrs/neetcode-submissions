class Solution:
    def maxArea(self, heights: List[int]) -> int:
        
        left = 0
        right = len(heights) - 1

        currentMax = 0
        while left < right:
            width  = right - left
            length = min(heights[left], heights[right])
            area   = length * width

            if area > currentMax:
                currentMax = area

            if (heights[left] < heights[right]):
                left += 1
            elif (heights[left] > heights[right]):
                right -= 1
            else:
                left += 1
        

        return currentMax
