
#include <iostream>

struct Quotient {
    int nominator;
    int denominator;
    
    // Construct a new Quotient with the given
    // numerator and denominator
    Quotient(int n, int d) { 
        nominator = n;
        denominator = d;
    }
    // Return a new Quotient, this instance plus
    // the "other" instance
    Quotient add(const Quotient &other) const { 
        return Quotient(this->nominator + other.nominator, this->denominator + other.denominator);
    }
    // Return a new Quotient, this instance times
    // the "other" instance
    Quotient multiply(const Quotient &other) const {
        return Quotient(this->nominator * other.nominator, this->denominator * other.denominator);
    }
    // Output the value on the screen in the format n/d
    void print() const { std::cout << this->nominator / this->denominator << std::endl; }
};


int main(){
    Quotient q(100, 20);
    q.print();
    Quotient q2 = q.add(Quotient(10, 10));
    q2.print();
    q2 = q2.multiply(q2);
    q2.print();
    return 0;
}
