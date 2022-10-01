#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int income[n], outcome[n];
       
        for (int i = 0; i < n; i++)
        {
            cin >> income[i];
           
        }
        for (int i = 0; i < n; i++)
        {
            cin >> outcome[i];
        }
        int total_income[n], total_outcome[n];
        total_income[0] = income[0];
        total_outcome[0] = outcome[0];
        for (int i = 1; i < n; i++)
        {
            total_income[i] = total_income[i - 1] + income[i];
            total_outcome[i] = total_outcome[i - 1] + outcome[i];
        }
        int query;
        cin >> query;
        while(query--){
            int x;
            cin>>x;
            int status=total_income[x]-total_outcome[x];
            status>=0?cout<<1<<" ":cout<<0<<" ";
        } 
        cout<<endl;  
    }
}
