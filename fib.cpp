#include <iostream>

using namespace std;

int fib(int num){
        int a = 0;
        int b = 1;
        int c;
        cout << 0;
        while (b < num){
		cout << "\n" << b;
                c = b;
                b = a+ b;
                a = c;
	}
        return 0;
}

int main(){
	int num;
	cin >> num;
	fib(num);
}

