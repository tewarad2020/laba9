#include <iostream>
#include <string>
using namespace std;

int main(){
	int count[5] = {0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	int k=1;
	string grade;
	do{
		cout << "Student [" << k << "]: "; 
		cin >> grade; 
		if(grade == "A") count[0]++,k++;
		else if(grade == "B") count[1]++,k++;
		else if(grade == "C") count[2]++,k++; 
		else if(grade == "D") count[3]++,k++;
		else if(grade == "F") count[4]++,k++;   
		else if(grade == "0") break;
		else cout << "Wrong input. Please input again."<< endl;
	}while(1);
	
	
	cout << "In total " << k-1 << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
