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

int m[410][410];
int x[50], y[50], r[50];

int dist(int x1, int y1, int x2, int y2){
	return abs(x1-x2) + abs(y1-y2);
}

int main(){
	int ncases;
	scanf("%d",&ncases);
	while(ncases--){
		memset(m,0,sizeof(m));
		int l;
		scanf("%d",&l);
		REP(i,l) scanf("%d",&x[i]);
		scanf("%d",&l);
		REP(i,l) scanf("%d",&y[i]);
		scanf("%d",&l);
		REP(i,l) scanf("%d",&r[i]);
		REP(k,l){
			for(int i=0; i<410; i++){
				for(int j=0; j<410; j++){
					if(dist(i,j,x[k]+200,y[k]+200)<=r[k]) m[i][j]++;
				}
			}
		}
		int ans=0;
		for(int i=0; i<410; i++){
			for(int j=0; j<410; j++){
				if(m[i][j]==l) ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}


