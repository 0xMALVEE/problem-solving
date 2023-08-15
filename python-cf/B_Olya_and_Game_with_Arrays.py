def solve_test_case(arrays):
    max_beauty = float('inf')
    total_sum = 0

    for array in arrays:
        min_val = min(array)
        total_sum += min_val

        for num in array:
            if num > min_val:
                max_beauty = min(max_beauty, total_sum - min_val + num)

    return max_beauty

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arrays = []
        
        for _ in range(n):
            m = int(input())
            array = list(map(int, input().split()))
            arrays.append(array)
        
        result = solve_test_case(arrays)
        print(result)

if __name__ == "__main__":
    main()
