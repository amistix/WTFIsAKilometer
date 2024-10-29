namespace ext
{
    class Point
    {
        public:
            int x;
            int y;

            Point(int x = 0, int y = 0)
            {
                this->x = x;
                this->y = y;
            }

            Point operator - (Point &other)
            {
                return Point(this->x - other.x, this->y - other.y);
            }
            Point operator + (Point &other)
            {
                return Point(this->x + other.x, this->y + other.y);
            }
            int operator * (Point &other)
            {
                return this->x * other.x + this->y * other.y;
            } 
            Point& operator ++(){
                this->x++;
                this->y++;
                return *this;
            }
            Point& operator --(){
                this->x--;
                this->y--;
                return *this;
            }

            ~Point(){}
    };
}