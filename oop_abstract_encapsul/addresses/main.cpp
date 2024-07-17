#include <iostream>
#include <fstream>

class Address {
public:
    //* Default Constructor with parameters
    Address(void) {
        this->city = "abc";
        this->street = "efg";
        this->house = 0;
        this->apartment = 0;
//        count++;
//        std::cout << "create class " << count << std::endl;
    }
    ~Address(){ /*std::cout << "delete class " << count << std::endl; count--;*/}

    void set_address(std::string* city, std::string* street, int* house, int* apartment) {
        this->city = *city;
        this->street = *street;
        this->house = *house;
        this->apartment = *apartment;
        return;
    }
    void print_address(std::ofstream& fout) {
        fout << this->city << ", " << this->street << ", " << this->house << ", " << this->apartment;
        return;
    }
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

///////////////////////////////
int main(int argc, char** argv)
{
    setlocale(LC_ALL,"ru_RU");
    int size {0};

    std::ifstream fin("in.txt");
    std::ofstream fout("out.txt");

    if(!readingSizeFF (fin, size)){
        fin.close();
        return 1;
    }

    Address* array = new Address[size];

    if((!readingFF (fin, array, size)) || (!writingTF (fout, array, size))){
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
