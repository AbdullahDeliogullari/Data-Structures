class SelectionSort:
    def __init__(self):
        None
    def sort(self,arr):
        N = len(arr)
        for i in range(N):
            min_val = i
            for j in range(i + 1,N):
                if arr[min_val] > arr[j]:
                    min_val = j
            arr[i],arr[min_val] = arr[min_val],arr[i]
        return arr

unsorted_arr = [1,3,22,11,2,8,7,9]
print(unsorted_arr)

ss = SelectionSort()

sorted_arr = ss.sort(unsorted_arr)
print(sorted_arr)
                
