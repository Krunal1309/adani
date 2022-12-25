#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[],int n)
{
    for(int i=0;i<n;)
    {
        int count=1;
        for(int j=i+1;arr[i]==arr[j];j++)
        {
            count++;
        }
        cout<<"frequency of "<<arr[i]<<" is "<<count<<endl;
        i=i+count;
    }
}
int main()
{
    int n;
    cout<<"number of elemens in array\n";
    cin>>n;
    int numbers[n];
    cout<<"enter elements of array\n";
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    frequency(numbers,n);

    return 0;
}
