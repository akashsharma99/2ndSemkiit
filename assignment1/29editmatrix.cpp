#include<iostream>
using namespace std;
void zeroDiagonal(int* *arr,int x)
{
    if(x<=0)
    {
          arr[x][x]=0;
          return;
    }
    arr[x-1][x]=1;
    arr[x][x-1]=-1;
    arr[x][x]=0;
    zeroDiagonal(arr,x-1);
}
int main()
{
    int n,i,j;
    cout<<"Enter side length of square matrix\n";
    cin>>n;
    int** a;
    a=(int**)calloc(n,sizeof(int*));
    for(i=0;i<n;i++)
    {
        a[i]=(int*)calloc(n,sizeof(int));
    }
    cout<<"Enter elements of the array\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The given matrix is...\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<'\t';
        }
        cout<<'\n';
    }

    zeroDiagonal(a,n-1);
    cout<<"The matrix after manipulation is...\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<'\t';
        }
        cout<<"\n";
    }
    return 0;
}
