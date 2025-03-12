function frob = frob(x)
    % Compute the coefficients a_n
    n = 100:-1:1;  % Start from 1 to avoid division by zero
    a = 1 ./ ((2*n - 1) .* (2*n - 3));  % Compute the coefficients
    
    % Evaluate the polynomial at x
    frob = polyval(a, x);
end


