test = int(input())

results = []
while(test):
    n = int(input())
    a = list(map(int, input().split()))

    mn = float('inf')
    # mn = int('inf')
    print(f"mn = {mn}")

    for i in range(n - 1):
        for j in range(i + 1, n):
            res = a[i] + a[j] + (j - i)
            if res < mn:
                mn = res

    print(mn)
    test = test-1


mn2 = 10**250
print(f"mn2 = {mn2}")  # Displays "mn = inf"

# Demonstrating infinity behavior
print(mn2 > 1e1000)  # True
print(mn2 + 100)     # inf


