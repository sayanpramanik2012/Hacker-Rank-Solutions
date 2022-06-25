t = int(input())

def is_palindrome(s):
    return s == s[::-1]

def solve(s):
    i, j = 0, len(s) - 1
    while (i < j) and (s[i] == s[j]):
        i += 1
        j -= 1
    if i == j:
        return 0
    if is_palindrome(s[i + 1 : j + 1]):
        return i
    if is_palindrome(s[i:j]):
        return j
    raise AssertionError

for _ in range(t):
    print(solve(input()))