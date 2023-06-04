
//Pascal's Triangle   question 2

#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{

   vector<vector<long long int>>v;

 

   for(int i=0;i<n;i++)

   {

     vector<long long int>ans;

     for(int j=0;j<i+1;j++)

     {

     ans.push_back(1);

        

     }

     v.push_back(ans);

   }

 

   for(int i=0;i<n;i++)

   {

     for(int j=0;j<i-1;j++)

     {

       v[i][j+1]=v[i-1][j]+v[i-1][j+1];

     }

   }

   return v;


}
