#include<bits/stdc++.h>

using namespace std;


int main()
{

    const int dem_2=30;
    //int dem_2=30; //two demision arr will not be init to 0 if dem_2 is not const
    double arr[10][dem_2]={0};

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<dem_2;j++)
        cout<<arr[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}