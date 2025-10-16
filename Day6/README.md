2596.Check Knight Tour Configuration
There is a knight on an n x n chessboard. In a valid configuration, the knight starts at the top-left cell of the board and visits every cell on the board exactly once.

You are given an n x n integer matrix grid consisting of distinct integers from the range [0, n * n - 1] where grid[row][col] indicates that the cell (row, col) is the grid[row][col]th cell that the knight visited. The moves are 0-indexed.

Return true if grid represents a valid configuration of the knight's movements or false otherwise.

Note that a valid knight move consists of moving two squares vertically and one square horizontally, or two squares horizontally and one square vertically. The figure below illustrates all the possible eight moves of a knight from some cell.
<img width="389" height="383" alt="image" src="https://github.com/user-attachments/assets/5cd110dd-f67c-45e2-884b-187bb018cafb" />
Example 1:
<img width="314" height="318" alt="image" src="https://github.com/user-attachments/assets/9e0287ee-274e-4b63-acda-96547d71cb8e" />
Input: grid = [[0,11,16,5,20],[17,4,19,10,15],[12,1,8,21,6],[3,18,23,14,9],[24,13,2,7,22]]
Output: true
Explanation: The above diagram represents the grid. It can be shown that it is a valid configuration.
Example 2:
<img width="203" height="196" alt="image" src="https://github.com/user-attachments/assets/a62999b3-77a1-4456-93de-98100ac4937c" />
Input: grid = [[0,3,6],[5,8,1],[2,7,4]]
Output: false
Explanation: The above diagram represents the grid. The 8th move of the knight is not valid considering its position after the 7th move.
Constraints:

n == grid.length == grid[i].length
3 <= n <= 7
0 <= grid[row][col] < n * n
All integers in grid are unique.
