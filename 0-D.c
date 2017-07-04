#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char name[17];
	int times;
}Color;
int main()
{
	int N, alloc;
	Color *color;
	char temp[17];
	while (scanf("%d", &N) && N) {
		int f = 0, m = 0;
		getchar();
		color = (Color *)malloc(sizeof(Color));
		for (int i = 0; i<N; i++) {
			alloc = 1;
			scanf("%s", temp);
			for (int j = 0; j<f; j++)
				if (!strcmp(color[j].name, temp)) {
					color[j].times++;
					alloc = 0;
					break;
				}
			if (alloc) {
				color = (Color *)realloc(color, (f + 1) * sizeof(Color));
				color[f].times = 1;
				strcpy(color[f].name, temp);
				f++;
			}
		}
		for (int i = 1; i<f; i++) {
			if (color[i].times>color[m].times)
				m = i;
		}
		puts(color[m].name);
		free(color);
	}
	return 0;
}