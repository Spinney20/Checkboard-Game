# Gigel and the Checkboard

## Overview
This C program, simulates the movement of Gigel within a checkboard represented as a 2D matrix. Gigel starts from the top-left corner of the matrix and moves according to the values in each cell until he traveled the whole checkboard or if it goes in a place that he has been before.

The program calculates the distance traveled by Gigel and prints it, along with the final coordinates in a specific format.

## Implementation

- **Matrix Input:** The program takes as input a square matrix of integers.
- **Matrix Movement:** Gigel moves within the matrix based on the values in each cell until reaching a cell with the value 0. Everytime Gigel reaches a spot in the matrix, I update its value to 0, as if Gigel goes again in that spot the game ends.
- **Distance Calculation:** The program calculates the total distance traveled by Gigel during the movement.
- **Coordinate Conversion:** The final coordinates are converted to a specific format: X as in a checkboard game, and Y with the excel columns format.
