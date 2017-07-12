#include <stdio.h>
typedef struct {
	int ori;
	int given;
	int tot;
}Candy;
int main() {
	int ss, p, count = 0, flag = 0;
	while (1) {
		scanf("%d", &ss);
		if (!ss)
			break;
		Candy candy[ss];
		for (int i = 0; i < ss; i++) {
			scanf("%d", &candy[i].ori);
			candy[i].tot = candy[i].ori;
		}
		do {
			for(int i=0;i<ss;i++)
				candy[i].ori = candy[i].tot;
			p = candy[0].tot;
			for (int i = 0; i < ss; i++) {
				if (i == ss - 1 && candy[i].tot == p)
					flag = 0;
				if (candy[i].tot != p) {
					flag = 1;
					count++;
					break;
				}
			}
			if (flag) {
				for (int i = 0; i < ss - 1; i++) {
					candy[i + 1].given = candy[i].ori / 2;
 					candy[i].ori /= 2;
				}
				candy[0].given = candy[ss - 1].ori / 2;
				candy[ss - 1].ori /= 2;
				for (int i = 0; i < ss; i++) {
					candy[i].tot = candy[i].ori + candy[i].given;
					if (candy[i].tot % 2)
						candy[i].tot++;
				}
			}
		} while (flag);
		printf("%d %d\n", count, candy[0].tot);
		count=0;
	}
}