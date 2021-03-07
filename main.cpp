#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	
	srand(time(0));
	
	int guessnumber;
	int min = 1;
	int max = 10;
	int randnum = rand()%(max-min + 1) + min;
	
	if(randnum>=1 && randnum <=5){
		cout<<"Number is between 1 to 5"<<endl;
	}
	else{
		cout<<"Number is between 5 to 10"<<endl;
	}
	
	cout<<"do you want to guess the number.press 'y' and 'Y' :";
	char guesschar;
	cin>>guesschar;
	
	if(guesschar == 'y' || guesschar =='Y'){
		cout<<"Enter the number you guessed :";
		cin>>guessnumber;
		
		if(guessnumber == randnum){
			cout<<"you have guessed a right number. the number is "<<randnum<<endl;
		}
		else{
			cout<<"random number is "<<randnum;
		}
	}
	
	return 0;
	
}

