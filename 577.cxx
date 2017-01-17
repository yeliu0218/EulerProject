/*
 * untitled.cxx
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

#define T long long

T S(T n){
	return (n*(n+1))/2;
}

T F577(T N){
	T sum=0;
	T i = 0;
	while(N>0){
		i++;
		sum+=S(N-2)*i;
		N=N-3;
	}
	return sum;
}






int main(int argc, char **argv)
{
	T N,N1,N2,N3;
	N=12345;
    N1=N;
    N2=N1-1;
    N3=N2-1;

    T sum=0;
    T i=1;
    while(N1>0){
       sum=sum+S(N1-2)*S(i);
       N1=N1-3;
       i=i+1;
    }

    i=1;
    while(N2>0){
       sum=sum+S(N2-2)*S(i);
       N2=N2-3;
       i=i+1;
    }

    i=1;
    while(N3>0){
       sum=sum+S(N3-2)*S(i);
       N3=N3-3;
       i=i+1;
    }
    
    std::cout<<"Largest "<<sum<<std::endl;
	
	T sum2=0;
	for(i=3;i<=N;i++)
	   sum2 = sum2+F577(i);
	
	std::cout<<"Largest "<<sum2<<std::endl;
	return 0;
}

