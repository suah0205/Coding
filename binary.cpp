#include <bits/stdc++.h>
using namespace std;
int main()
{
	int A[1000],n,B;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> A[i];
	cin >> B;

	int low=0;int high=n-1;int result=-1;
    while(low<=high)
    {
       int mid=high+low/2;
        if(A[mid]<=B )
        {
            result=mid;
            low=mid+1;
        }
        else if(A[mid]>B)
        {
            high=mid-1;
        }
    }
    cout <<result <<"\n";
    return 0;
}
