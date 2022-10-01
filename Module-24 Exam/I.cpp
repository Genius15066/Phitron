#include <bits/stdc++.h>
using namespace std;

int main()
{
a
    int n;
    cin >> n;
    int l[n + 1], r[n + 1];
    set<int> left, right;
    for (int i = 1; i <= n; i++)
    {
        cin >> l[i] >> r[i];
        if (l[i] == 0)
        {
            left.insert(i);
        }
        if (r[i] == 0)
        {
            right.insert(i);
        }
    }
    int count = 0, frequency[n + 1];
    bool visited[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == false)
        {
            int current = i;
            ++count;
            while (current != 0)
            {
                visited[current] = true;
                frequency[current] = count;
                current = r[current];
            }
            current = i;
            while (current != 0)
            {
                visited[current] = true;
                frequency[current] = count;
                current = l[current];
            }
        }
    }

    int node = 1;
    while (right.size() > 1)
    {
        if (r[node] == 0)
        {
            auto it = left.begin();
            if (frequency[*it] != frequency[node])
            {
                r[node] = *it;
                l[*it] = node;
                left.erase(it);
                right.erase(node);
            }
            else
            {
                left.erase(it);
                it = left.begin();
                r[node] = *it;
                l[*it] = node;
                left.erase(it);
                right.erase(node);
            }
        }
        frequency[r[node]] = frequency[node];
        node = r[node];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << l[i] << " " << r[i] << endl;
    }
}