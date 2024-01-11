#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <vector>
using std::vector;
#include <iomanip>
using std::setw;
#include <string>
using std::string; using std::stoi;

int main() {
  vector<int> swifties_i;
  vector<int> swifties_j;

  string str;
  int count = 0;
  string num = "";
  while (std::getline(cin, str)) {
    for (char c : str) {
      if (std::isdigit(c)) {
        num += c;
      } else {
        if (!num.empty()){
        if (count == 0) {
          swifties_i.push_back(stoi(num));
          count = 1;
          num = "";
        } else {
          swifties_j.push_back(stoi(num));
          count = 0;
          num = "";
        }
      }
      }
    }
  }

  for (int i = 9; i >= 0; i--) {
    int original_value = 100 - i * 5;
    for (int j = 0; j < 20; j++) {
      int bad_seats = 0;
      int seat = 0;
      for (long unsigned int a = 0; a < swifties_i.size(); a++) {
        int distance_x = abs(j - swifties_i[a]);
        int distance_y = abs(i - swifties_j[a]);
        if (distance_x == 0 && distance_y == 0) {
          seat = 1;
          break;
        } else if (distance_x <= 2 && distance_y <= 2) {
          if (distance_x == 2 && distance_y == 0) bad_seats += 20;
          if (distance_x == 0 && distance_y == 2) bad_seats += 20;
          if (distance_x == 1 && distance_y == 1) bad_seats += 20;
          if (distance_x == 0 && distance_y == 1) bad_seats += 40;
          if (distance_x == 1 && distance_y == 0) bad_seats += 40;
        }
      }
      if (seat == 1) {
        cout << setw(5) << " *,";
      } else {
        cout << setw(4) << original_value - bad_seats << ",";
      }
    }
    cout << endl;
  }
}