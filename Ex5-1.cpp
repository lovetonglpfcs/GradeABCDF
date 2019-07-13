#include <iostream>
using namespace std;
int main()
{
	float exam;
	cout << "Enter your score : " ;
	cin >> exam;
	if ((exam < 0)||(exam > 100)){
		cout << "Error wrong score.";
	}else if(exam >= 90){
		cout << "You get grade A.";
	}else if(exam >= 80){
		cout << "You get grade B.";
	}else if(exam >= 70){
		cout << "You get grade C.";
	}else if(exam >= 60){
		cout << "You get grade D.";
	}else if((exam >= 0)&&(exam <= 59)){
		cout << "You get grade F.";
	}
	cout << endl;
	return(0);
}