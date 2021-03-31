def find_runner_up(n, arr):
    mx = max(arr)
    for i in range(n):
        if arr[i] == mx:
            arr[i] = -101
    return max(arr)

if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    print(find_runner_up(n, list(arr)))
