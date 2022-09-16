#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../Utilities/input.txt", "r", stdin);
    freopen("../../Utilities/output.txt", "w", stdout);
#endif

    int a, b, c;
    cin >> a >> b >> c;
    int count=1;
    if(b!=a){
        count++;
    }
    if(c!=b && c!=a){
        count++;
    }
    cout<<count<<endl;
}
