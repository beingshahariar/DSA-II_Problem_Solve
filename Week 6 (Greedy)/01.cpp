#include<bits/stdc++.h>
using namespace std;

struct Item {
    int id;
    int weight;
    int value;
    double ratio;
};


bool cmp(Item a, Item b) {
    return a.ratio > b.ratio;
}

int fractionalKnapsack(Item A[], int n, int capacity) {
    for (int i = 0; i < n; i++) {
        A[i].ratio = (double)A[i].value / A[i].weight;
    }
    sort(A, A + n, cmp);

    double totalprofit = 0.0;
    

    for (int i = 0; i < n && capacity > 0; i++) {
        if (capacity >= A[i].weight) {
            totalprofit += A[i].value;
            capacity -= A[i].weight;

            cout << "Item " << A[i].id << ": "
                 << A[i].weight << "kg "
                 << A[i].value << " taka \n";
               //  << "Fraction taken: 1.0\n";
        } else {
            double fraction = (double)capacity / A[i].weight;
            double valueTaken = A[i].value * fraction;
            
            totalprofit += valueTaken;

            cout << "Item " << A[i].id << ": "
                 << capacity << "kg "
                 << valueTaken << " taka\n ";
             //    << "Fraction taken: " << fraction << "\n";
            capacity = 0;
        }
    }

    return totalprofit;
}

int main() {
    int n, w;
    cin >> n;
    Item arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i].weight >> arr[i].value;
        arr[i].id = i + 1;
    }

    cin >> w;

    double result = fractionalKnapsack(arr, n, w);
    cout << "Profit: " << result << " taka\n";
    

    return 0;
}
