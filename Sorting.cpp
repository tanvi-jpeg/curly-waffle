#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int mini=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[mini]) mini=j;
        }
        int temp = arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
void bubble_sort(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        int didntswap=0;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                didntswap=1;
            }
        }
         if(didntswap==0){ 
            break;
         }
        cout << "runs\n";

    }
}
void insertion_sort(int arr[],int n)
{
    for (int i=1;i<=n-1;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]= temp;
            }
        }
    }
}


void m(int arr[],int low,int mid,int high)
{
    vector<int>temp;
   int left=low,right=mid+1;
   while(left<=mid&&right<=high)
   {
    if(arr[left]<=arr[right])
    {
        temp.push_back(arr[left]);
        left++;
    }
    else
    {
        temp.push_back(arr[right]);
        right ++;
    }
   }
   while(left<=mid)
   {
     temp.push_back(arr[left]);
        left++;
   }
   while(right<=high)
   {
     temp.push_back(arr[right]);
        right++;
   }
   for(int i=low;i<=high;i++)
  arr[i]=temp[i-low];
}
void merge_sort(int arr[],int low ,int high)
{
    if(low>=high) return ;
    int mid=(low+high)/2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1,high);
   m(arr,low,mid,high);
}
int p(int arr[],int low,int high)
{
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot&&i<=high-1) i++;
        while(arr[j]> pivot&&j>=low+1) j--;
    
    if(i<j) 
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
        int temp= arr[low];
        arr[low]=arr[j];
        arr[j]=temp;
        return j;


}
int q(int arr[],int low,int high)
{
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]>=pivot&&i<=high-1) i++;
        while(arr[j]< pivot&&j>=low+1) j--;
    
    if(i<j) 
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    }
        int temp= arr[low];
        arr[low]=arr[j];
        arr[j]=temp;
        return j;


}
void quick_sort(int arr[],int low ,int high)
{
    if(low<high)
    {
        int pIndex=q(arr,low,high);
        quick_sort(arr,low,pIndex-1);
        quick_sort(arr,pIndex+1,high);

    }
}
void recursive_bubble_sort(int arr[],int n)
{
    if(n==1) return;
    for(int i=0;i<n-1;i++)
    if(arr[i] > arr[i+1])
    {
       int temp=arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
    }
    recursive_bubble_sort(arr,n-1);
}
void recursive_insertion_sort(int arr[],int n)
{
    if(n<=1) return;
    recursive_insertion_sort(arr,n-1);
    for(int j=n-1;j>0 && arr[j-1]>arr[j];j--)
    {
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
    }
}
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n;i++) cin >> arr[i];
    recursive_insertion_sort( arr,n);
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}