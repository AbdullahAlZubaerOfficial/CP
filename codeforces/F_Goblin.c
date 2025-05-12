#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_N 200005

int n, t;
char s[MAX_N];
int grid[MAX_N][MAX_N];
int visited[MAX_N][MAX_N];

// Directions for 4-connected neighbors (up, down, left, right)
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

// Function to perform BFS and calculate the size of the connected component
int bfs(int x, int y) {
    int queue[MAX_N * MAX_N][2]; // Queue for BFS
    int front = 0, rear = 0;
    int size = 0;
    
    queue[rear][0] = x;
    queue[rear][1] = y;
    rear++;
    visited[x][y] = 1;
    
    while (front < rear) {
        int cx = queue[front][0];
        int cy = queue[front][1];
        front++;
        size++;
        
        // Check all 4 possible directions
        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= n && !visited[nx][ny] && grid[nx][ny] == 0) {
                visited[nx][ny] = 1;
                queue[rear][0] = nx;
                queue[rear][1] = ny;
                rear++;
            }
        }
    }
    
    return size;
}

int main() {
    // Read number of test cases
    scanf("%d", &t);
    
    while (t--) {
        // Read the size of the binary string and the string itself
        scanf("%d", &n);
        scanf("%s", s);
        
        // Initialize the grid
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                grid[i][j] = (s[j - 1] == '1') ? 1 : 0; // Initialize to s
                if (i == j) {
                    grid[i][j] = 1 - grid[i][j]; // Flip the i-th character
                }
            }
        }
        
        // Reset the visited array
        memset(visited, 0, sizeof(visited));
        
        int max_size = 0;
        
        // Perform BFS to find the largest connected component of zeros
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (!visited[i][j] && grid[i][j] == 0) {
                    max_size = (max_size > bfs(i, j)) ? max_size : bfs(i, j);
                }
            }
        }
        
        // Output the result for the current test case
        printf("%d\n", max_size);
    }
    
    return 0;
}
