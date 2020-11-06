#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Raspis
{
private:
    int den;
    double vrema;
    string name_uc_d;
    int auditoria;
public:
    Raspis(int d, double v, string n, int au) :den(d), vrema(v), name_uc_d(n), auditoria(au) {}

void file()
    {
    
        ofstream files("raspis.txt");
        if (!files.is_open())
            cout << "Нет файла";
        files << den << " ";
        files << vrema << " ";
        files << name_uc_d << " ";
        files << auditoria << " ";
        files.close();
        
    }
    friend ostream& operator<<(ostream& so, Raspis& r) {
        so << r.den <<" "<<r.vrema <<" "<< r.name_uc_d <<" "<< r.auditoria;
        return so;
    }

    friend istream& operator>>(istream& so, Raspis& r) {
        so >> r.den >>r.vrema >>r.name_uc_d >> r.auditoria;
        return so;
    }

};


int main()
{
    setlocale(LC_ALL, "Rus");
    
    Raspis p(14, 10.45, "Системное программирование", 405);
    cout << p;
    cin >> p;
    Raspis file();
    
    return 0;
}
