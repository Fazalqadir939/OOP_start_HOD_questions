#ifndef name_H
#define name_H
#include<iostream>
class Name{
    char * first_name;
    char * last_name;
    char middle_name;
    public:
    Name(const char*,const char, const char*);
    Name(const Name&);
    Name();
    char * getFirstName() const;
    char  getMiddleName() const;
    char * getLastName() const; 
    char * setFirstName(char *);
    char  setMiddleName(char);
    char * setLastName(char*); 
    Name& Name::operator=(const Name&);
    Name& Name::operator==(const Name&);

    ~Name();
};

   std::ostream& operator<<(std::ostream & os,const Name & _name);
   std::istream& operator>>(std::istream & is,const Name & _name);

#endif