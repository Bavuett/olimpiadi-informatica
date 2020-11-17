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
	Media = Somma / N;
	if (Media - P[0] > P[N - 1] - Media) {
		OUT << P[1] - P[0];	
	} else {
		OUT << P[N - 1] - P[N - 2];
	}
}
