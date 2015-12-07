#include <stdio.h>
void str_words_in_rev(char*, int);
char* strrev(char*, int);
int main() {
	char str[] = "missionrnd is great";
	str_words_in_rev(str, 4); 
	_getch();
	return 0;
}
void str_words_in_rev(char *input, int len) {
	input = strrev(input, len);
	int i = 0, count = -1, count_1 = 0, index;
	char tokens1[5][31];
	while (input[i] != '\0') {
		if (input[i] == ' ' || input[i + 1] == '\0') {
			if (input[i + 1] == '\0') {
				for (int k = count, h = 0; k <= i; k++, h++) {
					tokens1[count_1][h] = input[k];
					index = h;
				}
				tokens1[count_1][index + 1] = '\0';
				count_1++;
			}
			else {
				for (int k = count, h = 0; k < i; k++, h++) {
					tokens1[count_1][h] = input[k];
					index = h;
				}
				tokens1[count_1][index + 1] = '\0';
				count_1++;
			}
			count = -1;
		}
		else
			if (count == -1)
				count = i;
		i++;
	}
	for (int i = 0; i < count_1; i++) {
		printf("%s\n", tokens1[i]);
	}
}
char* strrev(char *str, int len) {
	int i = 0, j = len - 1;
	char temp;
	while (i < j) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return str;
}