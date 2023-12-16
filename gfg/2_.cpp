#include <bits/stdc++.h>
using namespace std;

int no_of_click(map<int, vector<int>> &mp, int start, int end)
{
    queue<pair<int, int>> queue;
    unordered_set<int> visited;
    queue.push(make_pair(start, 0));

    while (!queue.empty())
    {
        int position = queue.front().first;
        int click = queue.front().second;
        queue.pop();

        if (position == end)
        {
            return click;
        }

        if (visited.find(position) == visited.end())
        {
            visited.insert(position);
            vector<int> &neighbours = mp[position];
            for (int i=0;i<neighbours.size();i++)
            {
                queue.push(make_pair(neighbours[i], click + 1));
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    map<int, vector<int> > mp;
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        vector<int> v;
        for (int j = 0; j < l; j++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }
        mp.insert(make_pair(i + 1, v));
    }
    int start, end;
    cin >> start >> end;
    int click = 0;
    click = no_of_click(mp, start, end);
    cout << click;
    return 0;
}