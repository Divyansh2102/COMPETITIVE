/*
    Given an array of integer numbers where tarrl represents the number of poges in the i-th book. There ore m number of students and the tosk is to 
    allocote all the books to their students. Allocote books in such a woy that
        1. Each student gets at least one book.
        2. Each book should be ollocated to a student.
        3. Book allocotion should be in a contiguous manner
Yeu have to allocote the book to m students such that the maximum number of poges assigned to a student is min.
*/

#include <bits/stdc++.h>
using namespace std;
void allo(int n,int a[]){
    int s[n]={0};
    vector<int>v;
    s[0]=a[0];
    for(int i=1;i<n;i++)
        s[i]=a[i]+s[i-1];
    for(int i=0;i<n;i++){
        int ans=max(s[i],s[n-1]-s[i]);
        v.push_back(ans);
    }
    cout<<*min_element(v.begin(),v.end())<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    allo(n,a);
    return 0;
}
