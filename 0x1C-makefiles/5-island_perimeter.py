#!/usr/bin/python3
"""
module for perimeter
"""


def island_perimeter(grid):
    """
    returns perimeter of an island
    """
    total = 0
    for x in range(0, len(grid)):
        for y in range(0, len(grid[0])):
            if grid[x][y] == 1:
                if x == 0 or grid[x - 1][y] == 0:
                    total += 1
                if x == len(grid) - 1 or grid[x + 1][y] == 0:
                    total += 1
                if y == len(grid[0]) - 1 or grid[x][y + 1] == 0:
                    total += 1
                if y == 0 or grid[x][y - 1] == 0:
                    total += 1
    return total
