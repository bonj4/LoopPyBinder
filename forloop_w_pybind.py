import time
from build.module_name import forloop


if __name__ == "__main__":
    s = time.perf_counter_ns()
    forloop(1000000)
    print(f"Time taken by the for loop (once): {(time.perf_counter_ns() - s) * 0.001} microseconds")
    s = time.perf_counter_ns()
    for i in range(10):
        forloop(1000000)
    print(f"Time taken by the for loop (10 times): {(time.perf_counter_ns() - s) * 0.001} microseconds")
