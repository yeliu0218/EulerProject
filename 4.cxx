/*
 * 4.cxx
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
#include<vector>
using namespace std;


bool ispalindromic(int n)
{
	int n_copy = n;
	int tmp=0;
	vector<int> digits;
	while(n>0){
		digits.push_back(n%10);
		n = (n-digits.back())/10; 
	}
	int div = 1;
	while(digits.size()>0)
	{
		tmp = tmp + digits.back()*div;
		div=div*10;
		digits.pop_back();
	}
	if (tmp==n_copy)
	return true;
	else 
	return false;
}

int main(int argc, char **argv)
{
	int tmp = 0;
	int count = 0;
	for(int i=999;i>99;i--)
	   for(int j=999;j>109;j=j-11)
	   {
		   if(i*999<tmp)
		   {
			   std::cout<<"Largest "<<tmp<<std::endl;
			   std::cout<<"Number of iteration "<<count<<std::endl;
			   return 0;
		   }
		   if(ispalindromic(i*j) && i*j>tmp)
		   {  
			   tmp = i*j;
			   std::cout<<tmp<<std::endl;
		   }
		   count++; 
	   }
	return 0;
}

