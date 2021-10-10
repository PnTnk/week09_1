#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
	char s[50];
	scanf("%s", s);
	int n = strlen(s)-1;
	
	while (n >= 0) {
		printf("%c", s[n]);
		n -= 1;
	}
	return 0;
}