#ifndef DRAWING_H
#define DRAWING_H


class Drawing
{
    public:
        Drawing();
        virtual ~Drawing();
        virtual void drawLine(double x1, double y1, double x2, double y2) = 0;
        virtual void drawCircle(double x, double y, double r) = 0;
        virtual void drawHexagon(double x, double y, double l) = 0;
    protected:
    private:
};

#endif // DRAWING_H
