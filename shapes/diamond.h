void drawDiamond(int x) {
    //check if x is odd, else make it odd
    int roundX = floor(x);
    if (roundX % 2) {

    }
    else {
        x++;
    }

    int spaces = x - 1;
    int occ = 1;
    int cycle = 0;
    for (int i = 0; i < x; i++) {
        std::cout << '\n';
        for (int j = spaces/2; j > 0; j--) {
            std::cout << " ";
        }
        for (int k = occ; k > 0; k--) {
            std::cout << "#";
        }
        if (cycle < x/2) {
            spaces-=2;
            occ+=2;
        }
        else {
            spaces+=2;
            occ-=2;
        }
        cycle++;
    }   
}