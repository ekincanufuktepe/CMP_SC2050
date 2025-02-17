#include "shapes.h"

float calculate_line_segment_length(Line line) {
    Point p1 = line.p1;
    Point p2 = line.p2;
    double length = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
    return length;
}

void setPointX(Point* point, float x) {
    point->x = x;
}

void setPointY(Point* point, float y) {
    point->y = y;
}

void setPoinXY(Point* point, float x, float y) {
    point->x = x;
    point->y = y;
}

void printPointInfo(Point point) {
    printf("Point: x=%f, y=%f\n", point.x, point.y);
}

void setLine(Line* line, Point point_x, Point point_y) {
    line->p1 = point_x;
    line->p2 = point_y;
}

void shiftPoint(Point* point, float shift_x, float shift_y) {
    point->x += shift_x;
    point->y += shift_y;
}

// TODO: this will be implemented later
Point getPointInfo(Point point) {
    return point;
}

// TODO: this will be implemented later
Line getLineInfo(Line line) {
    return line;
}