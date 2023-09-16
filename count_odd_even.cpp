#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of array are: "<<endl;
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }

    int even = 0;
    int odd = 0;
    int rem = 0;
    for(int i =0; i<n; i++)
    {
        if(arr[i]%2 == 0)
        {
            cout<<arr[i]<<" "<<endl;
        }
    }

    for(int i =0; i<n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            cout<<arr[i]<<" "<<endl;
        }
    }

    int count = 0;
    for(int i =0; i<n; i++)
    {
        if(arr[i]%2 == 0)
        {
            even = even+1;
            count++;
        }
        else
        {
            odd = odd + 1;
            count++;
        }
    }

    cout<<"number of even elements are: "<<even<<endl;
    cout<<"number of odd elements are: "<<odd<<endl;

    return 0;
}
