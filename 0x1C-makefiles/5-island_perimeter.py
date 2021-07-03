#!/usr/bin/python3
"""island Perimeter
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 0:
                continue
            perimeter += 4
            if i > 0:
                perimeter = perimeter - grid[i - 1][j]
            if i < len(grid) - 1:
                perimeter = perimeter - grid[i + 1][j]
            if j > 0:
                perimeter = perimeter - grid[i][j - 1]
            if j < len(grid[0]) - 1:
                perimeter = perimeter - grid[i][j + 1]
    return perimeter
