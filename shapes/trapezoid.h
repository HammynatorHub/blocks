void drawTrapezoid(int x) {
    int lowerSide = x*2;
    int spaces = x;
    int occ = x;

    for (int i = 0; i < x; i++) {
        std::cout << '\n';
        for (int j = spaces; j > 0; j--) {
            std::cout << " ";
        }
        for (int l = occ; l > 0; l--) {
            std::cout << "#";
        }
        occ+=2;
        spaces--;
    }
}