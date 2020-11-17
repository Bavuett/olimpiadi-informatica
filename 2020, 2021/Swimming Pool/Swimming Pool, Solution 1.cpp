#include <fstream>
using namespace std;
int main(){
	ifstream IN ("input.txt");
	ofstream OUT ("output.txt");
	int N, D, A, E, M, Max;
	A = 0;
	IN >> N;
	int P[N];
	for (int i = 0; i < N; i++) {
		IN >> P[i];
	}
	A = 0;
	E = P[N - 1] - P[0];
	M = E + A;
	Max = 0;
	for (int i = 1; i < N; i++) {
		A = P[i] - P[0];
		E = P[N - 1] - P[i];
		OUT << "E + A: " << E + A << endl;
		if (M < E + A) {
			M = E + A;
			Max = P[i];
		}
	}
	OUT << P[N - 1] - Max;	
}
