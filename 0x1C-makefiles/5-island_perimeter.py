#!/usr/bin/python3
"""
This module defines the island perimeter function
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.
    """

    perimeter = 0

    if not grid or not grid[0]:
        return perimeter

    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Check top
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # Check bottom
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                # Check left
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # Check right
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
