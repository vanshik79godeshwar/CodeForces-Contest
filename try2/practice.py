n = int(input())

for i in range(n):
    k = int(input())
    arr = list(map(int, input().split()))
    mx = arr[0]
    sum = 0
    count = 0
    for j in range(k):
        mx = max(mx, arr[j])
        sum += arr[j]
        if mx == sum-mx:
            count += 1
    print(count)