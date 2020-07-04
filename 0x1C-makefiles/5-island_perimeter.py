#!/usr/bin/python3
'''
    Function for determined the perimeter of an island in grid
'''


def island_perimeter(grid):
    '''Function for find the perimeter of an island'''

    perimeter = 0

    for cols in range(len(grid)):
        for cnt2 in range(len(grid[cols])):
            if grid[cols][cnt2] == 1:
                if cols - 1 == -1 or grid[cols - 1][cnt2] == 0:
                    perimeter += 1
                if cnt2 == len(grid[cols]) - 1 or grid[cols][cnt2 + 1] == 0:
                    perimeter += 1
                if cols == len(grid) - 1 or grid[cols + 1][cnt2] == 0:
                    perimeter += 1
                if cnt2 - 1 == -1 or grid[cols][cnt2 - 1] == 0:
                    perimeter += 1
    return perimeter
