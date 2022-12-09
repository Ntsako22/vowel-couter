#pragma once
#include <iostream>
#include <string>
using namespace std;
class vowel
{
public:
	void vowel2(char* sptr) {
		char word;
		cout << "enter a word to count vowels";
		cin >> word;
		int count = 0;
		while (*sptr!='\0'&& *sptr==word)
		{

			
			if (*sptr == 'a' || *sptr == 'e' || *sptr == 'o' || *sptr == 'u') {
			
				count++;
			
			
			}
			sptr++;
		}
	
	
		
	
	}

};

