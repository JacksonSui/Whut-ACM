#include <stdio.h>
#include <string.h>
#define N 100

int main() {
	int c, k, p, sp, flag, temp, cnt;
	char emoji_in[3][N];
	memset(emoji_in, 0, sizeof(emoji_in));
	char emoji_out[5][5];
	for (int i = 0; i < 3; i++) {
		scanf("%s", emoji_in[i]);
//		printf("%s\n", emoji_in[i]);
	}

	scanf("%d", &k);
	while (k--) {
		for (int i = 0; i < 5; i++) {
			scanf("%d", &temp);
			cnt = 0;
			if (i == 0 || i == 4)
				c = 0;
			else if (i % 2 == 1)
				c = 1;
			else
				c = 2;
			for (p = 0; (!p) || !(emoji_in[c][p - 1] == ']' && emoji_in[c][p + 1] == '\0'); p++) {
				if (emoji_in[c][p] == '[')
					cnt++;
				if (cnt == temp) {
					p++;
					memset(emoji_out[i], 0, sizeof(emoji_out[i]));
					for (sp = 0; emoji_in[c][p] != ']'; sp++)
						emoji_out[i][sp] = emoji_in[c][p++];
					emoji_out[i][sp] = '\0';
					cnt = 0;
//					printf("%s\n", emoji_out[i]);
					break;
				}
			}
			if (emoji_in[c][p - 1] == ']' && emoji_in[c][p + 1] == '\0') {
				flag = 0;
				break;
			}
			else
				flag = 1;
		}
		if (flag)
			printf("%s(%s%s%s)%s\n", emoji_out[0], emoji_out[1], emoji_out[2], emoji_out[3], emoji_out[4]);
		else
			printf("Are you kidding me? @\\/@\n");
	}
	return 0;
}

