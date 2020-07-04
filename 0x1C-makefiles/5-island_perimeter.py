#!/bin/usr/python3
"""
    [Function for determined the perimeter of an island in grid]
"""


def island_perimeter(grid):
    """[Island_perimeter]

    Args:
        grid ([Matrix]): [matrix of n size]

    Returns:
        [int]: [plus of the sides multiply x 2]
    """

    total_p = 0

    rows = len(grid)
    if rows:
        cols = len(grid[0])
    else:
        cols = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if (i - 1) == -1 or grid[i - 1][j] == 0:
                    total_p += 1
                if (i + 1) == rows or grid[i + 1][j] == 0:
                    total_p += 1
                if (j - 1) == -1 or grid[i][j - 1] == 0:
                    total_p += 1
                if (j + 1) == cols or grid[i][j + 1] == 0:
                    total_p += 1
    return total_p
