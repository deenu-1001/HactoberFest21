/*
Discrepancies in the Voters List -------  Codechef problem in c++
Author : Keshav Prajapati (deenu-1001)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n1, n2, n3, n;
    cin >> n1 >> n2 >> n3;
    n = n1 + n2 + n3;
    vector<int> id;
    vector<int> counter;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        id.push_back(input);
    }
    sort(id.begin(), id.end());
    for (int i = 0; i < id.size();)
    {
        if (id[i] == id[i + 1])
        {
            counter.push_back(id[i]);
            i += 2;
        }

        else if (id[i] == id[i + 1] && id[i + 1] == id[i + 2])
        {
            counter.push_back(id[i]);
            i += 3;
        }
        else
        {
            i++;
        }
    }
    cout << counter.size() << "\n";
    for (int j = 0; j < counter.size(); j++)
    {
        cout << counter[j] << "\n";
    }
}