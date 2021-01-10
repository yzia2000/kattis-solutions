res = []
cursor = 0
seq = input()

for ch in seq:
    if ch == 'R':
        if not (cursor == len(res) or len(res) == 0):
            cursor = cursor + 1;
    elif ch == 'L':
        if not cursor == 0:
            cursor = cursor - 1;
    elif ch == 'B':
        if not cursor == 0:
            res.pop(cursor - 1)
            cursor = cursor - 1
    else:
        res.insert(cursor, ch)
        cursor = cursor + 1

print("".join(res))

# arnar
