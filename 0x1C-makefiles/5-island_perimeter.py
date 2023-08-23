#!/usr/bin/python3
'''grid perimeter code'''


def island_perimeter(grid):
    '''module to get the perimeter using xor'''
    if len(grid) == 0:
        return
    p = 0
    for i in range(len(grid) - 1):
        for j in range(len(grid[i]) - 1):
        #     print(grid[i][j])
            if grid[i][j] ^ grid[i + 1][j]:
                p += 1
            if grid[i][j] ^ grid[i][j + 1]:
                p += 1
    return p
