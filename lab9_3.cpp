#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    double sum=0,X,S_D,N[100];
    int k=0;
    string str;
    ifstream source ("score.txt");
    while (getline(source,str)) {
        N[k++] = stod(str);
        sum += stod(str.c_str());
    }
    X = sum/k;
    sum = 0;
    for (int i=0;i<k;i++) sum += pow(N[i],2);
    sum /= k;
    S_D = sqrt(sum - pow(X,2));
    cout << "Number of data = " << k << endl;
    cout << setprecision(3);
    cout << "Mean = " << X << endl;
    cout << "Standard deviation = " << S_D << endl;
}