#!/usr/bin/python3

def eval_grid(grid, i, j):
    """Evaluate the four side
    Args:
        grid (list): list of list
        i (int): x position
        j (int): y position

    Returns:
        int: perimeter for cell in grid
    """
    up = i - 1
    down = i + 1
    left = j - 1
    right = j + 1
    suma = grid[i][j]

    if suma == 1:
        suma = 4
        if up >= 0:
            suma -= grid[up][j]
        if down < len(grid):
            suma -= grid[down][j]
        if left >= 0:
            suma -= grid[i][left]
        if right < len(grid[i]):
            suma -= grid[i][right]
    return suma


def island_perimeter(grid):
    """Cal perimeter

    Args:
        grid (list): list of list

    Returns:
        str: legenth of perimeter island
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            perimeter += eval_grid(grid, i, j)

    return perimeter.__str__()
