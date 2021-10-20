#include<iostream>
using namespace std;
int main(){

       float a[100], min=-1,max=0, b,c=0;
	cout << "hellow welcom to this program this program  got scor of student and give avrage and max and min" <<
		endl << "please enter how meny do you have student" << endl;
	cin >> b;

	cout << "please enter scor of student 1" << "=";
	cin >> a[0];
	max = a[0];
	min = a[0];
	c = a[0];
	for (int i = 1; i < b; i++){
		cout << "please enter scor of student " << i + 1<<"=";
		cin >> a[i];
		if (a[i] < min){
			min = a[i];

		}
		if (max < a[i]){
			max = a[i];
		}
		c+= a[i];

	}

	cout << "this is avrage=" << c/b << endl<<"this is max="<<max<<endl<<"this is min="<<min;


	system("pause");
	return 0;
}