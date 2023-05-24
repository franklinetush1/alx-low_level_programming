#!/usr/bin/python3
""" Contains the island_perimeter function """


def island_perimeter(grid):
    """ Returns the perimeter of island described in grid """
    perimeter = 0
    for a in range(len(grid)):
        for b in range(len(grid[0])):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (b + 1) == len(grid[0]) or grid[a][b + 1] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (a + 1) == len(grid) or grid[a + 1][b] == 0:
                    perimeter += 1                
                

    return(perimeter) 
