ranges = input().split(";")
res = 0
for rang in ranges:
    if "-" in rang:
        nums = rang.split("-")
        res = res + int(nums[1]) - int(nums[0]) + 1
    else:
        res = res + 1

print(res)
