const int mondrianFieldSize = 8;

class Field
{
public:
    void createField();

    void printField();

    void editFieldForTemplate(int y, int x);
protected:
    char field[mondrianFieldSize][mondrianFieldSize];
};