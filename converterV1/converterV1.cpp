#include <iostream>

using namespace std;

class UnitsOfTime {
private:
        int type;
        int convert_type;
        long double time;
public:
        void Set(int time_type, int time_convert_type, long double time_time) {
            type = time_type;
            convert_type = time_convert_type;
            time = time_time;
        }

        void Convert() {
            switch (type) {
            case 1:
                if (convert_type == 1) {
                    cout << "Microseconds " << time;
                }
                else if (convert_type == 2) {
                    cout << "Nanoseconds: " << time / 1000;
                }
                else if (convert_type == 3) {
                    cout << "Picoseconds: " << time / 1000000;
                }
                break;
            case 2:
                if (convert_type == 1) {
                    cout << "Microseconds: " << time * 1000;
                }
                else if (convert_type == 2) {
                    cout << "Nanoseconds: " << time;
                }
                else if (convert_type == 3) {
                    cout << "Picoseconds: " << time / 1000;
                }
                break;
            case 3:
                if (convert_type == 1) {
                    cout << "Microseconds: " << time * 1000000;
                }
                else if (convert_type == 2) {
                    cout << "Nanoseconds: " << time * 1000;
                }
                else if (convert_type == 3) {
                    cout << "Picoseconds: " << time;
                }
                break;
            default:
                cout << "Error!";
            }
        }
};

int main() {
    long double time_;
    int convert_type_;
    int type_;

    cout << "Select type: (1,2,3)" << endl;
    cout << "1.Microseconds" << endl;
    cout << "2.Nanoseconds" << endl;
    cout << "3.Picoseconds" << endl;
    cin >> type_;

    cout << "Insert time units: ";
    cin >> time_;

    cout << "Select what type to convert to: (1,2,3)" << endl;
    cout << "1.Microseconds" << endl;
    cout << "2.Nanoseconds" << endl;
    cout << "3.Picoseconds" << endl;
    cin >> convert_type_;

    UnitsOfTime Time;
    Time.Set(type_, convert_type_, time_);
    Time.Convert();



    return 0;
}
