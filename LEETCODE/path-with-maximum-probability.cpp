#include <iostream>
#include <unordered_set>
using namespace std;

int minimumOperations(string network) {
    unordered_set<char> st;
    
    int operations = 0;
    
    for (char node : network) {
        if (st.find(node) == st.end()) {
            operations++;
            st.insert(node);
        }
    }
    
    return operations;
}

int main() {
    std::string network="abcddcba";
    
    int minOps = minimumOperations(network);
    std::cout << "Minimum number of operations required: " << minOps << std::endl;
    
    return 0;
}
