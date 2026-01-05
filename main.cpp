#include <iostream>
using namespace std;
#include<vector>
void riempiVettore(int v[],int n, bool flag){
    int i;
    i=0;
    while(i<=n-1){
        if(flag){
            do{
                v[i]=rand()%(n*10+1);
               } while(v[i]%2!=0);
                }else{
                    do{
                        v[i]=rand()%(n+10+1);
                        }while(v[i]%2==0);
                        }
                        i=i+1;
                        }
                        }
                        

    

void ordinaVettore(int v[], int n) {
    int i, j, t;

    i = 0;
    while (i <= n - 1) {
        j = 0;
        while (j <= n - 2) {
            if (v[j] > v[j + 1]) {
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
}

void riempiVettore(int v[], int n, bool flag) {
    int i;

    i = 0;
    while (i <= n - 1) {
        if (flag) {
            do {
                v[i] = rand() % (n * 10 + 1);
            } while (v[i] % 2 != 0);
        } else {
            do {
                v[i] = rand() % (n * 10 + 1);
            } while (v[i] % 2 == 0);
        }
        i = i + 1;
    }
}

void visualizzaDecrescente(int v[], int n) {
    int i;

    i = n - 1;
    while (i >= 0) {
        cout << v[i] << endl;
        i = i - 1;
    }
}

void visualizzaVettore(int v[], int n) {
    int i;

    i = 0;
    while (i <= n - 1) {
        cout << v[i] << endl;
        i = i + 1;
    }
}




int main() {
    srand(time(0));
    int i, t, j, n;

    cout << "quanti numeri ci sono?" << endl;
    cin >> n;
    int v[n];
    int w[n];
    bool flag;

    cout << "che numeri contine il vettore pari?" << endl;
    cin >> flag;
    riempiVettore(v, n, flag);
    flag = !flag;
    cout << "che numeri contiene il vettore dispari?" << endl;
    riempiVettore(w, n, flag);
    cout << "ordina il vettore pari " << endl;
    ordinaVettore(v, n);
    cout << "ordina il vettore dispari" << endl;
    ordinaVettore(w, n);
    visualizzaVettore(v, n);
    visualizzaVettore(w, n);
    visualizzaDecrescente(v, n);
    visualizzaDecrescente(w, n);
    return 0;


    
}

