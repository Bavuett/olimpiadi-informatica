#include <fstream>
using namespace std;
int main (){
	ifstream IN ("input.txt");
	ofstream OUT ("output.txt");
	int N, giorni, conta = 0, conta1 = 0;
	IN >> N;
	int T[N];
	for (int i=0; i < N; i++){
		IN >> T[i];
	}
	giorni = T[0];
	for (int i=1; i < N; i++){
		giorni = giorni - 1;
		conta++;
		if (T[i] < giorni){
			giorni = T[i];
			conta1++;
		}
	}
	conta = conta + giorni;
	OUT << conta << endl << conta1;
			
}
