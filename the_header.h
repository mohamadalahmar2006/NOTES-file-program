#pragma once

#include<fstream>

void getchoice(int& choice, std::ifstream & infile, std::ofstream & outfile);
void clearnotes();
void getnotes(std::ifstream& file);
void printnotes(std::ofstream& file);