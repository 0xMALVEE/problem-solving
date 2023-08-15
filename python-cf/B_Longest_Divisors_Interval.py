import math

def find_divisors(n):
    # Find all divisors of n
    divisors = set()
    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i == 0:
            divisors.add(i)
            divisors.add(n // i)
    return sorted(divisors)

def find_max_interval(n):
    divisors = find_divisors(n)

    # Find the second and third smallest divisors
    l, r = divisors[1], divisors[2]

    return r - l + 1

# Function to read input and print output
def main():
    t = int(input())  # Number of test cases

    for _ in range(t):
        n = int(input())  # Value of n for each test case
        result = find_max_interval(n)
        print(result)

if __name__ == "__main__":
    main()
