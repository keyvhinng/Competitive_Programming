#include <algorithm>
#include <bitset>
#include <deque>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

#define fst first
#define snd second
#define all(x) (x).begin(), (x).end()
#define clr(a, v) memset(a, v, sizeof(a))
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x.size())
#define REPN(i,s,n) for(int i=s;i<(int)(n);i++)
#define REP(i,n) REPN(i,0,n)
#define REPIT(i,x) for( typeof x.begin()  i=x.begin(); i!=x.end(); i++ )
#define trace(x)    cerr << #x << ": " << x << endl;
#define trace2(x, y) cerr << #x << ": " << x << " | " << #y << ": " << y << endl;

using namespace std;

typedef long long int64;
typedef vector <int> vi;
typedef pair <int,int> ii;
typedef vector <string> vs;
typedef vector <ii> vii;

const int INF = 2e9+9;

int main(){
	int n, hh, mm;
	map<int,int> m;
	scanf("%d",&n);
	REP(i,n){
		scanf("%d%d",&hh,&mm);
		if(m.count(hh*60+mm)){
			m[hh*60+mm] = m[hh*60+mm]+1;
			//printf("exist %d %d\n",hh,mm);
		}
		else
			m[hh*60+mm]=1;
	}
	map<int,int>::iterator it;
	int ans = -1;
	for(it=m.begin(); it!=m.end(); it++){
		ans = max(ans,(*it).second);
	}
	printf("%d\n",ans);
	return 0;
}


