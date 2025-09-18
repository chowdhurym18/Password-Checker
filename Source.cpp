




Fit Page






#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool valid_pass(const string& pass) {
bool upper_case = false;
bool lower_case = false;
bool one_digit = false;
if (pass.length() < 6) {
return false;
}
for (char c : pass) {
if (isupper(c))
upper_case = true;
else if (islower(c))
lower_case = true;
else if (isdigit(c))
one_digit = true;
}
return upper_case && lower_case && one_digit;
}
void print_invalid(const string& pass) {
if (pass.length() < 6) {
cout << "-> Password must be atleast 6 characters long.\n";
}
bool upper_case = false;
bool lower_case = false;
bool one_digit = false;
for (char c : pass) {
if (isupper(c))
upper_case = true;
else if (islower(c))
lower_case = true;
else if (isdigit(c))
one_digit = true;
}
if (!upper_case) {
cout << "-> Password must contain atleast one uppercase letter.\n";
}
if (!lower_case) {
cout << "-> Password must contain atleast one lowercase letter.\n";
}
if (!one_digit) {
cout << "-> Password must contain atleast one digit.\n";
}
}
int main() {
string pass;
cout << "Enter the password: ";
cin >> pass;
if (valid_pass(pass)) {
cout << "Password is valid. All criteria met!\n";
}
else {
cout << "Password is invalid.\n It failed the following criteria: \n";
print_invalid(pass);
}
return 0;
