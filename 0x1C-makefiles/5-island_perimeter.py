#!/usr/bin/python3
""" Island Perimeter Module """


def island_perimeter(grid):
    """ Get the perimeter of the island described in grid.

    Args:
        grid: list of list of integers:
            0 represents a water zone
            1 represents a land zone

    Returns:
        perimeter of the island in the grid.
    """
    perimeter = 0

    for i, item in enumerate(grid):
        for j, item_in in enumerate(item):
            if item_in == 1:
                perimeter += 4
                # checking after the first row
                if i > 0 and grid[i][j] == grid[i - 1][j]:
                    perimeter -= 2
                # checking after the first column
                if j > 0 and grid[i][j] == grid[i][j - 1]:
                    perimeter -= 2
    return perimeter
