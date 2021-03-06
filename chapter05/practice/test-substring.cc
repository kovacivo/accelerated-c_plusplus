#include <iomanip>
#ifndef __GNUC__
#include <ios>
#endif
#include <iostream>
#include <string>
#include <vector>

using std::cin;                     using std::setprecision;
using std::cout;                   
using std::streamsize;
using std::endl;                    using std::string;
using std::vector;

// program tests the functionality of permutted index functions
int main()
{
	// string to input sentence
	string sentence("    mama    ma   emu     ale aj    mna     abc efg");	

	int i = 0;
	int j = 0;
	string::iterator it = sentence.begin();
	string::iterator jj = sentence.begin();
	//while (i != sentence.size()) {
	while (it != sentence.end()) {
		// skip leading spaces
		//while ((i != sentence.size() && isspace(sentence[i])))
		while ((it != sentence.end() && isspace((*it))))
			//++i;
			++it;
		
		// cout << "j = " << j << endl;
		cout << "it = " << (*it) << endl;
		cout << "jj = " << (*jj) << endl;
		//j = i;
		jj = it;
		//while (j != sentence.size() && !isspace(sentence[j]))
		while (jj != sentence.end() && !isspace((*jj)))
			//++j;
			++jj;
		//if (i != j) {
		if (it != jj) {
			//cout << sentence.substr(i, j - i) << endl;
			cout << string(it, jj) << endl;
			//i = j;
			it = jj;
		}
	}
	return 0;
}
