#include<stdio.h>
#include<math.h>

typedef struct pointStrct {
    float x;
    float y;
} Point;

typedef struct lineStrct {
    Point p1;
    Point p2;
} Line;

float calculate_line_segment_length(Line line);
Point getPointInfo(Point);
Line getLineInfo(Line);
void setPointX(Point*, float);
void setPointY(Point*, float);
void setPoinXY(Point*, float, float);
void setLine(Line*, Point, Point);
void shiftPoint(Point*, float shift_x, float shift_y);
// void setLineFirstPoint();
// void setLineSecondPoint();
void printPointInfo(Point);
