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
//const char* filepath = "E:\\file.txt";
#define C cout <<
#define E << endl;
#define Size 5


void Answ(int arr[]) {
    int max = 0, min = arr[0];
    for (int i = 0;i < Size;i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    int count = 8, sum = 0;

    for (int i = 0;i < Size;i++) {
        if (arr[i] == max) {
            arr[i] = 0;
            count -= 1;
        }
        if (arr[i] == min){
            arr[i] = 0;
            count -= 1;
        }
        sum += arr[i];
    }

    cout << sum / count << endl;
}




int main() {

    srand(time(NULL));

    int arr[5] = { 1,2,3,4,5 };
    int arrcopy[5];
    CopyReversArr(arr, arrcopy, Size);




    return 0;
}
/* FILE* f = fopen(filepath, "r");
    

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

    fclose(f);*/