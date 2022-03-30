#include <iostream>
using namespace std;
class election
{
    static int count;
    int citizen_no;
    char name[20], adress[100];

public:
    void input()
    {
        cout << "Enter citizen_no , name and adress=" << endl;
        cin >> citizen_no >> name >> adress;
        count++;
    }

    void show()
    {
        cout << "Output data are " << citizen_no << name << adress << endl;
    }
    static void total_record()
    {
        cout << "Total records = \t " << count;
    }
};

int election::count;
int main()
{
    int i, n;
    system("cls");
    election *ptr;
    cout << "Enter no of records you want to find..";
    cin >> n;
    ptr = new election[n]; // memory is allocated for n number of records.
    for (i = 0; i < n; i++)
    {
        ptr[i]->input();
    }
    cout << "Records =" << endl;
    election ::total_record();
    ptr = new election[n]; // memory is allocated for n number of records.
    for (i = 0; i < n; i++)
    {
        ptr[i]->show();
    }
    delete[] ptr;
}
