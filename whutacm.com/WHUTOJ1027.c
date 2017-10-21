#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool c(long long a, long long b) {
	return a < b;
}

int main() {
	long long N, p, begin, end, mid, maxa, temp, maxn = 0;
	long long last = 0;
	scanf("%lld %lld", &N, &p);
	long long num[N];
	for (long long i = 0; i < N; i++)
		scanf("%lld", &num[i]);
	sort(num, num + N, c);
	for (long long i = 0; i < N; i++) {
		maxa = num[i] * p;
		begin = i;
		end = N - 1;
		while (begin < end) {
			mid = (begin + end) / 2;
			//printf("%d %d %d\n",mid,num[mid],maxa);
			if (num[N - 1] <= maxa) {
				mid = N - 1;
				break;
			}
			if (num[mid] == maxa) {
				for (; num[mid] == maxa; mid++);
				mid--;
				break;
			}
			else if (num[mid]<maxa&&num[mid + 1]>maxa) {
				break;
			}
			else if (num[mid] > maxa) {
				end = mid;
				continue;
			}
			else {
				begin = mid + 1;
				continue;
			}
		}
		temp = mid - i + 1;
		//printf("%lld\n",temp);
		if (temp > maxn)
			maxn = temp;
	}
	printf("%lld\n", maxn);
	return 0;
}