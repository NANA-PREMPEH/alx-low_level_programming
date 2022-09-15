#!/usr/bin/python3
"""returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    p = 0
    for r in range(len(grid)):
        for h in range(len(grid[r])):
            if grid[r][h] == 1:
                if grid[r-1][h] == 0 or r == 0:
                    p += 1
                if r == len(grid) - 1 or grid[r+1][h] == 0:
                    p += 1
                if grid[r][h-1] == 0 or h == 0:
                    p += 1
                if h == len(grid[r]) - 1 or grid[r][h+1] == 0:
                    p += 1
    return(p)
