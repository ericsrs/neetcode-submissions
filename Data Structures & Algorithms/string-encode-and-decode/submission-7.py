class Solution:

    def encode(self, strs: List[str]) -> str:
        encodedStr = ""

        for i in strs:
            encodedStr += str(len(i)) + "#" + i

        return encodedStr

    def decode(self, s: str) -> List[str]:

        strings = []
        i = 0

        while (i < len(s)):
            j = i
            while s[j] != "#":
                j += 1

            length = int(s[i:j])
            i = j + 1
            j = i + length

            strings.append(s[i:j])
            i = j
        
        return strings

