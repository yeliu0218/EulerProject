/*
 * 1.cxx
 * 
 * Copyright 2017 leo <leo@leo-Lenovo-Yoga-2-Pro>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>

int multipleSum(int a, int N)
{
	return (1+N/a)*(N/a)/2*a;
}

int main(int argc, char **argv)
{
    int sum;
    int N=1000;
    sum = multipleSum(3,N)+multipleSum(5,N)-multipleSum(3*5,N);
    std::cout<<"Method1 "<<sum<<std::endl;
    sum=0;
    for(int i=0;i<=N;i++)
    {
		if (i%3==0 ||i%5==0)
		sum+=i;
	}
	std::cout<<"Method2 "<<sum<<std::endl;
    return 0;
}

