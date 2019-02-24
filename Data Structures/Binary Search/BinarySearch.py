class BinarySearch:
    def __init__(self):
        pass
    def rank(key,array):
        lower = 0
        higher = len(array) - 1
        while lower <= higher:
            mid = lower + (higher - lower) / 2
            if key < mid:
                higher = int(mid) - 1
            elif key > mid:
                lower = int(mid) + 1
            else:
                return mid
        return -1
arr = [1,2,3,4,55,56,57,79,99]
bs = BinarySearch()
bs.rank(3,arr)