#include <iostream>

// ���������� ����� �����.���������� ������� ��������� � ����������� � �������� ���������� - ������.
// ���������� ������� - ����� ��� ����� ������ � ���������� - �����, ��� ���������� �������������� ��������
// (��������, ���������, ���������, �������, � �.�.).�������������� �������� ������ ����������� � ����� �������.
// ������ ��������� ������� - ����� ��� �������� ������ : void Mult(drob x)


class Fraction  // ����� �����
{
private:      

    int  Numerator;       // ��������� 
    int  Denominator;     // ����������� 

public:

    void enter_Data()  // ���� ������
    {
        std::cout << " ������� ��������� : ";
        std::cin >> Numerator;
        std::cout << " ������� ����������� : ";
        std::cin >> Denominator;

    }

    void print_Fraction()  // ������ ������ 
    {
        std::cout << "\n ������ ���������  = " << Numerator << std::endl;
        std::cout << " ������ �����������  = " << Denominator << std::endl;
    }

    double adding_Fraction()  // ��������
    {
        Numerator += (Numerator * Denominator);

        return Numerator;
    }
    double subtracting_Fraction()  // ���������
    {
        Numerator -= (Numerator * Denominator);

        return Numerator;
    }
    double multiplication_Fraction()  // ���������
    {
        Numerator *= Numerator;

        return Numerator;
    }
    double division_Fraction()  // �������
    {
        Denominator *= Numerator;

        return Denominator;
    }

};

void castom_print()
{
    for (size_t i = 0; i < 30; i++)
    {
        std::cout << "-";
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    Fraction work_Fraction;  // ���������� ������ -> work_Fraction

    short batton = NULL;

    bool flag = false;

    do
    {
        std::cout << "\t___Menu___"
            << "\n 1. ������ ������"
            << "\n 2. �������� ������"
            << "\n 3. ��������"
            << "\n 4. ���������"
            << "\n 5. ���������"
            << "\n 6. �������"
            << "\n 7. �����";

        
        std::cout << "\n\n������� �����: ";
        std::cin >> batton;

        switch (batton)
        {
        case 1:
            std::cout << std::endl;
           work_Fraction.enter_Data();
           std::cout << std::endl;

        break;

        case 2:
            std::cout << std::endl;
            work_Fraction.print_Fraction();
            std::cout << std::endl;

        break;

        case 3:
            std::cout << std::endl;
            system("cls");
            std::cout << "�������� = " << work_Fraction.adding_Fraction()
                <<"\n";
            std::cout << std::endl;

            break;

        case 4:
            std::cout << std::endl;
            system("cls");
            std::cout << "��������� = " << work_Fraction.subtracting_Fraction()
                << "\n";
            std::cout << std::endl;
      
            break;

        case 5:
            std::cout << std::endl;
            system("cls");
            std::cout << "��������� = " << work_Fraction.multiplication_Fraction()
                << "\n";
            std::cout << std::endl;

            break;

        case 6:
            std::cout << std::endl;
            system("cls");
            std::cout << "������� = " << work_Fraction.division_Fraction()
                << "\n";
            std::cout << std::endl;

            break;

        case 7:
            std::cout << std::endl;
            std::cout << "\n ��������� ������ ! ";
            std::cout << std::endl;
            flag = true;

        break;

        default:
            break;
        }
    } while (flag = true);

    return 0;
}