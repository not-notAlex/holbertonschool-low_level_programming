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
                total += 4
                if grid[x - 1][y] == 1:
                    total -= 1
                if grid[x + 1][y] == 1:
                    total -= 1
                if grid[x][y + 1] == 1:
                    total -= 1
                if grid[x][y - 1] == 1:
                    total -= 1
    return total
