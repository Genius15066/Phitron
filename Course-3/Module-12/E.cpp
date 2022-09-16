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
    int test;
    cin >> test;
    for(int i=0;i<test;i++)
    {
        int n,q;
        cin >> n >> q;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout<<"Case "<<i+1<<":\n";

        while(q--){
            int k;
            cin>>k;
            if(k==1){
               int i;
               cin>>i;
               cout<<arr[i]<<endl;
                arr[i]=0;
            }
            if(k==2){
                int i,v;
                cin>>i>>v;
                arr[i]+=v;
            }
            if(k==3){
                int l,r;
                cin>>l>>r;
                int sum=0;
                for(int i=l;i<=r;i++){
                    sum+=arr[i];
                }
                cout<<sum<<endl;
            }
        }

    }
}
