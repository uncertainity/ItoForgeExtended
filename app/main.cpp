#include<iostream>
#include<fstream>
#include<string>
#include<vector>

#include "../src/smoothStateCalibration.cpp"

using namespace std;

int main(){
    // First we generate the data
    generateData data;
    cout<<"Data Generation Done."<<endl;
    // Then we need to do calibration
    smoothStateCalibration cali(data, 150, 100, true);
    cali.main();

    return 0;
}