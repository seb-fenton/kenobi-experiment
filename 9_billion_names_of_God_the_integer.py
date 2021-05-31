def partitions(n):
    partitions.p.append(0)

    for k in range(1, n + 1):
        d = n - k * (3 * k - 1) // 2
        if d < 0:
            break

        if k and 1:
            partitions.p[n] += partitions.p[d]
        else:
            partitions.p[n] -= partitions.p[d]

        d -= k
        if d < 0:
            break

        if k and 1:
            partitions.p[n] += partitions.p[d]
        else:
            partitions.p[n] -= partitions.p[d]

    return partitions.p[-1]

partitions.p = [1]

def main():
    ns = set([23, 123, 1234, 12345])
    max_ns = max(ns)

    for i in range(1, max_ns + 1):
        if i > max_ns:
            break
        p = partitions(i)
        if i in ns:
            return (i, p)

main()