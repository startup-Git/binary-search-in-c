-----------Algorithm--------------
Binary search(low, high, N)
stage-1: mid = (low + high) / 2

stage-2: if mid = N, then go back stage-5.

stage-3: if N > mid then, low = mid + 1. back stage-1

stage-4: if N < mid, then high = mid -1. back stage-1

stage-5: the number is got it(mid).

question: how to search an array of any number by binary search