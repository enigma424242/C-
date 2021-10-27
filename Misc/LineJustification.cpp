// Line Justification
// Stephen M. Struble
// 10/19/2021

#include <string>
#include <iostream>
#include <cstdlib>
using std::cout; using std::endl; using std::cin; using std::string;

string justify(string str, const int str_sz_min, const int str_sz_max);

int main() {

    string in_strm;
    string quit;

    do {
        cout << "Enter string to be justified:\n";
        getline(cin, in_strm);
        srand(time(nullptr));
        const int line_sz_min = 40;
        const int line_sz_max = 80;

        string str_justified = justify(in_strm, line_sz_min, line_sz_max);
        cout << str_justified << endl;

        cout << "Finished? (Type 'y' to quit):\n";
        getline(cin, quit);
    } while (quit != "y");
}

string justify(string str, const int str_sz_min, const int str_sz_max) {
    int current_str_sz = str.length();
    if (current_str_sz <= str_sz_min || current_str_sz == str_sz_max)
        return str;
    else if (current_str_sz < str_sz_max) {
        int pun_pos = str.find_first_of(",.!?;");
        while (pun_pos != string::npos) {
            if (current_str_sz < str_sz_max) {
                str.insert(pun_pos + 1, " ");
                current_str_sz = str.length();
                pun_pos = str.find_first_of(",.!?;", pun_pos + 1);
            }
        }
        while (current_str_sz < str_sz_max) {
            int ran_pos = rand() % str.length() + 1;
            int whtspc_pos = str.find(" ", ran_pos);
            int pun_whtspc = str.find_last_of(" ", current_str_sz);
            if (pun_whtspc == current_str_sz - 1)
                str.erase(pun_whtspc, 1);
            if (whtspc_pos == string::npos)
                continue;
            str.insert(whtspc_pos, " ");
            current_str_sz = str.length();
        }
        return str;
    }
    else
        return "Error: String must be less than 80 characters.";
}
