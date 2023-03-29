#include <fstream>
#include <iostream>
using namespace std;

main() {
	ifstream fin("input.txt");
    ofstream fout("output.txt");
    int k, i, j;
	fin >> k;
	int ball[3][2];
	for(i = 1; i <= 3; i++) 
	    for(j = 1; j <= 2; j++) 
	        fin >> ball[i][j];
	        
	for(i = 1; i <= 3; i++) 
	{
		if(ball[i][1] == k && ball[i][2] != k)
		   k = ball[i][2];
		else if(ball[i][1] != k && ball[i][2] == k)
		   k = ball[i][1];
	}
	
	cout << k;
	fout << k;
	        
}
