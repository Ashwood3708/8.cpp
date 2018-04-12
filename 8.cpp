/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   8.cpp
 * Author: Abdul
 *
 * Created on April 12, 2018, 1:52 PM
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include<string>
using namespace std;



int test(int entries, int a[], int count) {
    int large = 0, sum = 0, k = 0, i = 0, moveI = 0;
    for (int y = 0; y < count; y++) {
        i = moveI;
      
        for (i; k < entries; i++) {
            sum += a[i];
            k++;
        }
        if (sum > large) {
            large = sum;
        }
        
        k = 0;
        moveI++;
        //cout<<"sum"<<i<<" = "<<sum<<endl;
        sum = 0;
    }
    //cout << "final large = " << large << endl;
    return large;
}

int main(int argc, char*argv[]) {
//  
    

    
    
    int s = 0;
    int x;
    ifstream inFile;
    
    inFile.open("input.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    int a[100];
    while (inFile >> x) {
        a[s] = x;
        s++;
    }
    inFile.close();
    int count = a[0];
    int list[count];
    for (int i = 0; i < count; i++) {
        list[i] = a[i+1];
        cout << list[i] << endl;
    }

    int max = 0;
    for (int i = 1; i < (count); i++) {

        int y = test(i, list, count);
        if (max < y) {
            max = y;
        }
        // cout<< "max"<<i<<" = "<< max <<endl;

    }

    cout << "final sum = " << max << endl;



    return 0;
}

