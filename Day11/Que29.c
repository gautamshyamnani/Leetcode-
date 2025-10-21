int divide(int dividend, int divisor) {
    // Handle overflow case
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

    // Determine the sign of the result
    int sign = (dividend > 0) ^ (divisor > 0) ? -1 : 1;

    // Convert both numbers to long and make them positive
    long dvd = labs((long)dividend);
    long dvs = labs((long)divisor);
    long result = 0;

    while (dvd >= dvs) {
        long temp = dvs, multiple = 1;
        while (dvd >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }
        dvd -= temp;
        result += multiple;
    }

    // Apply the sign
    result = sign * result;

    // Clamp to INT range
    if (result > INT_MAX) return INT_MAX;
    if (result < INT_MIN) return INT_MIN;

    return (int)result;
}
