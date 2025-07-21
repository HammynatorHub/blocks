void drawTriangle(int y) {
    int l = 1;
    for (int i = 0; i < y; i++) {
        std::cout << '\n';
        for (int j = 0; j < l; j++) {
            std::cout << "#";
        }
        l++;
    }
}