class Solution {
public:
    int strStr(string haystack, string needle){
    int haystackLength = haystack.length();
    int needleLength = needle.length();
    if (needleLength > haystackLength)
        return -1;
    int i = 0;
    while (i < haystackLength)
    {
        string subWord = haystack.substr(i, needleLength);
        if (subWord == needle)return i;
        i++;
    }
    return -1;
    }
};