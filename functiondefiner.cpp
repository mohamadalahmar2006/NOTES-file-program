#include<iostream>
#include<fstream>
#include<string>
#include<limits>
#include"the_header.h"
void printnotes(std::ofstream& file) {

	std::string text;
	std::cout << "enter the text you want to add in the file \n";
	getline(std::cin, text);
	file << "\n----------\n" << text << "\n----------\n";
	
}
void getnotes(std::ifstream& file) {
	file.clear() ;
	file.seekg(0,std::ios::beg);
	std::string text;
	bool check = false;
	while (getline(file, text)) {
		check = true;
		std::cout << '\n' << text << '\n';

	}
	if (check == false) { std::cout << "the file is empty \n"; }
	
}
void clearnotes() {
	std::ofstream clear("NOTES.txt", std::ios::trunc);
	if (!clear.is_open()) {
		std::cout << "cannot open the file to clear \n";
		return;
	}
	clear.close();


}

void getchoice(int& choice, std::ifstream& infile, std::ofstream& outfile) {


	while (choice != 4)
	{
		bool input = false;
		while (!input) {
			std::cout << "\n1)add a text to notes \n2)show the notes\n3)clear the notes\n4)End the program\n";
			std::cin >> choice;
			if (std::cin.fail()) { std::cout << "wrong input try again ! \n";std::cin.clear();std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); }
			else {
				input = true;std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
		}

		switch (choice) {
		case 1: { printnotes(outfile);outfile.flush(); }break;
		case 2: { getnotes(infile); }break;
		case 3: { clearnotes(); }break;
		case 4: { return; }




		}





	}


}







