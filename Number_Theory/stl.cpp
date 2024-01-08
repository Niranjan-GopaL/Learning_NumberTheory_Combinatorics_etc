#include <bits/stdc++.h>
using namespace std;

#define ll             long long
#define fi(a,b)        for(ll i=a; i<=b; i++)
#define fj(a,b)        for(ll j=a; j<=b; j++)
#define pb             push_back


// global stuff will be initialized fine
ll x,y,z;
ll n,m,k,q;
ll u,v;
const ll arr_template_size = 1e6;

// global int   arrays are initialized to 0
ll a[arr_template_size];
ll b[arr_template_size];
ll c[arr_template_size];

string s,t;
ll ans;


vector<ll> edges[arr_template_size];
bool vis[arr_template_size];


int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    ll abc[] = {1,2,3,4,5,6,7,8,9,10};
    vector<ll> vec = {1,2,3,4,5,6,7,8,9,10};

    ll n; cin >> n;
    vector<ll> v(n,(ll)2);
    v.clear(); // resets size to 0

    vector<ll>  v__[10]; // array of 10 vectors, useful in adjaceny list



    // AWESOME USECASE := print even and odd numbers after sorting an unsorted array
    vector<ll> even,odd;ll x;
    while(n--){
        if(cin >> x && x%2)
            odd.pb(x);
        else 
            even.pb(x);
    }

    ll a[10];
    // pointer to first elem , pointer to last + 1 elem
    sort(a,a+10);  


    // similar to pointer. they are iterators
    // they also point to a non existant element
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());


    ll n;cin >> n;
    vector<pair<ll,string>> v_p(n);
    for (ll i = 0; i < n; i++)
        cin >> v_p[i].first >> v_p[i].second;
    
    sort(v_p.begin(),v_p.end());

    for (ll i = 0; i < n; i++)
        cout << v_p[i].first << " " << v_p[i].second << endl;



    // Set

    // To store and delete UNIQUE stuff in O(logN) 
    // THE STUFF WILL BE IN INSERTED IN SORTED ORDER
    // Under the hood it is actually Red and Balck Tree

    // If you erase a non-existent element, it will be ignored
    // If you insert an already existing element, it will be ignored

    // You can't set[4] Random access isn't allowed with set

    set<ll> s;
    s.insert(1);s.insert(5);s.insert(2);s.insert(-1);s.insert(3);
    cout << s.count(1) << "\n";cout << s.count(5) << "\n";cout << s.count(2) << "\n";cout << s.count(-1) << "\n";cout << s.count(3) << "\n";

    if(s.count(3) != 0)cout << "yes elem 3 is there" << endl;

    auto it = s.begin();
    cout << *it << endl;

    it++;it++;it++;
    cout << *it << endl;

    if(s.find(3) != s.end())cout << "yes";




    // Map | similar to sets | O(logN ) 

    map<string,ll> m1;map<ll,ll> m2;

    m1["a"] = 1;       m1["b"] = 2;        m1["c"] = 3;
    m2[1132123] = 1;   m2[-2131231] = 2;   m2[-3] = 3;

    // when you try to acess non-existant elements it will be created
    // the value will be default of whatever data type we declared it will be of
    cout << m1["ABCDEFG"] ; 

    return 0;

}



