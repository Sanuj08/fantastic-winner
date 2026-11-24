// Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
// Input: s and t (separated by space or newline)
#include <stdio.h>
#include <string.h>

int main(void) {
    static char s[100005], t[100005];
    int count[26] = {0}, anagram = 1;
    scanf("%100000s %100000s", s, t);
    if (strlen(s) != strlen(t))
        anagram = 0;
    for (int i = 0; anagram && s[i] != '\0'; i++)
        count[s[i] - 'a']++;
    for (int i = 0; anagram && t[i] != '\0'; i++)
        count[t[i] - 'a']--;
    for (int i = 0; i < 26; i++)
        if (count[i] != 0)
            anagram = 0;
    printf(anagram ? "Anagram\n" : "Not Anagram\n");
    return 0;
}
