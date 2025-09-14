def factorial(num):
    if num == 1:
        return 1
    else:
        return num * factorial(num - 1)

def sum_factorials(n):
    sum = 0
    for i in range(1, n+1):
        sum += factorial(i)
    return sum

# Example usage
print(sum_factorials(5)) # Output: 153 (1! + 2! + 3! + 4! + 5! = 1 + 2 + 6 + 24 + 120 = 153)

