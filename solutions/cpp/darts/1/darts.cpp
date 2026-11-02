#include "darts.h"
#include <cmath>
namespace darts {
    int score(double x, double y) {
    // Calculate the Euclidean distance from the center (0,0)
    double distance = std::hypot(x, y);

    // Determine score based on the radius thresholds
    if (distance <= 1.0) {
        return 10;
    } else if (distance <= 5.0) {
        return 5;
    } else if (distance <= 10.0) {
        return 1;
    } else {
        return 0; // Missed the target entirely
    }
}
}  
