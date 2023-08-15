def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort() 
    cnt = 1
    ans = 1

    for i in range(1, n):
        if a[i] - a[i - 1] > k:
            cnt = 1
        else:
            cnt += 1
        ans = max(ans, cnt)

    print(n - ans)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
