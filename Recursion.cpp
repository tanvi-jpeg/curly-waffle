#include<bits/stdc++.h>
using namespace std;

void f()
{
    cout << 1 << endl;
    f();//Infinite Recursion leads to Stack Overflow
}
int main() {
    f();
    return 0;
}
int cnt=0;
void f1()
{
    if(cnt==4) return; //base condition
    cout << cnt<< endl;
    cnt++;
    f1();
}
int main() {
    f1();
    return 0;
}

void name(int i,int n)
{
   if(i==n) return;
   cout << "Tanvi"<<endl;
   name(i+1,n);
}
int main() {
    int n;
    cin >> n;

    name(0, n);

    return 0;
}

void print(int i,int n)
{
   if(i>n) return;
   cout << i<<endl;
   print(i+1,n);
}
int main() {
    int n;
    cin >> n;

    print(1, n);

    return 0;
}

void rprint(int i,int n)
{
   if(i<1) return;
   cout << i<<endl;
   rprint(i-1,n);
}
int main() {
    int n;
    cin >> n;

    rprint(n, n);

    return 0;
}
void bprint(int i,int n)
{
   if(i<1) return;
   bprint(i-1,n);
   cout << i<<endl;
}
int main() {
    int n;
    cin >> n;

    bprint(n, n);

    return 0;
}

void backprint(int i,int n)
{
   if(i>n) return;
   backprint(i+1,n);
   cout << i<<endl;
}
int main() {
    int n;
    cin >> n;

    backprint(1, n);

    return 0;
}

void psum(int i ,int sum=0)
{
   if(i==0)
   {
      cout << sum <<endl;
      return ;
   }
   psum( i-1,sum+i);
}
int main() {
    int n;
    cin >> n;

    psum(n);  

    return 0;
}

int sum(int n)
{

   if(n==0)
   return 0;
   return n + sum(n-1);

}
int main() {
    int n;
    cin >> n;

    cout<< sum(n);

    return 0;
}

int pfact(int i ,int fact)
{
   if(i==1)
   {
      cout << fact <<endl;
      return 1;
   }
   pfact( i-1,fact*i);
}
int main() {
    int n;
    cin >> n;

    pfact(n,1);

    return 0;
}
int fact(int n)
{

   if(n==1)
   return 1;
   return n * fact(n-1);

}
int main() {
    int n;
    cin >> n;

    cout << fact(n);

    return 0;
}

int arr[100];
void rarray(int l,int r)
{
   
   if(l>=r)
   return  ;
   swap(arr[l],arr[r]);
   rarray(l+1,r-1);
}
int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    rarray(0, n-1);   // reverse full array

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

void rev(int i ,int arr[],int n)
{
   if(i>=n/2)
   return ;
   swap(arr[i],arr[n-i-1]);
   rev(i+1,arr,n);
}
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    rev(0, arr, n);   // reverse the array

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
bool palindrome(int i,string &s)
{
   int n=s.length();
   if(i>=n/2)
   return true;
   if(s[i]!=s[n-i-1])
   return false;
   return palindrome(i+1,s);
}
int main()
{
   string s;
   cin >> s;
   if(palindrome(0,s))
   cout << "it is palindrome";
   else
   cout << "not palindrome";
   return 0;
}
int fibonacci(int n)
{
   if(n<=1) return n;
   return fibonacci(n-1) +fibonacci(n-2);
}
int main()
{ int n;
   cin >> n;
  fibonacci(n);
  int a=0, b=1;
  for(int i=0;i<=n;i++)
  {
cout<< a <<" ";
int c=a+b;
a=b;
b=c;
  }
  return 0;
}
