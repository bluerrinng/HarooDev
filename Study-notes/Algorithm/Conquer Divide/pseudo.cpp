#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int dist(pair<int,int>&a, pair<int,int>&b )
{
    int dx = (b.first-a.first);
    int dy = (b.second - a.second);
    return dx*dx + dy*dy;
}

bool compareX(pair<int,int>&a, pair<int,int>&b)
{
    return a.first < b.first;
}

bool compareY(pair<int,int>& a, pair<int,int>& b) {
    return a.second < b.second;
}


int closestPair(vector<pair<int,int>> points)
{
    int n = points.size();

    if(n == 2)
    {
        return dist(points[0], points[1]);
    }

    if(n == 3)
    {
        return min({ dist(points[0], points[1]),
                     dist(points[0], points[2]),
                     dist(points[1], points[2]) });
    }

    int mid = n / 2;

    // 왼쪽 절반
    vector<pair<int,int>> L(points.begin(), points.begin() + mid);
    int dl = closestPair(L);

    // 오른쪽 절반
    vector<pair<int,int>> R(points.begin() + mid, points.end());
    int dr = closestPair(R);

    // 두 쪽 중 최소값
    int d = min(dl, dr);

    int midX = points[mid].first;

    vector<pair<int,int>> strip;

    strip.reserve(n);

    for(auto& p : points)
    {
        int dx = p.first - midX; 
        if( dx*dx < d)
        {
            strip.push_back(p);
        }
    }

    sort(strip.begin(), strip.end(), compareY);

    for(int i = 0; i < strip.size(); i++)
    {
        for(int j = i+1; j < strip.size(); j++)
        {
            int dy = strip[j].second - strip[i].second;

            if(dy * dy >= d)
            {
                break;
            }
            d = min(d, dist(strip[i], strip[j]));
        }
    }

    return d;
}

int main()
{
    vector<pair<int,int>> points = {
        {2, 3},
        {12, 20},
        {20, 20},
        {5, 1},
        {12, 10},
        {3, 4}
    };

    // x좌표 기준 정렬
    sort(points.begin(), points.end(), compareX);

    cout << "Closest distance squared: " << closestPair(points) << endl;
}