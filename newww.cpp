#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int solution(int N, int C, vector<int>& plants) {
    int steps = 0;
    int water = C;
    int current_position = -1;

    for (int i = 0; i < N; ++i) {
        int distance_to_plant = abs(current_position - i);

        if (water < plants[i]) {
            steps += abs(current_position - (-1));
            water = C;
            steps += i - current_position;
            current_position = i;
            water -= plants[i];
        } else {
            water -= plants[i];
            current_position = i;
        }

        steps += distance_to_plant;
    }

    steps += abs(current_position - (-1));

    return steps;
}

int main() {
    // Sample input 1
    int N1 = 5;
    int C1 = 2;
    vector<int> plants1 = {2, 1, 1, 2, 2};
    cout << solution(N1, C1, plants1) << endl;  // Expected output: 21

    // Sample input 2
    int N2 = 10;
    int C2 = 76;
    vector<int> plants2 = {55, 3, 45, 48, 27 ,26, 31, 22, 11, 58};
    cout << solution(N2, C2, plants2) << endl;  // Expected output: 62
    int N3 = 6;
    int C3 = 4;
    vector<int> plants3= {1,1,1,4,2,3};
    cout << solution(N3, C3, plants3) << endl;  // Expected output: 62

    return 0;
}
