#include <bits/stdc++.h>
using namespace std;
void pairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> p1 = {5, {2, 4}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
    pair<int, int> arr[] = {{1, 3}, {2, 4}, {5, 8}};
    cout << arr[1].first;
}
int main()
{
    pairs();
    return 0;
}
void vectors()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << v[0] << " " << v.at(1) << endl;
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});                                // adds at beginning of container
    vec.emplace_back(3, 4);                               // adds at the end of container
    cout << vec[0].first << " " << vec[1].second << endl; // vec[array size] is way of accessing element and .first and .second is for pair
    vector<int> vect(5, 100);
    cout << vect[0] << " " << vect[1] << " " << vect[2] << endl;
    vector<int> i(5);
    i.push_back(10);
    cout << i[5] << endl;
    vector<int> v2(5, 20);
    vector<int> v3(v2); // v2 will be replaced by v3
    cout << v2[2] << " " << v3[3];
}
int main()
{
    vectors();
    return 0;
}
void iterators()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << endl; // prints the seconds element
    it = it + 2;
    cout << *(it) << endl;
    cout << *(v.begin()) << endl;
    cout << *(v.end() - 1) << endl;
    cout << *(v.rend()) << endl;
    cout << *(v.rbegin()) << endl;
    cout << v.back() << endl;
}
int main()
{
    iterators();
    return 0;
}
void avec()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // accessing all the elements
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    // for each loop
    for (auto it : v)
    {
        cout << it << " ";
    }
}
int main()
{
    avec();
    return 0;
}
void dvec()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // deleting the elements
    v.erase(v.begin() + 1);
    for (int x : v)
        cout << x << " ";
    v.erase(v.begin() + 2, v.begin() + 5);
    for (int x : v)
        cout << x << " ";
}
int main()
{
    dvec();
    return 0;
}
void ivec()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // inserting the elements
    v.insert(v.begin(), 8);
    for (int x : v)
        cout << x << " ";
    v.insert(v.begin() + 1, 7);
    for (int x : v)
        cout << x << " ";
    v.insert(v.begin() + 1, 3, 6);
    for (int x : v)
        cout << x << " ";
}
int main()
{
    ivec();
    return 0;
}
void cvec()
{ // copy of vectors
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> copy(2, 7);
    v.insert(v.begin(), copy.begin(), copy.end());
    for (int x : v)
        cout << x << " ";
}
int main()
{
    ivec();
    return 0;
}
void vec()
{
    vector<int> v = {1, 2, 3, 4, 5};
    cout << v.size(); // tells no. of elements
}
int main()
{
    vec();
    return 0;
}
void svec()
{
    vector<int> v1 = {1, 2};
    vector<int> v2 = {3, 4, 5};
    v1.swap(v2);
    cout << "v1:";
    for (int x : v1)
        cout << x << " ";
    cout << endl;
    cout << "v2:";
    for (int x : v2)
        cout << x << " ";
}
int main()
{
    svec();
    return 0;
}
void pvec()
{
    vector<int> v = {1, 2, 3, 4, 5};
    v.pop_back(); // pops the last element
    for (int x : v)
        cout << x << " ";
}
int main()
{
    pvec();
    return 0;
}
void tvec()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    v.clear(); // trims down the entire vector
    for (int x : v)
        cout << x << " "; // prints nothing
}
int main()
{
    tvec();
    return 0;
}
void evec()
{
    vector<int> v = {
        1,
        2,
        3,
        4,
        5,
    };
    cout << v.empty() << endl;
    vector<int> ve = {};
    cout << ve.empty();
}
int main()
{
    evec();
    return 0;
}
void lst()
{
    list<int> ls;
    ls.push_back(2);    // adds element at first
    ls.emplace_back(4); // adds element at end
    ls.push_front(5);   // cheaper in terms of time complexity whereas insert is expensive
    ls.emplace_front(9);
    for (int x : ls)
        cout << x << " ";
    // other functions(same as vectors): begin, end,rbegin,rend, clear,insert,size,swap
}
int main()
{
    lst();
    return 0;
}
void dq()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(7);
    dq.emplace_front(9);
    for (int x : dq)
        cout << x << " ";
    cout << endl;
    dq.pop_back();
    dq.pop_front();
    for (int x : dq)
        cout << x << " " << endl;
    dq.back();  // returns the last element of deque
    dq.front(); // returns the first element of deque
    for (int x : dq)
        cout << x << " ";
    // other functions(same as vectors): begin, end,rbegin,rend, clear,insert,size,swap
}
int main()
{
    dq();
    return 0;
}
void stk()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.size() << endl;
    cout << st.empty();
}
int main()
{
    stk();
    return 0;
}
// {push,pop,top}- O(1)- constant time
void swstk()
{
    stack<int> st1, st2;
    int n, x;
    cin >> n;
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st1.push(x);
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st2.push(x);
    }
    cout << endl;
    st1.swap(st2);
    cout << st1.top() << " ";
    cout << st2.top() << " ";
}
int main()
{
    swstk();
    return 0;
}
void q()
{
    int n;
    queue<int> q;
    q.push(20);
    q.push(45);
    q.emplace(10);
    cout << q.front() << endl
         << q.back() << endl;
    q.front() -= 13;
    q.back() += 8;
    cout << q.front() << endl
         << q.back() << endl;
    q.pop();
    cout << q.front() << endl
         << q.back();
    // size,swap,empty are same as stack
}
int main()
{
    q();
    return 0;
}
void pq()
{
    // Maxmium Heap
    priority_queue<int> pq;
    pq.push(9);
    pq.push(3);
    pq.push(97);
    pq.emplace(1);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> PQ;
    PQ.push(17);
    PQ.push(9);
    PQ.push(10);
    cout << PQ.top();
    // size,swap,empty are same as stack
}
int main()
{
    pq();
    return 0;
}
void st()
{
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(2); // doesn't store duplicate elements
    st.emplace(4);
    st.insert(3);
    // lowerbound - returns >=element
    auto it4 = st.lower_bound(2);
    cout << *(it4) << endl;
    // upperbound - returns > element
    auto it5 = st.upper_bound(3);
    cout << *(it5) << endl;
    // prints set
    for (int x : st)
        cout << x << " ";
    cout << endl;
    // finds set element
    auto it1 = st.find(2);
    if (it1 != st.end())
        cout << *(it1) << endl;
    else
        cout << "uh-oh" << endl;
    // finds set element
    auto it2 = st.find(4);
    if (it2 != st.end())
        cout << *(it2) << endl;
    else
        cout << "uh-oh" << endl;
    // finds set element
    auto it0 = st.find(11);
    if (it0 != st.end())
        cout << *(it1) << endl;
    else
        cout << "uh-oh" << endl;
    // deletes set element
    st.erase(it1, it2);
    for (int x : st)
        cout << x << " ";
    cout << endl;
    // deletes element
    st.erase(3);
    for (int x : st)
        cout << x << " ";
    cout << endl;
    // checks
    int cnt = st.count(2);
    cout << cnt << endl;
}
int main()
{
    st();
    return 0;
}
void mst()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    for (int x : ms)
        cout << x << " ";
    cout << endl;
    int cnt = ms.count(1);
    cout << cnt << endl;
    ms.erase(ms.find(1)); // only single element erased
    for (int x : ms)
        cout << x << " ";
    cout << endl;
    ms.erase(ms.find(1), ms.find(1 + 2));
    for (int x : ms)
        cout << x << " ";
    cout << endl;
    ms.erase(1); // here all occurences are erased
    for (int x : ms)
        cout << x << " ";
    cout << endl;
}
int main()
{
    mst();
    return 0;
}
void ust()
{
    unordered_set<int> us;
    us.insert(9);
    us.insert(4);
    us.insert(7);
    for (int x : us)
        cout << x << " ";
    cout << endl;
    // all functions are same in set and multiset expect upper and lower bound won't work
}
int main()
{
    ust();
    return 0;
}
void mp()
{
    map<int, int> mpp;
    mpp[1] = 2;
    mpp.emplace(3, 4);
    mpp.insert({6, 8});
    for (auto it : mpp)
        cout << it.first << ' ' << it.second << endl;
    cout << mpp[1] << endl;
    auto it = mpp.find(6);
    cout << it->second << endl;
    map<int, pair<int, int>> mpq;
    mpq.insert({9, {2, 15}});
    mpq.emplace(16, make_pair(14, 13));
    for (auto it : mpq)
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    map<pair<int, int>, int> mpo;
    mpo[{10, 4}] = 90;
    mpo[{8, 6}] = 89;
    for (auto it : mpo)
        cout << it.first.first << " " << it.first.second << " " << it.second << endl;
}
int main()
{
    mp();
    return 0;
}
void mmp()
{
    multimap<int, int> mmp;
    mmp.insert({1, 2});
    mmp.emplace(1, 6);
    mmp.insert({1, 8});
    for (auto it : mmp)
        cout << it.first << ' ' << it.second << endl;
}
int main()
{
    mmp();
    return 0;
}
void ump()
{
    unordered_map<int, int> ump;
    ump.insert({1, 2});
    ump.emplace(9, 6);
    ump.insert({17, 8});
    for (auto it : ump)
        cout << it.first << ' ' << it.second << endl;
}
int main()
{
    ump();
    return 0;
}
void algo()
{
    vector<int> v = {9, 5, 1, 8};
    sort(v.begin(), v.end());
    for (int x : v)
        cout << x << " ";
    cout << endl;
    sort(v.begin() + 2, v.begin() + 3, less<int>());
    for (int x : v)
        cout << x << " ";
    cout << endl;
}
int main()
{
    algo();
    return 0;
}
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first < p2.first)
        return false;
    return true;
}
void myway()
{

    pair<int, int> a[] = {{1, 2}, {2, 1}, {8, 1}}; // second element in descending and first element in ascending
    sort(a, a + 3, comp);
    for (auto x : a)
        cout << "{ " << x.first << "," << x.second << "}" << " ";
    cout << endl;
}
int main()
{
    myway();
    return 0;
}
void bin()
{
    int n;
    cin >> n;
    int cnt = __builtin_popcount(n);
    cout << cnt << endl;
    long long num = 15432679871; // converts to binary and counts 1
    int cn_t = __builtin_popcountll(num);
    cout << cn_t;
}
int main()
{
    bin();
    return 0;
}
void permt()
{
    string a = "978";
    sort(a.begin(), a.end());
    do
    {
        cout << a << endl;
    } while (next_permutation(a.begin(), a.end()));
}
int main()
{
    permt();
    return 0;
}
void elem()
{
    int a[] = {1, 2, 3, 4, 5, 6, 90};
    int mxi = *max_element(a, a + 7);
    cout << mxi << endl;
    int mni = *min_element(a, a + 7);
    cout << mni << endl;
}

int main()
{
    elem();
    return 0;
}