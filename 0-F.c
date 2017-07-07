#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *reverse(char *str) {
	int len = strlen(str);
	int i, j;
	char *rev = (char *)malloc(len * sizeof(char));
	for (i = len, j = 0; i; i--, j++)
		rev[j] = str[i - 1];
	rev[j] = '\0';
	return rev;
}

int main() {
	int t, n, l, max = 0, min = 0;
	int flag = 0;
	char input[102][102];
	char x[102];
	char *rev;
	scanf("%d", &t);
	while (t--) {
		max = 0;
		scanf("%d", &n);
		for (int i = 0; i<n; i++)
			scanf("%s", input[i]);
		for (int i = 1; i<n; i++)
			if (strlen(input[i])<strlen(input[min])) {
				min = i;
				break;
			}
		l = strlen(input[min]);
		for (int i = 0; i<l; i++)
			for (int j = 1; j <= l - i; j++) {
				strncpy(x, input[min] + i, j);
				x[j] = '\0';
				rev = reverse(x);
				for (int k = 0; k<n; k++) {
					if (strstr(input[k], x) != NULL || strstr(input[k], rev) != NULL)
						flag = 1;
					else{
						flag = 0;
						break;
					}
				}
				if(!flag)
					continue;
				if (j > max)
					max = j;
			}
		printf("%d\n", max);
	}
}