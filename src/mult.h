#if !defined(MYPROJECT_MULT_H)
#define MYPROJECT_MULT_H

// NOTE FOR MYSELF 
// generics in cpp must be implemented in header
template<typename T>
T mult(T a, T b) {
    return a * b;
}

#endif