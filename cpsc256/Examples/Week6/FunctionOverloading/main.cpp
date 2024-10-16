/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: brash
 *
 * Created on October 25, 2021, 12:17 PM
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;


void PrintDate(int day, int month, int year) {
    cout << day << "/" << month << "/" << year << endl;
    return;
}

void PrintDate(int day, string month_string, int year) {
    
    vector<string> months = {"January","February","March","April","May","June",
                            "July","August","September","October","November",
                            "December"};
    int index;
    for (int i=0; i<months.size();i++) {
        if (months.at(i) == month_string) {
            index = i;
        }
    }
    
    cout << day << "/" << (index+1) << "/" << year << endl;
    return;
}

int main(int argc, char** argv) {


    // print the date in two different ways

    // date could be 12/5/2021 or 12/May/2021
    int d = 12;
    int m = 5;
    int y = 2021;
    string ms = "May";

    // Same function name, but different parameters

    PrintDate(d,m,y); // PrintDate(int,int,int)

    PrintDate(d,ms,y); // PrintDate(int,string,int)

    return 0;
}

