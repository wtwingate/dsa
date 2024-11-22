import random


def bubble_sort(arr):
    last = len(arr) - 1
    sorted = False

    while not sorted:
        sorted = True
        for i in range(0, last):
            if arr[i] > arr[i + 1]:
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
                sorted = False
        last -= 1

    return arr


if __name__ == "__main__":
    arr = [random.randint(0, 100) for _ in range(10)]
    print("Unsorted:", arr)
    bubble_sort(arr)
    print("Sorted:  ", arr)
