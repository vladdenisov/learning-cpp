#include <cstring>
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
//считать строку которая предсавляет собой набор символов 
	char s[100];
	char tempp[100];
	gets_s(s);
	if (strchr(s,'+') != NULL) {
		char * i=strchr(s,'+');
	int l = i-s;
	strncpy_s(tempp,s,l+1);}
	if (strchr(s,'-') != NULL) {
		char * i=strchr(s,'-');
	int l = i-s;
	strncpy_s(tempp,s,l+1);}
	int io = atoi(tempp);
	while (strchr(s+1,'+') != NULL || strchr(s+1,'-') != NULL)
  {
	  if (strchr(s,'+') != NULL) {
		  cout << "";
	char temp[100];
	char * i=strchr(s,'+');
	
	strcpy_s(temp,i+1);
	io = io + atoi(temp);
	  i=strchr(i+1,'+');
	  
	  } 
	  if (strchr(s,'-') != NULL){
	char temp[100];
	char * i=strchr(s,'-');
	strcpy_s(temp,i+1);
	io = io - atoi(temp);
	  i=strchr(i+1,'-');
	  }}
	cout << io;
	system("pause");
	return 0;
}
