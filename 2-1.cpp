#include<iostream>
using namespace std;
int main()
{
    int a[170]={0,0,0,0,1,4,1,4,7,1,4,7,10,13,2,5,8,11,14,17,20,2,5,8,11,14,17,20,23,26,29,1,4,7,10,13,16,
                19,22,25,28,31,34,37,40,43,46,2,5,8,11,14,17,20,23,26,29,32,35,38,41,44,47,50,53,56,
                59,62,65,68,1,4,7,10,13,16,19,22,25,28,31,34,37,40,43,46,49,52,55,58,61,64,67,70,73,
                76,79,82,85,88,91,94,97,100,103,1,4,7,10,13,16,19,22,25,28,31,34,37,40,43,46,49,52,55,
                58,61,64,67,70,73,76,79,82,85,88,91,94,97,100,103,106,109,112,115,118,121,124,127,130,133,150,};//���
    int t;
    cin>>t;
    if(t<=3) cout<<t<<" error"<<endl;
    else cout<<a[t]<<endl;
    return 0;
}
