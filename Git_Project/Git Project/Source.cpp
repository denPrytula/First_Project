#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <string.h>
#include <string>
#include <time.h>
#include <malloc.h>
#include "Git_header.h"
#include <cstdio>

using namespace std;
const char* filepath = "E:\\file.txt";


int main() {
	srand(time(NULL));
    
    FILE* f = fopen(filepath, "r");
    

    int charCount[256] = {0};

    char ch;
    while ((ch = fgetc(f)) != EOF) {
        charCount[ch]++;
    }
    

    int max = 0;
    char mostFrequently;
    for (int i = 0;i < 256;i++) {
        if (charCount[i] > max) {
            mostFrequently = i;
            max = charCount[i];
        }
    }
    

    printf("Char: '%c' meets %d", mostFrequently, max);

    fclose(f);
	
	return 0;
}