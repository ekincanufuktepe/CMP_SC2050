#include "shapes.h"

int main() {

    Point p1;
    setPointX(&p1, 3);
    setPointY(&p1, 0);
    printPointInfo(p1);
    shiftPoint(&p1, 7, 0);
    printPointInfo(p1);
    //p1.x = 3;   // BAD: avoid direct manipulation. Use a function instead.
    //p1.y = 0;

    Point p2;
    setPoinXY(&p2, 5, 0);
    printPointInfo(p2);
    // Bad practice
    // p2.x = 4;
    // p2.y = 0;

    Line line;
    setLine(&line, p1, p2);
    // Still bad practice
    // line.p1 = p1;
    // line.p2 = p2;

    printf("Length of line: %lf\n", calculate_line_segment_length(line));

    return 0;
}