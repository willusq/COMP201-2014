#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
int main(){
	vector<int> stack (1);
	string elem;
	cout << "Enter the elements of formula(enter )" << endl;
    char *end;
	while(cin >> elem){
		if(elem == "done"){
			break;
		}
		if(elem == "+"){
			if(stack.size() < 2){ cout << stack.size() << endl;}//<< "Not enough values, try again" << endl;}
			else{
				int int2 = stack.back();
				stack.pop_back();
				int int1 = stack.back();
				stack.pop_back();
				
				stack.push_back(int1+int2);
			}
		}else if(elem == "-"){
			if(stack.size() < 2) cout << "Not enough values, try again" << endl;
			else{
				int int2 = stack.back();
				stack.pop_back();
				int int1 = stack.back();
				stack.pop_back();
				
				stack.push_back(int1-int2);
			}
		}else if (elem == "*"){
			if(stack.size() < 2) cout << "Not enough values, try again" << endl;
			else{
				int int2 = stack.back();
				stack.pop_back();
				int int1 = stack.back();
				stack.pop_back();
				
				stack.push_back(int1*int2);
			}
		}else if(elem == "/") {
			if(stack.size() < 2) cout << "Not enough values, try again" << endl;
			else{
				int int2 = stack.back();
				stack.pop_back();
				int int1 = stack.back();
				stack.pop_back();
				
				stack.push_back(int1/int2);
			}}else if(elem == "%") {
			if(stack.size() < 2) cout << "Not enough values, try again" << endl;
			else{
				int int2 = stack.back();
				stack.pop_back();
				int int1 = stack.back();
				stack.pop_back();
				
				stack.push_back(int1%int2);
			}
		}else{
			stack.push_back(strtol(elem.c_str(), NULL, 10));
		}
		//cout << "Enter the next element of the equations" << endl;
	}
	cout << "The result is " << stack.back();
	
}