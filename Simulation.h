
// #include "<linbox/matrix/sparse-matrix.h>"
#include "Structures.h"

// This is where the meat is.

class Chain {
    public:
        Lattice sublattice;
}

// class Proposal {
    
// }

class State {
    public:
        // This cochain sends (i-1)-simplices to the desired field.
        std::function cochain;

        
}
