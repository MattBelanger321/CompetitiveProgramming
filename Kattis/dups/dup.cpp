word = input()
c = 0
for i in word:
    if c != len(word)-1 and i == word[c+1]:
        word = word[:c] + '' + word[c + 1:]
        c = c-1
    c += 1
print(word)
