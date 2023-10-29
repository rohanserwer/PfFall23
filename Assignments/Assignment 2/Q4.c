#include <stdio.h>

#define N 5
#define M 5

char maze[N][M] = {
    {'S', 'O', 'O', 'W', 'W'},
    {'O', 'W', 'O', 'O', 'W'},
    {'W', 'O', 'O', 'W', 'O'},
    {'W', 'W', 'O', 'W', 'O'},
    {'W', 'W', 'O', 'E', 'W'}
};

int visited[N][M] = {0};

int isSafe(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < M && maze[x][y] != 'W' && !visited[x][y]);
}

int findPath(int x, int y) {
    if (maze[x][y] == 'E') {
        printf("%d,%d ", x, y);
        return 1;
    }

    if (isSafe(x, y)) {
        visited[x][y] = 1;
        if (findPath(x + 1, y) || findPath(x, y + 1)) {
            printf("%d,%d ", x, y);
            return 1;
        }
        visited[x][y] = 0;
    }

    return 0;
}

int main() {
    printf("Output Maze after traversal:\n");
    findPath(0, 0);
    return 0;
}

