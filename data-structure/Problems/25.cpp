/*
25.cpp
스트리밍 사이트에서 장르별로 가장 많이 재생된 노래를 2개씩 모아 베스트 앨범을 출시하려 한다. 
노래는 고유 번호로 구분하며, 노래 수록 기준은 다음과 같다:
- 속한 노래가 많이 재생된 장르를 먼저 수록
- 장르 내에서 많이 재생된 노래를 먼저 수록
- 장르 내에서 재생 횟수가 같은 노래 중에서는 고유 번호가 낮은 노래를 먼저 수록 

그래서 고유 번호 순서대로 반환하는 solution() 함수 
*/

#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


//다른 장르끼리 비교할때 더 많이 재생된 순으로 정렬
bool sortTotalplays(const pair<string,int>& a, const pair<string, int>& b)
{
    return a.second > b.second;
}

//같은 장르내에서 더 많이 재생된 음악의 고유 번호 순으로 정렬
bool sortSameType(const pair<int,int>& a, const pair<int,int>&b)
{
    if(a.second == b.second)
    {
        return a.first < b.second;
    }
    else
    {
        return a.second > b.second;
    }
}

vector<int> solution(vector<string> genres, vector<int> plays)
{
    vector<int> result;
    unordered_map<string, vector<pair<int,int>>> gpair;
    unordered_map<string,int> totalNum;

    //각각의 장르의 총 재생횟수를 구해서 맵으로 만들기
    for(int i = 0; i<genres.size();i++)
    {
        totalNum[genres[i]] += plays[i];
        gpair[genres[i]].push_back({i,plays[i]});
    }

    vector<pair<string,int>> sortg (totalNum.begin(),totalNum.end());
    sort(sortg.begin(),sortg.end(),sortTotalplays);

    for(auto& v: sortg)
    {
        auto& genreVector = gpair[v.first];
        sort(genreVector.begin(),genreVector.end(),sortSameType);

        for(int i =0 ; i< min(2,(int)genreVector.size());i++)
        {
            result.push_back(genreVector[i].first);
        }
    }

    return result;
}

