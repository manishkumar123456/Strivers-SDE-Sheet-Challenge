// Next Permutation      ouestion 3  , day 3


#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
     next_permutation(permutation.begin(),permutation.end());

    vector<int>v(permutation.begin(),permutation.end());

    return v;