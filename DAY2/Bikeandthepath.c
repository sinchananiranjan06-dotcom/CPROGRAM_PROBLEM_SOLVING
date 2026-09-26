#include <stdio.h>
#define N 4

int findingpath(int maze[N][N], int x, int y, char path[], int index) {
    if (x == N - 1 && y == N - 1) {
        path[index] = '\0';
        printf("%s\n", path);
        return 1;
    }
    if (x < 0 || y < 0 || x >= N || y >= N || maze[x][y] == 0) {
        return 0;
    }

    maze[x][y] = 0;
    path[index] = 'D';
    if (findingpath(maze, x + 1, y, path, index + 1)) {
        return 1;
    }

    path[index] = 'R';
    if (findingpath(maze, x, y + 1, path, index + 1)) {
        return 1;
    }

    maze[x][y] = 1;
    return 0;
}

int main() {
    int maze[N][N] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    char path[N * N];
    findingpath(maze, 0, 0, path, 0);
    return 0;
}