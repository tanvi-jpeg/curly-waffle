#include <bits/stdc++.h>
using namespace std;
// int hash[13]; -- can store upto 10^7
//  here, bool can store upto 10^8
int main()
{ // Number_Hashing
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // precompute
    int hash[13] = {0}; // can store 10^6
    // bool can store upto 10^7
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << " count:" << hash[number] << endl;
    }
    return 0;
}
vector<vector<int>> countFrequencies(vector<int> &nums)
{

    unordered_map<int, int> mpp;
    for (int num : nums)
        mpp[num]++;

    vector<vector<int>> v;
    for (auto it : mpp)
        v.push_back({it.first, it.second});
    return v;
}
int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<vector<int>> ans = countFrequencies(nums);

    for (auto &p : ans)
        cout << p[0] << " " << p[1] << "\n";

    return 0;
}
int main()
{ // Character_Hashing
    string s;
    cin >> s;
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << 'count:' << " " << hash[c - 'a'] << endl;
    }
}
int main()
{ // map_hash

    string s;
    cin >> s;
    unordered_map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
}
int main()
{ // map_hashing
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        cout << "count:" << " " << mpp[num] << endl;
    }
}