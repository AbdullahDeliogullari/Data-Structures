class InsertionSort():
    def __init__(self):
        None
    def sort(self,arr):
        for i in range(1,len(arr)):
            current_val = arr[i]
            comp_place = i - 1
            while comp_place >= 0 and current_val < arr[comp_place]:
                arr[comp_place + 1] = arr[comp_place]
                comp_place = comp_place - 1
            arr[comp_place + 1] = current_val
        return arr

Inssort = InsertionSort()
arr = [1,2,3,8,4,5,11,6]
Inssort.sort(arr)
print(arr)
        
