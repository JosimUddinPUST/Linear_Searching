#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ary;
    int i,data,ok=0,n;
    cout<<"Enter an array: ";
    while(cin>>n)
    {
        ary.push_back(n);
        if(getchar()=='\n')
            break;
    }
    cout<<"Enter your desired element: ";
    cin>>data;
    for(auto it=ary.begin(); it<ary.end(); it++)
    {
        if(data==*it)
        {
            ok=1;
            break;
        }
    }
    if(ok==1)
        cout<<"Found the desired element.";
    else
        cout<<"Not found.";
    return 0;
}
