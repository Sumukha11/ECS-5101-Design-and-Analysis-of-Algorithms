def find_min_max(sizeOfArray, arrayElements):
    if 1 <= sizeOfArray <= 10**5:
        if all(-10**9 <= element <= 10**9 for element in arrayElements):
            minOfElement = min(arrayElements)
            maxOfElement = max(arrayElements)
            return f"{maxOfElement} {minOfElement}"
        else:
            return "Array elements should be in the range of -10^9 to 10^9."
    else:
        return "Size of the array should be between 1 and 100000 elements."

# Sample Input
sizeOfArray = int(input())
arrayElements = list(map(int, input().split()))

# Output
print(find_min_max(sizeOfArray, arrayElements))
