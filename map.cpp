#include<iostream>
#include<map>
using namespace std;
void showScore(map<string,int> & scores)
{
    cout << endl << "all scores is : " << endl;

for(auto score:scores)
{
    cout << endl  << score.first << "__:" << score.second << endl;

}
}
int main()
{
    map<string, int> scores = {
        {"tareq", 33},
        {"turjo", 23},
        {"a", 55},
        {"b", 99},
        {"c", 100}
    };
    string queryName;
    cout << "enter the query name for find the score : (name)";
    cin >> queryName;
    if(scores.find(queryName) !=scores.end())
    {
        cout << queryName << "score is " << scores[queryName] << endl;
    }
    else{
        cout << queryName << "is not exist on this object";
    }
    // show all user and score
    showScore(scores);
}