#include "name.h"

Name::Name(const char * f_name, const char mid, const char * l_name)
{
    int len{};
    while(f_name[len]!='\0'){++len;}
    first_name = new char[len+1];
    for(int i=0;i<=len;++i){
        first_name[i]=f_name[i];
    }
    middle_name = mid;
    len=0;
    while(l_name[len]!='\0'){++len;}
    last_name = new char[len+1];
    
    for(int i=0;i<=len;++i){
        last_name[i]=l_name[i];
    }
}
int len(char * f_name){
    int len{};
    while(f_name[len]!='\0'){++len;}
    return len;
}

Name::Name(const Name& other) {
     int len_f{};
    while(other.first_name[len_f] != '\0'){ ++len_f; }
    first_name = new char[len_f + 1];
    for(int i = 0; i <= len_f; ++i){
        first_name[i] = other.first_name[i];
    }
    middle_name = other.middle_name;
    int len_l{};
    while(other.last_name[len_l] != '\0'){ ++len_l; }
    last_name = new char[len_l + 1];
    for(int i = 0; i <= len_l; ++i){
        last_name[i] = other.last_name[i];
    }
}

Name::~Name() {
    delete[] first_name;
    delete[] last_name;
}
char * Name::getFirstName() const{
    return first_name;
}
char  Name::getMiddleName() const{
    return middle_name;
}
char * Name::getLastName() const{
    return last_name;
} 

char * setFirstName(char * FN){

}
    char  setMiddleName(char);
    char * setLastName(char*);


Name& Name::operator=(const Name& rhs) {
    if (this != &rhs) {
        char  temp = *(rhs.first_name);
        *first_name = temp;
        middle_name = rhs.middle_name;
        temp = *(rhs.last_name);
        *last_name = temp;
    }
    return *this;
}
Name& Name::operator==(const Name& naam){
    int length = len(first_name);
    int lengt = len(naam.first_name);
    int i{};
    
}


std::ostream &operator<<(std::ostream &os, const Name &_name)
{
    os << _name.getFirstName() << " "<< _name.getMiddleName() << ". " << _name.getLastName();
    return os;
}

std::istream& operator>>(std::istream & is,const Name & _name){
     char * _first_name;
    char * _last_name;
    char _middle_name;
    
}
