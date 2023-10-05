class Palindrome:
    def __init__(self, word):
        self.word = word
    def isPalindrome(self):
        wordArray = []
        reverseWord = ""
        i = 0
        for i in  range(len(self.word)):
            wordArray.append(self.word[i])
        j = len(wordArray)
        while j>0:
            reverseWord += wordArray.pop()
            j -= 1
        if(reverseWord == self.word):
            return True
        return False

pal = Palindrome("racecar")
if pal.isPalindrome():
    print("Word is a palindrome")
else:
    print("Word is not a palindrome")