#include <fstream>
using namespace std;
int main(){
	ifstream IN ("input.txt");
	ofstream OUT ("output.txt");
	int A, E, M, Max, Somma = 0, Media = 0;
	long N;
	A = 0;
	IN >> N;
	int P[N];
	for (int i = 0; i < N; i++) {
		IN >> P[i];
		Somma = Somma + P[i];
	}
	Media = Somma/N;
	Max = Media - P[0];
	for (int i = 1; i < N; i++) {
		if (Media > P[i]) {
			E = Media - P[i];
		} else {
			E = P[i] - Media;
		}
		if (E < Max) {
			Max = Media - P[i];
			A = P[i];
		}
	}
	if (P[N - 1] - A > A - P[0]) {
		OUT << P[N - 1] - A;
	} else {
		OUT << A - P[0];
	}
}
