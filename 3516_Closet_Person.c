int findClosest(int x, int y, int z) {
    int a;
    int b;
    if (z - x > 0) {
        a = z - x;
    } else {
        a = x - z;
    }
    if (z - y > 0) {
        b = z - y;
    } else {
        b = y - z;
    }
    if (a - b > 0) {
        return 2;
    } else if (a == b) {
        return 0;
    } else {
        return 1;
    }
        
    
}