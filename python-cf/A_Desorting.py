
T = int(input().strip())

for _ in range(T):
    n = int(input().strip())
    nums = list(map(int ,input().strip().split()))

    diff = float('inf')
    sorted = True

    for i in range(1, n):
        diff = min(nums[i] - nums[i - 1], diff)
        sorted &= nums[i] >= nums[i - 1]

    if not sorted:
        print(0)
        continue

    print(diff // 2 + 1)
