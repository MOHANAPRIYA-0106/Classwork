
/*
1. **The Endless Tunnel Puzzle**

**Hint**:
- Start with a function that takes the current energy (`n`) as input.
- **Recursion Base Case**: Stop when energy becomes zero or less.
- **Logic**: At each recursive step, print the energy and call the function with `energy / 2`.
- This simulates halving energy as you move through each gate.

**Example**:
For `n = 16`, the energy would be halved as:
16 → 8 → 4 → 2 → 1 → 0 (printing each energy value).






*/


#include <iostream>
using namespace std;


void printEnergy(int energy) {

    if (energy <= 0)
    {
        return;
    }

    cout << energy << " ";

    printEnergy(energy / 2);
}

int main() {
    int energy;

 
    cout << "Enter the initial energy: ";
    cin >> energy;

    printEnergy(energy);

    return 0;
}
