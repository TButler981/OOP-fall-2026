#include <iostream>
#include <string>
void print_combinations(int n);
void combination_helper(std::string& s, int n, int i);
int main(void) {
std::cout << "Enter size ";
int n;
std::cin >> n;
print_combinations(n);
return 0;
}
void print_combinations(int n) {
std::string s(n, 'a');
// Call the helper function
combination_helper(s, n, 0);
}
void combination_helper(std::string& s, int n, int i) {
// Base case
if (i >= n) {
std::cout << s << std::endl;
return;
}
while (s[i] <= 'z') {
// Recursive call for the next character
combination_helper(s, n, i + 1);
s[i]++;
}
// If letter reaches z, set it to a
s[i] = 'a';
}