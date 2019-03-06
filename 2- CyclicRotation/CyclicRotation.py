# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")

def solution(A, K):
    lens = len(A)
    if lens == 0:
        return A
    K=K%lens
    front = A[lens-K:]
    end = A[:lens-K]
    return front + end