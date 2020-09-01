nclude <iostream>
#include <string>
#include <cmath>
#include<limits>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;

unsigned int skew_binary_to_int(char* s, int len){
	int i = 0;
	unsigned int sum = 0;
	while(len){
		sum += (s[i] - '0') * (pow(2, len) - 1);
		len--;
		i++;
	}
	return sum;
}

int main(int argc, char *argv[])
{
	char s[10001];
	int k;

	while (true) {
		gets(s);
		if (strcmp(s, "0") == 0)
			return 0;

		k = strlen(s);
		cout << skew_binary_to_int(s, k) << endl;
	}
	return 0;
}
