#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=2e5;
const int nmn=0.0000001;
int n,k;
int a[nmx];
int l[nmx],r[nmx];

int bs(int a[],int l,int r){
    int mid=(l+r)/2;
    while(r-l<=nmn){
        if(check(a,mid) == 1)
            r=mid;
        else
            l=mid;
        mid=(l+r)/2;
    }    
    return l;
}

int check(int a[], int x){
    
}
void solve(){
    cin >> n >> k;
    for(int i=0;i<n;++i)
        cin >> a[i];
    
    bs(1,1e9);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    
def find_result(arr, l, r): 
    for _ in range(100):
        mid = (l + r) / 2
        if check(arr, mid) == True: 
            r = mid
        else:         
            l = mid
    return l 
    
def check(a, x):
    arr = a[:]
    n = len(arr)
    for i in range(0, len(arr)):
        arr[i] -= x
    R = [0] * n
    R[-1] = arr[-1] 
    tmp = 0
    for i in range(n - 2, -1, -1):
        tmp += arr[i]
        R[i] = min(R[i + 1], tmp)
    
    tmp = arr[0]
    for i in range(1, n - 2):
        tmp += arr[i]
        if tmp + R[i + 2] <= eps:
            return True
    return False

n = int(input()) 
a = list(map(int, input().split())) 
eps = 0.000001
 
print("{:.3f}".format(find_result(a, min(a), 1000)))