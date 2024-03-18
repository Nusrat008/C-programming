// CPP program to find duplicate word in a
// vector<string>
#include<bits/stdc++.h>
using namespace std;
 
void printDuplicates(vector<string> words)
{
    unordered_set<string> s;
 
    bool dupFound = false;
    for (int i = 1; i<words.size(); i++)
    {
        if (s.find(words[i]) != s.end())
        {
            cout << words[i] << endl;
            dupFound = true;
        }
        else
            s.insert(words[i]);
    }
 
    if (dupFound == false)
        cout << "No Duplicate words" << endl;
}
 
// Driver code
int main()
{
    vector<string>words{ "welcome", "to", "geeks",
                                  "for", "geeks" };
    printDuplicates(words);
    return 0;
}