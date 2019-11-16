#!/usr/bin/python3

def island_perimeter(grid):
    p = 0
    for a in range(len(grid)):
        for b in range(len(grid[a])):
            if grid[a][b]:
                p += 4
                if a != 0:
                    if grid[a - 1][b] == 1:
                        p -= 1
                if a < len(grid) - 1:
                    if grid[a + 1][b] == 1:
                        p -= 1
                if b != 0:
                    if grid[a][b - 1] == 1:
                        p -= 1
                if b < len(grid[a]) - 1:
                    if grid[a][b + 1] == 1:
                        p -= 1
    return p
