#include "blowfish.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
	     
int main()
{

	vector<char> cevirmevec;
	vector<char> cevirmevac;
	vector<char> array;
	string choice;


	cout << "Blowfish Sifreleme Algoritmasi" << endl;
	Blowfish* bf;
	do {
		cout << "1. Metin Gir" << endl;
		cout << "2. Encrypt" << endl;
		cout << "3. Decrypt" << endl;
		cout << "4. Cikis" << endl;

		cin >> choice;

		string metin;
		if (choice == "1") {
			cout << "Metni Giriniz :";
			cin >> metin;
			string str;
			cout << "Anahtar : ";
			cin >> str;
			for (int i = 0; i < str.length(); i++)
			{
				array.push_back(str[i]);
			}

			bf = new Blowfish(array);

			for (int i = 0; i < metin.length(); i++)
			{
				cevirmevec.push_back(metin[i]);
			}
		}
		else if (choice == "2") {
			
			cevirmevac = bf->Encrypt(cevirmevec);
			cout << cevirmevac.data();
			cout << endl;

		}
		else if (choice == "3")
		{
			vector<char>gericevirme = bf->Decrypt(cevirmevac);

			for (int i = 0; i < cevirmevec.size(); i++)
			{
				//gericevirme.push_back(cevirmevac[i]);
				cout << gericevirme[i];
			}
			cout << endl;
		}
	} while (choice != "4");
	
		return 0;
	
}