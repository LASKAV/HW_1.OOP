#include <iostream>

// Реализуйте класс Дробь.Необходимо хранить числитель и знаменатель в качестве переменных - членов.
// Реализуйте функции - члены для ввода данных в переменные - члены, для выполнения арифметических операций
// (сложение, вычитание, умножение, деление, и т.д.).Арифметические операции должны выполняться с двумя дробями.
// Пример заголовка функции - члена для сложения дробей : void Mult(drob x)


class Fraction  // класс Дробъ
{
private:      

    int  Numerator;       // числитель 
    int  Denominator;     // знаменатель 

public:

    void enter_Data()  // ввод данных
    {
        std::cout << " Введите чиститель : ";
        std::cin >> Numerator;
        std::cout << " Введите знаменатель : ";
        std::cin >> Denominator;

    }

    void print_Fraction()  // ввывод данных 
    {
        std::cout << "\n Данные числителя  = " << Numerator << std::endl;
        std::cout << " Данные знаменатель  = " << Denominator << std::endl;
    }

    double adding_Fraction()  // сложение
    {
        Numerator += (Numerator * Denominator);

        return Numerator;
    }
    double subtracting_Fraction()  // вычитание
    {
        Numerator -= (Numerator * Denominator);

        return Numerator;
    }
    double multiplication_Fraction()  // умножение
    {
        Numerator *= Numerator;

        return Numerator;
    }
    double division_Fraction()  // деление
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
    Fraction work_Fraction;  // Переменная класса -> work_Fraction

    short batton = NULL;

    bool flag = false;

    do
    {
        std::cout << "\t___Menu___"
            << "\n 1. Ввести данные"
            << "\n 2. Показать данные"
            << "\n 3. Сложение"
            << "\n 4. Вычитание"
            << "\n 5. Умножение"
            << "\n 6. Деление"
            << "\n 7. Выход";

        
        std::cout << "\n\nВведите цифру: ";
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
            std::cout << "Сложение = " << work_Fraction.adding_Fraction()
                <<"\n";
            std::cout << std::endl;

            break;

        case 4:
            std::cout << std::endl;
            system("cls");
            std::cout << "Вычитание = " << work_Fraction.subtracting_Fraction()
                << "\n";
            std::cout << std::endl;
      
            break;

        case 5:
            std::cout << std::endl;
            system("cls");
            std::cout << "Умножение = " << work_Fraction.multiplication_Fraction()
                << "\n";
            std::cout << std::endl;

            break;

        case 6:
            std::cout << std::endl;
            system("cls");
            std::cout << "Деление = " << work_Fraction.division_Fraction()
                << "\n";
            std::cout << std::endl;

            break;

        case 7:
            std::cout << std::endl;
            std::cout << "\n Завершене работы ! ";
            std::cout << std::endl;
            flag = true;

        break;

        default:
            break;
        }
    } while (flag = true);

    return 0;
}