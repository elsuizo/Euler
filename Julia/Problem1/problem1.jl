#= -------------------------------------------------------------------------
# @file problem1.jl
#
# @date 12/22/15 21:56:50
# @author Martin Noblia
# @email martin.noblia@openmailbox.org
#
# @brief
#
# @detail
#
  Licence:
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or (at
# your option) any later version.
# 
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.
# 
# You should have received a copy of the GNU General Public License

---------------------------------------------------------------------------=#
# Enun
#=
If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
=#

"""
Function for collect the integers multiples of some integer
Input:
N(Int) Maximum integer 
n(Int) integer multiple
Output:
collection of integers multiples of n
"""
mult_of(N::Int,n::Int) = find(collect(1:N) .% n .== 0)
s = sum(unique(vcat(mult_of(999, 3), mult_of(999, 5))));
print("The sum of all the multiples of 3 or 5 bellow 1000 is: $s")
