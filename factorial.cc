/*
 * factorial.cc
 *
 *  Created on: 30 Jun 2015
 *      Author: qiushigu
 */
#include<iostream>
#include"factorial.h"
using namespace std;

int factorial(int number){
	if(number < 0){
		cout << "error: number should be greater than zero" << endl;
		return -1;
	}
	if(number == 0) return 1;
	int x = 1;
	for(int i = number; i > 1; i-- ){
		x *= i;
	}
	return x;
}


