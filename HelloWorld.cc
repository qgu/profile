/*
 * HelloWorld.cc
 *
 *  Created on: 30 Jun 2015
 *      Author: qiushigu
 */

#include<iostream>
#include"factorial.h"
#include"quadraticFunction.h"
#include<math.h>
using namespace std;

int main(){
	int x = 10;
	for(int i = 0; i < 10000; i++){
		sin(x);
		quadraticFunction(x);
		factorial(x);
	}
	return 0;

}


