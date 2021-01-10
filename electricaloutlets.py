n = int(input())
while n:
    n = n - 1
    nums = input().split()
    res = 3
    for num in nums:
        res = res + int(num) - 2

    print(res)
