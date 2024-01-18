t = int(input())
for i in range(t):
    n, H, M = map(int, input().split())
    h_Diff, m_Diff = 24, 60
    for j in range(n):
        h, m = map(int, input().split())
        h_diff = h - H
        m_diff = m - M
        if m_diff < 0:
            h_diff -= 1
            m_diff += 60
        if h_diff < 0:
            h_diff += 24
        if h_diff * 60 + m_diff < h_Diff * 60 + m_Diff:
            h_Diff, m_Diff = h_diff, m_diff
    print(h_Diff, m_Diff)