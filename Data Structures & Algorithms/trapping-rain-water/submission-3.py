class Solution:
    def trap(self, height: List[int]) -> int:

        left      = 0
        right     = len(height) - 1

        maxLeft   = 0
        maxRight  = 0
        totalArea = 0

        while left <= right:
            if maxLeft <= maxRight:
                area = maxLeft - height[left]

                if height[left] > maxLeft:
                    maxLeft = height[left]
                left += 1
            else:
                area = maxRight - height[right]

                if height[right] > maxRight:
                    maxRight = height[right]
                right -= 1
        
            if area > 0:
                totalArea += area

        return totalArea

