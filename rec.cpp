

#include <iostream>

// tail recursion
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else n* factorial(n - 1);
}

// Head recursion
void func(int n) {
    if (n > 0) {
        func(n - 1);
        std::cout << n;
    }

}

// tree recursion
void tree_rec(int n) {
    if (n > 0) {
        std::cout << n;
        tree_rec(n - 1);
        tree_rec(n - 1);
    }
}

// indirect recursion
void funA(int n) {
    if (n > 0) {
        std::cout << n;
        funB(n - 1);
    }

}
void funB(int n) {
    if (n > 1) {
        std::cout << n;
        funA(n / 2);
    }
}

// nested recursion
int nest(int n) {
    if (n > 100)
        return (n - 10);
    else
        return nest(nest(n + 1));
}

int main()
{
   
    return 0;
}
