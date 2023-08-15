def solve_test_case(n, arr):
    arr.sort(reverse=True)
    b = [arr[0]]
    c = []

    for num in arr[1:]:
        if num % b[0] == 0:
            c.append(num)
        else:
            b.append(num)

    if len(c) == 0:
        return -1

    return b, c

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))

        result = solve_test_case(n, arr)

        if result == -1:
            print(-1)
        else:
            b, c = result
            print(len(b), len(c))
            print(" ".join(map(str, b)))
            print(" ".join(map(str, c)))

if __name__ == "__main__":
    main()
