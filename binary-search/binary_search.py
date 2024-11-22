def binary_search(arr, val):
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = (left + right) // 2
        if val == arr[mid]:
            return mid
        elif val < arr[mid]:
            right = mid - 1
        else:
            left = mid + 1

    return -1


if __name__ == "__main__":
    arr = [i for i in range(100)]
    index = binary_search(arr, 42)
    print(index)
