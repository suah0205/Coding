#include <bits/stdc++.h>
using namespace std;
#define fio			std::ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll 			long long
#define vi			vector<int>
#define vvi			vector< vi >
#define vll 		vector< long long >
#define vvll 		vector< vll >
#define vd 			vector< double >
#define vs			vector< string > 
#define ford(i,x,a) for(int i=x;i<a;++i)
#define fore(i,x,a) for(int i=x;i>=a;--i)
#define pii 		pair<int,int>
#define pll 		pair<ll,ll>
#define mp 			make_pair
#define ff 			first
#define ss 			second
#define all(a) 		a.begin(), a.end()
#define pb 			push_back 
#define gi(n) 		scanf("%d",&n)
#define gll(n) 		scanf("%lld",&n)
#define gstr(n) 	scanf("%s",n)
const ll mod = 1e9+7;
const ll N = 1e5;
const ll MAX = 1e18;
int main()
{
	std::ios_base::sync_with_stdio(false);
	int ip;
	string s;
	cin>>ip>>s;
	int row,col;
	// If input is 1 prints the shape in form of square
	if(ip==1)
	{
			row=s.length();
			col=row;
		char matrix[row][col];
		ford(i,0,row)
		{
			ford(j,0,col)
			{
				matrix[i][j]=' ';
			}
		}
		ford(i,0,row)
		{
			matrix[0][i]=s[i];
		}
		ford(i,0,row)
		{
			matrix[i][0]=s[i];
		}
		ford(i,0,row)
		{
			matrix[row-1][i]=s[s.length()-i-1];
		}
		ford(i,0,row)
		{
			matrix[i][col-1]=s[s.length()-i-1];
		}
		ford(i,0,row)
		{
			ford(j,0,col)
			{
				cout<<matrix[i][j];
			}
			cout<<endl;
		}
	}
	// if input is 2 print shape in a rhombus
	if(ip==2)
	{
		row=2*s.length()-1;
		col=2*s.length()-1;
		char matrix[row][col];
		ford(i,0,row)
		{
			ford(j,0,col)
			{
				matrix[i][j]=' ';
			}
		}
		for(int i=s.length()-1,j=0;i>=0&&j<s.length();i--,j++)
		{
				matrix[i][j]=s[j];
		}
		for(int i=s.length()-1,j=0;i<row&&j<s.length();i++,j++)
		{
			
				matrix[i][j]=s[j];
		}
		for(int i=0,j=s.length()-1;i<s.length()&&j<col;i++,j++)
		{
			
				matrix[i][j]=s[s.length()-i-1];
			
		}
		for(int i=row-1,j=s.length()-1,k=s.length()-1;i>=s.length()-1&&j<col&&k>=0;i--,j++,k--)
		{
		
				matrix[i][j]=s[k];
		}
		ford(i,0,row)
		{
			ford(j,0,col)
			{
				cout<<matrix[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}