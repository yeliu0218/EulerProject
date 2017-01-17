/*
 * 2.cxx
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
//Sn=1+2+3+5+...+An
//Sn+1 = 1+2+3+5+8...+An+An+1
//An+1 = 1+1+1+2+3+5+...+An-1=2+Sn-1
//Sn = An+2 - 2
//S2n +1 = K2n*2  
//S2n = A2n+2 -2
//K2n = ( A2n+2 -1 ) /2 

#include <iostream>
#include<vector>
using namespace std;

int main(int argc, char **argv)
{
    std::vector<int> a;
    a.push_back(1);
    a.push_back(2);
    while (a.back()<4000000)
    {
		a.push_back(*(a.end() - 1)+*(a.end() - 2));
	}
	if (a.back()%2==0){
		a.pop_back();
	}
	else if (a.back()%2==1 && *(a.end() - 2)%2==0)
	{
		a.push_back(*(a.end() - 1)+*(a.end() - 2));
	}
	
	int sum;
	sum = (a.back() - 1)/2;
	
	std::cout<<"Answer "<<sum<<std::endl;
	return 0;
}

