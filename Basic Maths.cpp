#include <bits/stdc++.h>
using namespace std;
int digits(int N)
{
    int count = 0;
    while (N > 0)
    {
        count++;
        N = N / 10;
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << digits(n);
    return 0;
}
//      OR
int cnt(int n)
{
    int count = (int)(log10(n) + 1);
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << cnt(n);
    return 0;
}
int extract(int n)
{
    int digit = 0;
    while (n > 0)
    {
        digit = n % 10;
        cout << digit << " ";
        n = n / 10;
    }
    cout << endl;
    return digit;
}
int main()
{
    int n;
    cin >> n;
    cout << extract(n);
    return 0;
}
int reverse(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int ld = n % 10;
        rev = (rev * 10) + ld;
        n = n / 10;
    }
    return rev;
}
int main()
{
    int n;
    cin >> n;
    cout << reverse(n);
    return 0;
}
bool palindrome(int x) // palindrome: num==revnum
{

    int dup = x;
    int rev = 0;
    while (x != 0)
    {
        int ld = x % 10;
        x = x / 10;
        rev = (rev * 10) + ld;
    }
    if (dup == rev)
        cout << "true";
    else
        cout << "false";
}
int main()
{
    int n;
    cin >> n;

    if (palindrome(n))
        cout << "true";
    else
        cout << "false";

    return 0;
}
bool armstrong(int x) /*armstrong: sum of each number,
 raised to power of number gives that number itself*/
{
    int sum = 0;
    while (x > 0)
    {
        int ld = x % 10;
        sum = sum + (ld * ld * ld);
        x = x / 10;
    }
    if (x == sum)
        cout << "true";
    else
        cout << "false";
}
int main()
{
    int n;
    cin >> n;

    if (armstrong(n))
        cout << "true";
    else
        cout << "false";

    return 0;
}
int alldiv(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    alldiv(n);
    return 0;
}
int ndiv(int n)
{

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i != i)
            {
                cout << n / i << " ";
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    ndiv(n);
    return 0;
}
bool prime(int n)
{
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
            if ((n % i) != i)
                count++;
        }
    }
    if (count == 2)
        cout << "prime";
    else
        cout << "not prime";
}
int main()
{
    int n;
    cin >> n;
    prime(n);
    return 0;
}
int gcd(int n1, int n2)
{
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            return i;
        }
    }
    return 1;
}
int main()
{
    int t; // test cases
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        gcd(n1, n2);
    }
    return 0;
}
int egcd(int n1, int n2)
{
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
            n1 = n1 % n2;
        else
            n2 = n2 % n1;
    }
    if (n1 == 0)
        cout << n2;
    else
        cout << n1;
}
int main()
{
    int t; // test cases
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        egcd(n1, n2);
    }
    return 0;
}