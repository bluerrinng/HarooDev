#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words)
{
    vector<int> answers(2,0);
    unordered_set<string> usedWords;

    usedWords.insert(words[0]);

    for(int i = 1; i <words.size();i++)
    {
        if(!usedWords.insert(words[i]).second||words[i].front() != words[i-1].back())
        {
            answers[0] = i % n + 1;
            answers[1] = i / n + 1; 

            return answers;
        }
    }

    return answers;
}