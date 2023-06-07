#include <iostream>
#include <cmath>
#include <string.h>
#include <string>
#include <time.h>
#include <malloc.h>
#include "Git_header.h"
using namespace std;



int main() {
	srand(time(NULL));
	int* arr = new int;
	
	Create_Array(arr, 20, 0, 2);
	PrintArray(arr, 20);



	return 0;
}