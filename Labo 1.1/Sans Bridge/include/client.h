#ifndef CLIENT_H
#define CLIENT_H

#include <vector>

class Shape;
class Client
{
    public:
        Client();
        virtual ~Client();
    protected:
    private:
        std::vector<Shape*> shapes;
};

#endif // CLIENT_H
