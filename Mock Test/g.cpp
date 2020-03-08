#include <bits/stdc++.h>
using namespace std;

#define xx         first
#define yy         second
#define mp         make_pair
#define set0(ar)   memset(ar,0,sizeof ar)

const int MX = 111111;
const int SZ = 330;

pair < int, int > query[MX], ascEnd[MX], descStart[MX];
int lft[401][MX];
int res[MX], perm[MX], prevStart[MX], on[MX];


void check(int x, int n, int m){
    int l = 0, r = 0, bucketId = x / SZ;
    for(int i = x; i >= prevStart[x]; i--){
        while(l < m)
        {
            if(descStart[l].xx <= perm[i]) break;
            if(lft[ bucketId ][ descStart[l].yy ] == -1)
                lft[ bucketId ][ descStart[l].yy ] = i;
            l++;
        }

        while(r < m){
            if(ascEnd[r].xx >= perm[i]) break;
            if(lft[ bucketId ][ ascEnd[r].yy ] == -1)
                lft[ bucketId ][ ascEnd[r].yy ] = i;
            r++;
        }
    }
    for(int i = 0; i < m; i++){
        if(lft[bucketId][i] == -1 && bucketId != 0)
            lft[bucketId][i] = lft[bucketId-1][i];
        on[i] = n;
    }
    l = r = 0;
    int last = x;
    for(int i = x+1; i < n; i++){
        if(prevStart[i] != prevStart[x+1]) break;
        last = i;
        while(l < m){
            if(descStart[l].xx <= perm[i]) break;
            if(on[ descStart[l].yy ] == n)
                on[ descStart[l].yy ] = i-1;
            l++;
        }

        while(r < m){
            if(ascEnd[r].xx >= perm[i]) break;
            if(on[ ascEnd[r].yy ] == n)
                on[ ascEnd[r].yy ] = i-1;
            r++;
        }
    }
    for(int i = 0; i < m; i++){
        if(on[i] == n) on[i] = last;
        res[i] = max(res[i], on[i] - lft[bucketId][i]);
    }
}

set < int > S;

int main() {
//    freopen("input.in", "r", stdin);
//    freopen("output.out", "w", stdout);
//    ios_base::sync_with_stdio(0); cin.tie(0);
    int T; cin >> T;
    assert(1 <= T && T <= 5);
    for(int ts = 1; ts <= T; ts++){
        memset(lft, -1, sizeof lft);
        set0(res);

        int n, m; cin >> n >> m;
        assert(1 <= n && n <= 100000);
        assert(1 <= m && m <= 100000);
        S.clear();
        for(int i = 0; i < n; i++) {
            scanf("%d", &perm[i]);
            assert(1 <= perm[i] && perm[i] <= n);
            S.insert(perm[i]);
        }
        assert(S.size() == n);
        for(int i = 0; i < m; i++){
            scanf("%d %d", &query[i].xx, &query[i].yy);
            assert(1 <= query[i].xx && query[i].xx <= query[i].yy && query[i].yy <= n);
            ascEnd[i]    = make_pair(query[i].yy, i);
            descStart[i] = make_pair(query[i].xx, i);
        }

        sort   (ascEnd,    ascEnd    + m);
        sort   (descStart, descStart + m);
        reverse(descStart, descStart + m);

        for(int i = 0; i < n; i++){
            if(i % SZ == 0){
                prevStart[i] = i;
            } else {
                prevStart[i] = prevStart[i-1];
            }
        }
        for(int i = 0; i < n; i++){
            if(i == n-1 || ( i % SZ == (SZ - 1) ) ){
                check(i, n, m);
            }
        }

        memset(lft, -1, sizeof lft);
        for(int i = 0; i < n; i++){
            int mxVal = perm[i], mnVal = perm[i];
            for(int j = i; j >= prevStart[i]; j--){
                mxVal = max(mxVal, perm[j]);
                mnVal = min(mnVal, perm[j]);
//                cout << i << " " << j << " " << mxVal << " " << mnVal << endl;
                lft[i-j+1][mxVal] = max(lft[i-j+1][mxVal], mnVal);
            }
        }

        for(int i = 1; i <= SZ; i++){
            set0(on);
            int k = 0;
            for(int j = 0; j < m; j++){
                while(k <= ascEnd[j].xx){
                    for(int l = lft[i][k]; l >= 0; l--){
                        if(on[l]) break;
                        on[l] = 1;
                    }
                    k++;
                }
                if( on[ query[ ascEnd[j].yy ].xx ] )
                    res[ ascEnd[j].yy ] = max(res[ ascEnd[j].yy ], i);
            }
        }

        cout << "Case " << ts << ":" << endl;
        for(int i = 0; i < m; i++) printf("%d\n", res[i]);

    }
}
