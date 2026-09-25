382. Find Peak Element - II
POTD
Given a 0-indexed n x m matrix mat where no two adjacent cells are equal, find any peak element mat[i][j] and return the array [i, j]. A peak element in a 2D grid is an element that is strictly greater than all of its adjacent neighbours to the left, right, top, and bottom.

Assume that the entire matrix is surrounded by an outer perimeter with the value -1 in each cell.

Note: As there can be many peak values, 1 is given as output if the returned index is a peak number, otherwise 0.

Example 1:
Input: mat=[[10, 20, 15], [21, 30, 14], [7, 16, 32]]

Output: [1, 1]

Explanation: The value at index [1, 1] is 30, which is a peak element because all its neighbours are smaller or equal to it. Similarly, {2, 2} can also be picked as a peak.

Example 2:
Input: mat=[[10, 7], [11, 17]]

Output : [1, 1]

Explanation: The value at index [1, 1] is 17, which is the only peak element because all its neighbours are smaller or equal to it.

Now Your Turn!
Pick the correct output for the given input
Input: mat=[[1, 2, 3], [4, 5, 6], [7, 8, 9]]


[1, 2]

[1, 1]

[2, 2]

[2, 1]
Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

Constraints:
  n == mat.length
  m == mat[i].length
  1 <= m, n <= 500
  1 <= mat[i][j] <= 105
  No two adjacent cells are equal