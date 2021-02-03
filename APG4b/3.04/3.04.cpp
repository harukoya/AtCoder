#include <iostream>
#include <string>

//  時計構造体
struct Clock {
  //  メンバ変数
  int hour;
  int minute;
  int second;
  //  メンバ関数
  void set(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
  }

  std::string to_str() {
    std::string str_h = std::to_string(hour);
    std::string str_m = std::to_string(minute);
    std::string str_s = std::to_string(second);

    if (str_h.length() == 1) {
      str_h = "0" + str_h;
    }
    if (str_m.length() == 1) {
      str_m = "0" + str_m;
    }
    if (str_s.length() == 1) {
      str_s = "0" + str_s;
    }

    return str_h + ":" + str_m + ":" + str_s;
  }

  void shift(int diff_second) {
    int diff_hour = diff_second / 3600;
    diff_second %= 3600;
    int diff_minute = diff_second / 60;
    diff_second %= 60;

    second += diff_second;
    if (second >= 60) {
      minute ++;
      second -= 60;
    } else if (second < 0) {
      minute --;
      second += 60;
    }

    minute += diff_minute;
    if (minute >= 60) {
      hour ++;
      minute -= 60;
    } else if (minute < 0) {
      hour --;
      minute += 60;
    }

    hour += diff_hour;
    if (hour >= 24) {
      hour -= 24;
    } else if (hour < 0) {
      hour += 24;
    }
  }
};

int main() {
  int hour, minute, second;
  std::cin >> hour >> minute >> second;
  int diff_second;
  std::cin >> diff_second;

  Clock clock;

  clock.set(hour, minute, second);

  std::cout << clock.to_str() << std::endl;

  clock.shift(diff_second);

  std::cout << clock.to_str() << std::endl;
}
