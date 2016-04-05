/* -------------------------------------------------------------------------
@file problem1.c

@date 04/05/16 00:21:28
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
#include<stdio.h>

int main()
{
    int N = 1000; // max number
    int s = 0;
    for(int i = 1; i < N; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            s += i;
        }
    }

    printf("s: %d\n", s);

    return 0;
}

