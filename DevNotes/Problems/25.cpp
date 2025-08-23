#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

//다른 장르끼리 비교해서 어떤 장르가 더 많이 재생되었는지 확인용 정렬
bool compareGenre(const pair<string,int>&a , const pair<string,int> &b)
{
    return a.second > b.second;
}


//같은 장르내에서 어떤 인덱스가 더 많이 재생되었는지 확인용
bool compareSong(const pair<int,int>&a, const pair<int,int>&b)
{
    if(a.second == b.second)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second > b.second;
    }
}

vector<int> solution(vector<string>genres, vector<int> plays)
{
    vector<int> result;

    unordered_map<string, vector<pair<int,int>>> genre_map;
    unordered_map<string, int> song_compare_map;

    for(int i = 0; i< genres.size();i++)
    {
        genre_map[genres[i]].push_back({i,plays[i]});;
        song_compare_map[genres[i]] += plays[i];
    }

    vector<pair<string,int>> sortedGenres (song_compare_map.begin(), song_compare_map.end());

    sort(sortedGenres.begin(),sortedGenres.end(),compareGenre);

    for(auto& val : sortedGenres)
    {
        auto& songs = genre_map[val.first];
        sort(songs.begin(),songs.end(),compareSong);


        for(int i =0 ; i< min(2,(int)songs.size());i++)
        {
            result.push_back(songs[i].first);
        }
    }

    return result;
}



