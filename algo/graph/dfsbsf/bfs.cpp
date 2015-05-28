/**
 * @author: panks@live.com
 *
 */

//C headers
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cctype>
#include<cassert>
#include<climits>
#include<cerrno>
#include<cfloat>
#include<ciso646>
#include<clocale>
#include<csetjmp>
#include<csignal>
#include<cstdarg>
#include<cstddef>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<cwchar>
#include<cwctype>

//containers
#include<vector>
#include<list>
#include<map>
#include<queue>
#include<deque>
#include<set>
#include<complex>
#include<string>
#include<stack>
#include<bitset>
#include<istream>
#include<valarray>

//IOs
#include<iostream>
#include<sstream>
#include<iomanip>
#include<fstream>
#include<exception>
#include<ios>
#include<iosfwd>
#include<ostream>
#include<iterator>
#include<stdexcept>
#include<streambuf>

//algorithm & miscellaneous
#include<algorithm>
#include<functional>
#include<numeric>
#include<utility>
#include<limits>
#include<locale>
#include<memory>
#include<new>

using namespace std;

//Common datatypes
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef set<int> si;
typedef map<string, int> msi;
typedef istringstream iss;
typedef ostringstream oss;

//Loops
#define FOR(i,a,b) for(int i=int(a);i<=int(b);i++)
#define FORD(i,a,b) for(int i=int(a);i>=int(b);i--)
#define REP(i, n) for(int i=0;i<n;i++)
#define REPD(i, n) for(int i=(n)-1;i>=0;i--)
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define testcase(t) int t;scanf("%d", &t);while(t--)

//Input/Output
#define s(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)

#define p(x) printf("%d",x)
#define pl(x) printf("%lld",x)
#define ps(x) printf("%s",x)

#define pn(x) printf("%d\n", x)
#define pln(x) printf("%lld\n", x)
#define psn(x) printf("%s\n", x)

//Common operations
#define pb push_back
#define pf push_front
#define mp make_pair
#define len length()
#define sz size()
#define clr clear()
#define all(c) c.begin(),c.end()
#define mf(m, val) m.find(val)!=m.end() //find val in map

//Useful constants
#define IMAX numeric_limits<int>::max()
#define IMIN numeric_limits<int>::min()
#define LDMAX numeric_limits<ld>::max()
#define LDMIN numeric_limits<ld>::min()
#define LLDMAX numeric_limits<lld>::max()
#define LLDMIN numeric_limits<lld>::min()
#define INF 2000000000 // 2 billion
#define MEMSET_INF 127 // about 2B
#define MEMSET_HALF_INF 63 // about 1B

#define DEBUG true

//Debug functions
template <typename T> void debug(T const a){if (DEBUG) std::cout<<a<<endl;}
template <typename T> void printValues (T const& c) {for (typename T::const_iterator pos=c.begin(); pos!=c.end(); ++pos)std::cout << *pos << ' ';std::cout << std::endl;} // for vector, set, list, etc
template <typename T> void printStack(stack<T> &s) {if(s.empty()) return;T x = s.top(); s.pop();printStack(s);s.push(x);std::cout << x << " ";}
template <typename T> void printQueue(queue<T> &q) {T x; vector<T> v;for(int i=0; i<q.size(); i++){x = q.front(); q.pop();v.push_back(x);q.push(x);}std::copy(v.begin(),v.end(),std::ostream_iterator<double>(std::cout, " "));cout<<endl;}
template <typename T, typename V> void printMap(map<T,V> const&m) {for(typename map<T, V>::const_iterator it = m.begin();it != m.end(); ++it){std::cout << "(" << it->first << ", " << it->second<< ") ";}cout<<endl;}
template <typename T> void printTDV(vector<vector<T> > const& v) {typename vector<vector<T> >::const_iterator it=v.begin(), end=v.end();for ( ; it!= end; ++it) {std::copy(it->begin(),it->end(),std::ostream_iterator<double>(std::cout, " "));std::cout<<endl;}}

//Useful inline fn
template <class _T> inline _T sqr(const _T& x) { return x * x; }
template <class _T> inline string toStr(const _T& a) { ostringstream os(""); os << a; return os.str(); }
template <class _T> inline int toInt(const _T& a) { return atoi(a.c_str()); }

/*============================================================================*/

class Graph{
    int V;

public:
    vector< vector<int> > adj;
    Graph(int V);
    void addEdge(int v, int w);
    void BFS();
};

Graph::Graph(int V){
    this->V = V;
    adj.resize(V);
}
void Graph::addEdge(int v, int w){
    cout<<"In add edge with "<<v<<" "<<w<<endl;
    adj[v].push_back(w);
 //   l[w].append(v); it's directed graph so commented out
}


void process(){

}

int main(){
	//freopen("inputfile", "r", stdin);
	//freopen("outputfile", "w", stdout);

    //    int c; cin>>c;
    //    for(int i=1; i<=c; i++){
    //        cout<<"Case #"<<i<<": ";
    //        process();
    //    }

    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    g.addEdge(1, 2);
    for(int i=0; i<4; i++)
        printValues(g.adj[i]);

    return 0;
}

