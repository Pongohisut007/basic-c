#include <iostream>
#include <vector>

using namespace std;


int main_old() {
    double weight, height;
    cout << "enter weight and height: ";
    cin >> weight >> height;
    double bmi = weight / (height * height);
    cout << "BMI = " << bmi << endl;
    vector<string> category{"Obese L4", "Obese L3", "Obese L2", "Obese L1", "Normal", "Low"};
    double v[]{40, 35, 30, 25, 18.5, 0};
    for (int i = 0; i < category.size(); ++i) {
        if (bmi > v[i]) {
            cout << "BMI category: " << category[i] << endl;
            break;
        }
    }
    return 0;
}
