#Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
#An input string is valid if:
#Open brackets must be closed by the same type of brackets.
#Open brackets must be closed in the correct order.
#Every close bracket has a corresponding open bracket of the same type.
#Example 1:
#Input: s = "()"
#Output: true
#Example 2:

#Input: s = "()[]{}"
#Output: true
#Example 3:

#Input: s = "(]"
#Output: false

def valid_parenthesis(s):
    length = len(s)
    if length == 0 or length % 2 != 0: return False
    table = {'(':')','{':'}','[':']'}
    i = int(length / 2)
    j = i - 1
    while i < length and j >= 0:
        if table[s[j]] != s[i]: return False
        i = i+1
        j = j - 1
    return True

print(valid_parenthesis('({})'))
