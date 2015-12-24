/* -------------------------------------------------------------------------
@file problem1.cpp

@date 12/23/15 10:50:05
@author Martin Noblia
@email martin.noblia@openmailbox.org

@brief

@detail

Licence:
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
---------------------------------------------------------------------------*/
/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

struct Multi_of_3_5
{
    bool operator()(int x)
    {
        return (x%3 == 0) || (x%5 == 0);
    }
};

template<typename T>
void print(vector<T> seq)
{
    for(auto x : seq)
        cout << x << endl;
}

int sum_v(vector<int> seq)
{
    int s{0};
    for(auto x: seq)
        s += x; 
    
    return s;
}

int main()
{   
    int size = 1000;
    int sum{0};
    vector<int>  natural_numbers; // created a vector of ints 
    vector<int> res;
    // created a range of integers
    for(int i = 0; i < size; ++i)
        natural_numbers.push_back(i);
        
    //print(natural_numbers);
    copy_if(natural_numbers.begin(), natural_numbers.end(), back_inserter(res), Multi_of_3_5()); 
    //print(res);  // only for debug
    sum = sum_v(res);
    cout << "The sum is: " << sum << endl;
    return 0;
}
