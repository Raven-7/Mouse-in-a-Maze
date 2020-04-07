# Mouse-in-a-Maze
A simple Program of a Mouse in a Maze using Backtracking.

We have a maze of size NxN.
The source is [0][0] whereas destination is [N-1][N-1].
In the maze matrix, 0 means the block is a dead end and 1 means the block can be used in the path from source to destination. 
##### This is a simple version of the typical Maze problem. 

Gray Blocks are Dead End (value=0)<br/>
![Image description](https://github.com/Raven-7/Mouse-in-a-Maze/blob/master/maze_problem.png)

Following is matrix representation-<br/>
              
                {1, 0, 0, 0}
                {1, 1, 0, 1}
                {0, 1, 0, 0}
                {1, 1, 1, 1}

This is a maze with highlighted solution path-<br/>
![Image description](https://github.com/Raven-7/Mouse-in-a-Maze/blob/master/maze_sol.png)<br/>

Following is the solution matrix (output of program) for the above input matrx.<br/>

                {1, 0, 0, 0}
                {1, 1, 0, 0}
                {0, 1, 0, 0}
                {0, 1, 1, 1}
 All enteries in solution path are marked as 1.

