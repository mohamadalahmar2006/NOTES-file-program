#include"the_header.h"
#include<iostream>
#include<fstream>
#include<string>
#include<limits>
int main() {

	int choice = 0;

	std::ofstream out("NOTES.txt", std::ios::app);
	std::ifstream in("NOTES.txt");

	

	getchoice(choice, in, out);






	out.close();
	in.close();


	return 0;


}





