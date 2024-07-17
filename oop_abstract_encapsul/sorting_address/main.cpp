#include <iostream>
#include <fstream>
#include <string>
using namespace std;
    ////////////////////////////////////////////////////////////////////////////////////////////////
class Address {
public:
    ////////////////////////////////////////////////////////////////////////////////////////////////
    std::string get_city(void) {
        return city;
    }
    std::string get_street(void) {
        return street;
    }
    int get_house(void) {
        return house;
    }
    int get_apartment(void) {
        return apartment;
    }
    void print_address(std::ofstream& fout) {
        fout << this->city << ", " << this->street << ", " << this->house << ", " << this->apartment;
        return;
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////
    std::string set_city(const std::string& city) {
        return this->city = city;
    }
    std::string set_street(const std::string& street) {
        return this->street = street;
    }
    int set_house(int house) {
        return this->house = house;
    }
    int set_apartment(int apartment) {
        return this->apartment = apartment;
    }
    void set_address(std::string* city, std::string* street, int* house, int* apartment) {
        this->city = *city;
        this->street = *street;
        this->house = *house;
        this->apartment = *apartment;
        return;
    }
    //* Default Constructor with parameters
    Address(void) {
        this->city = "abc";
        this->street = "efg";
        this->house = 1;
        this->apartment = 1;
//        count++;
//        std::cout << "create class " << count << std::endl;
    }
    ~Address(void){ /*std::cout << "delete class " << count << std::endl; count--;*/}
private:
    std::string city {""};
    std::string street {""};

    short int house {0};
    short int apartment {0};
//    short int count {0};
};

//* reading_from_a_file
bool readingSizeFF (std::ifstream& fin, int& size) {
    if (!(fin.is_open())) {
        std::cout << "Error reading from file." << std::endl;
        return false;
    }
    if (!(fin >> size)) {
        std::cout << "Error reading size from file." << std::endl;
        return false;
    }
    if (0 >= size) {
        std::cout << "Negative or zero size." << std::endl;
        return false;
    }
    return true;
}

//* reading_from_a_file
bool readingFF (std::ifstream& fin, Address* array, int& size) {
    std::string c {""};
    std::string s {""};
    int h {0};
    int a {0};

    if (!(fin.is_open())) {
        std::cout << "Error reading from file2." << std::endl;
        return false;
    }
    std::string str = "abc";
    for (int x = 0; (x < size); x++) {
        fin >> c >> s >> h >> a;
        array[x].set_address( &c, &s, &h, &a);
    }
    fin.close();
    return true;
}

bool sorting (Address* array, const int size) {
    bool sorted {false};
    do
    {
        sorted = false;
        for (int i = 0; i < (size-1); i++)
        {
            if (array[i].get_city() < array[i+1].get_city())
            {
                std::string c = array[i].get_city();
                std::string s = array[i].get_street();
                int h = array[i].get_house();
                int a = array[i].get_apartment();

                array[i].set_city     (array[i+1].get_city());
                array[i].set_street   (array[i+1].get_street());
                array[i].set_house    (array[i + 1].get_house());
                array[i].set_apartment(array[i + 1].get_apartment());

                array[i+1].set_city(c);
                array[i+1].set_street(s);
                array[i+1].set_house(h);
                array[i+1].set_apartment(a);

                sorted = true;
            }
        }
    } while (sorted);

    if (sorted) {
        std::cout << "Failed to sort!" << std::endl;
        return false;
    }
    return true;
}

//* writing_to_a_file
bool writingTF (std::ofstream& fout, Address* array, const int size) {
    if (!(fout.is_open())) {
        std::cout << "Failed to write to file out.txt." << std::endl;
        return false;
    }

    fout << size << std::endl;
    for (int x = (size-1); 0 <= x ; x--) {
        array[x].print_address(fout);
        fout << std::endl;
    }
    fout.close();
    return true;
}

     ////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv) {
    setlocale(LC_ALL, "ru_RU");
//    cout << "Hello World!" << endl;

    int size {0};

    std::ifstream fin("in.txt");
    std::ofstream fout("out.txt");

    if(!readingSizeFF (fin, size)){
        fin.close();
        return 1;
    }

    Address* array = new Address[size];

    if((!readingFF (fin, array, size)) || (!sorting (array, size)) || (!writingTF (fout, array, size))){
        fin.close();
        fout.close();
        delete[] array;
        array = nullptr;
        return 1;
    }

    delete[] array;
    array = nullptr;
    return 0;
}
    //* Thanks for the tutorial!
