#include <stdio.h> 
  
// Maze size 
#define N 4 
//  
bool solveUntil(int maze[N][N], int x, int y, int sol[N][N]); 
  
/* function to print solution matrix sol[N][N] */
void printSol(int sol[N][N]) 
{ 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            printf(" %d ", sol[i][j]); 
        printf("\n"); 
    } 
} 
  
/* function to check if x, y is valid index for N*N maze */
bool isSafe(int maze[N][N], int x, int y) 
{ 
    // if (x, y outside maze) return false 
    if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1) 
        return true; 
  
    return false; 
} 

// Solving maze using Backtracking

bool solveMaze(int maze[N][N])
{
   int sol[N][N] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
  
  if (solveUntil(maze,0,0,sol)== false)
  {
    printf("Solution does not exists");
    return false;
  }

  printSol(sol);
  return true;
  
}

// solving maze
bool solveUntil(int maze[N][N], int x, int y, int sol[N][N])
{ 
  //if(x,y is goal) return true
  if (x == N-1 && y==N-1 && maze[x][y]==1)
  { sol[x][y]=1;
    return true; }
  
  //Check if valid
  if (isSafe(maze,x,y) == true)
  {
  sol[x][y] = 1;
   // Move forward in x direction 
   if (solveUntil(maze, x + 1, y, sol) == true) 
         return true; 
  
    /* If moving in x direction doesn't give solution then 
     Move down in y direction  */
   if (solveUntil(maze, x, y + 1, sol) == true) 
      return true; 
  
    /* If none of the above movements work then BACKTRACK:  
     unmark x, y as part of solution path */
    
      sol[x][y] = 0; 
      return false; 
    } 

 return false;
}

int main()
{
  int maze[N][N] = {{1,0,0,0},{1,1,0,1},{0,1,0,0},{1,1,1,1}};
  printf("The Solution Matrix is- \n");
  solveMaze(maze);
  return 0;
  
  }