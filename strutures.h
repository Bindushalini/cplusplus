#pragma once
#include<string>

class cow{
    private:
        string name;
        int age;
        unsigned char purpose;
    public:
        cow(int age_val, string name_val, unsigned char p);
    
        void display();
};
enum cow_purpose{dairy, ghee, pet, play};