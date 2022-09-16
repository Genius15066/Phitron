#include <bits/stdc++.h>
using namespace std;

int solved_week(int arr[]){
    int count=0;
    for(int i=0;i<4;i++){
        if(arr[i]>=10){
            count++;
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../Utilities/input.txt", "r", stdin);
    freopen("../../Utilities/output.txt", "w", stdout);
#endif

    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    cout << solved_week(arr);
    
}
