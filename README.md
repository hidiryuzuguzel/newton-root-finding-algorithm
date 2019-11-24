# newton-root-finding-algorithm
Root finding software for general third degree polynomials using Newton's method. Only works with 1-dimensional problems of the form f(x) = x^3 + ax^2 + bx + c = 0

- The program accepts 5 command line parameters, the first 3 being the polynomial coefficients a, b, and c, the 4th one being the stopping parameter eps, and the final one is the initial guess x0
- It prints out (for each iteration i), the current approximate root x(i) and the corresponding function value f(x(i))
- It terminates when the stopping condition |x(n) - x(n-1)| <= eps is satisfied.
