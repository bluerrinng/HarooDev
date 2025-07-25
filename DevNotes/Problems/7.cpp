/*
7.cpp
*/

#include <string>

using namespace std;

bool visited[11][11][4];

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int todir(char dir)
{
    int ret;

    if(dir == 'U')
    {
        ret = 0;
    }
    else if (dir == 'R')
    {
        ret = 1;
    }
    else if (dir == 'D')
    {
        ret = 2;
    }
    else if (dir == 'L')
    {
        ret = 3;
    }

    return ret;
}

bool isNotValid(int x, int y)
{
    return x < 0 || y <0 || x > 10 || y > 10;
}

int opposite_direction(int dir)
{
    return (dir+2) % 4;
}


int solution(string dirs)
{
    int count = 0;
    int x = 5;
    int y = 5;

    for(auto c : dirs)
    {
        int dir = todir(c);
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(isNotValid(nx,ny))
        {
            continue;
        }

        if(visited[y][x][dir] == false)
        {
            visited[y][x][dir] = true;
            visited[ny][nx][opposite_direction(dir)] = true;
            count++;
        }

        x = nx;
        y = ny;
    }

    return count;
}