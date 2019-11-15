#!/usr/bin/python3

def island_perimeter(grid):
    p = 0
    for a in range(len(grid) - 1):
        for b in range(len(grid[a]) - 1):
            if grid[a][b] == 1:
                p += 1
                break
        for b in range(len(grid) - 1, 0, -1):
            if grid[a][b] == 1:
                p += 1
                break
    for a in range(len(grid) - 1):
        for b in range(len(grid[a]) - 1):
            if grid[b - 1][a] == 1:
                p += 1
                break
        for b in range(len(grid) - 1, 0, -1):
            if grid[b][a] == 1:
                p += 1
                break
    return p