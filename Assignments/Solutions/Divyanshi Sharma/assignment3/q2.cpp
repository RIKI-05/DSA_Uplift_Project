#include <iostream>

using namespace std;

int main()
{   int m, n;
cin>> m>> n;
int a[m][n];
for (int i=0; i<m;i++)
{
    for(int j = 0 ; j<n;j++)
    {
        cin>> a[i][j];
    }

}
for (int i=0; i<m;i++)
{
    for(int j = 0 ; j<n/2;j++)
    {   int temp = a[i][j];
       a[i][j]= a[i][n-j-1];
       a[i][n-j-1]= temp;
    }

}
for (int i=0; i<m;i++)
{
    for(int j = 0 ; j<n;j++)
    {
        cout<<  a[i][j];
    }
 cout << endl;
}



    return 0;
}
