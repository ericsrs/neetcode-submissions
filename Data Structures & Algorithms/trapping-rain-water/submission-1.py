class Solution:
    def trap(self, height: List[int]) -> int:

        prefix = []
        suffix = []

        currentMax = 0
        for i, a in enumerate(height):
            prefix.append(currentMax)
            if a > currentMax:
                currentMax = a

        currentMax = 0
        for i, a in reversed(list(enumerate(height))):
            suffix.append(currentMax)
            if a > currentMax:
                currentMax = a
        suffix.reverse()

        totalArea = 0
        for i, a in enumerate(height):
            area = min(prefix[i], suffix[i]) - a
            if area <= 0:
                continue
            else:
                totalArea += area

        return totalArea