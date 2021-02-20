#!/usr/bin/python3
def island_perimeter(grid):
    count = 0
    for i in range(len(grid)):
        for g in range(len(grid[i])):
            if i is not 0:
                if grid[i-1][g] == 0 and grid[i-1][g] != grid [i][g]:
                    count += 1
                if grid[i-1][g] == 1 and grid[i-1][g] != grid [i][g]:
                    count += 1
                if g+1 < len(grid[i]):
                    if grid[i][g] == 1 and grid[i][g] != grid[i][g+1]:
                        count += 1
                if g != 0:
                    if grid[i][g] == 1 and grid[i][g] != grid[i][g-1]:
                        count += 1
            else:
                if g+1 < len(grid[i]):
                    if grid[i][g] == 1 and grid[i][g] != grid[i][g+1]:
                        count += 1
                if g != 0:
                    if grid[i][g] == 1 and grid[i][g] != grid[i][g-1]:
                        count += 1
    return count
