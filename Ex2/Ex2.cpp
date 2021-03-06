// Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Fraction.h"
#include "DenominatorIsZeroException.h"
#include "GeneralErrorException.h"
#define TRUE 1
#define NUMOFFRACTIONS 2

using std::cout;
using std::endl;
using std::cin;
int main()
{
	Fraction fractions[NUMOFFRACTIONS],ans;
	char action = 0;
	int input = 0;

	try {
		for (int i = 0; TRUE ;i++) {
			cout << "Please Enter Fraction Number " << i % 2 + 1 << " -> A/B:\nA:" << endl;
			cin >> input;
			//set numerator
			fractions[i % 2].setNumerator(input);
			cout << "B:" << endl;
			cin >> input;
			//sett demonitor
			fractions[i % 2].setDenumerator(input);
			cout << "Your Fraction is " << fractions[i % 2].getNumerator() << "/" << fractions[i % 2].getDenumerator() << endl;
			cout << "----------------------------"<<endl;
			//check if there are two new fractions to calculate
			if (i % 2 == 1 ) {
				//calculate the operator's result
				switch (action)
				{
				case '+':
					ans = fractions[0] + fractions[1];
					break;
				case '-':
					ans = fractions[0] - fractions[1];
					break;
				case '*':
					ans = fractions[0] * fractions[1];
					break;
				case '/':
					ans = fractions[0] / fractions[1];
					break;
				}
				cout << "Calculate " << fractions[0].getNumerator() << "/" << fractions[0].getDenumerator() << " " << action << " "
					<< fractions[1].getNumerator() << "/" << fractions[1].getDenumerator() << ":" << endl;
				cout << "Result:" << ans.getNumerator() << "/" << ans.getDenumerator() << " Or " << (double)ans.getNumerator() / ans.getDenumerator() << endl;
				//reset action for next time
				action = 0;
				continue;
			}
			cout<<"Please Enter Calc Action:" << endl;
			cin >> action;
			//check validity of the inserted action
			while (action != '+'&&action != '-'&&action != '*'&&action != '/'&&action != '!') {
				cout << "Calc Action isn't Valid.\nPlease Try Again:" << endl;
				cin >> action;
			}
			//caclculate ! operator if needed
			if (action == '!') {
				ans = !fractions[0];
				cout << "Calculate !" << fractions[0].getNumerator() << "/" << fractions[0].getDenumerator() << "\nResult:" << ans.getNumerator() << " / "
					<< ans.getDenumerator() << " Or " << (double)ans.getNumerator() / ans.getDenumerator() << endl;
				//incrementing i to keep it's parity 
				i++;
			}

			
	}//for
	}catch(DenominatorIsZeroException zeroDevision){
		cout << zeroDevision.what() << endl;
	}
	catch (GeneralErrorException GEE) {
		cout << GEE.what() << endl;
	}

	return 0;
}
