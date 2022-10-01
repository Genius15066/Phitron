#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maximum=*max_element(a,a+n);
    int frequency[maximum+1]={0};
    for(int i=0;i<n;i++)
    {
        frequency[a[i]]++;
    }
    for(int i=1;i<=maximum;i++)
    {
        if(frequency[i]>0)
        {
           cout<<i<<"=>"<<frequency[i]<<endl;
        }
       
    }
}
