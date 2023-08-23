#!/usr/bin/python3
'''grid perimeter code'''


def island_perimeter(grid):
    '''module to get the perimeter using xor'''
    if len(grid) == 0:
        return
    p = 0
    ax, ay = len(grid), len(grid[0])
    buff_grid = [[0] * (ay + 2) for _ in range(ax + 2)]

    for i in range(ax):
        for j in range(ay):
            buff_grid[i + 1][j + 1] = grid[i][j]

    for i in range(len(buff_grid) - 1):
        for j in range(len(buff_grid[i]) - 1):
            if buff_grid[i][j] ^ buff_grid[i + 1][j]:
                p += 1
            if buff_grid[i][j] ^ buff_grid[i][j + 1]:
                p += 1
    return p
