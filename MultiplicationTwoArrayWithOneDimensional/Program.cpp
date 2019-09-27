//
//  Program.cpp
//  Multiplication Two Array with One Dimensional
//
//  Created by Mazen Hrazi on 27/09/19.
//  Copyright © 2019 iZONA. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

	int arr1size, arr2size;
	int arr1[50], arr2[50];
	int schtroumpf = 0;
	
	cout<<"Enter elements number of A1: ";
	cin>>arr1size;
	
	cout<<"Enter elements number of A2: ";
	cin>>arr2size;
	
	cout<<endl;
	
	for (int i = 0; i < arr1size; i++) {
		cout<<"Enter element A1["<<i<<"]: ";
		cin>>arr1[i];
	}
	for (int i = 0; i < arr2size; i++) {
		cout<<"Enter element A2["<<i<<"]: ";
		cin>>arr2[i];
	}

	for (int i = 0; i < arr1size; i++) {
		for (int j = 0; j < arr2size; j++) {
			schtroumpf += arr1[i] * arr2[j];
		}
	}
	
	cout<<endl;
	
	cout<<"The Schtroumpf is equal to: "<<schtroumpf;
	return 0;
}