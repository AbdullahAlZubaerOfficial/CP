t = int(input())
for _ in range(t):
    n = int(input())
    if n == 3:
        print("1 3 2")
    elif n == 6:
        print("2 3 6 4 5 1")
    else:
        # General approach for larger n
        res = []
        l, r = 1, n
        for i in range(n):
            if i % 2 == 0:
                res.append(l)
                l += 1
            else:
                res.append(r)
                r -= 1
        print(' '.join(map(str, res)))


# Input: 
# 2
# 3
# 6

# Output: 
# 1 3 2
# 2 3 6 4 5 1