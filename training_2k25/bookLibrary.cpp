#include<iostream>
#include<vector>
#include<string>
using std::cout;
using std::cin;
using std::endl;
class Book
{
    public:
        std::vector<std::string> title_arr;
        std::vector<std::string> author_arr;
    private:
        std::vector<bool> isAvailable;
    public:
        Book(std::vector<std::string>input_title_arr, std::vector<std::string> input_author_arr, std::vector<bool>isAvailable_input): title_arr(input_title_arr), author_arr(input_author_arr), isAvailable(isAvailable_input) {
            cout << "Book constructor called" << endl;
        }
        std::string borrowBook(std::string bookName){
            for(int i=0;i<title_arr.size();i++){
                if(title_arr[i] == bookName){
                if(isAvailable[i] == true)
                {
                    isAvailable[i] = false;
                    return "";
                }
                else{
                    return "Book Not Available";
                }
                }
            }
            return "Book Not Available";
        }
        void returnBook(std::string bookName){
            for(int i=0;i<title_arr.size();i++){
                if(title_arr[i] == bookName){isAvailable[i] = true;}
            }
        }
        void getAvailability(std::string bookName){
            for(int i=0;i<title_arr.size();i++){
                if(title_arr[i] == bookName)
                {
                    cout<<(isAvailable[i]? "true":"false")<<endl;
                }
            }
        }        
};
int main(){
    std::vector<std::string> title_arr = { "Sherlock_Holmes", "Frankenstein", "King_Arthur_and_the_Round_Table", "Treasure_Island" };
    std::vector<std::string> author_arr = {"Arthur_Conan_Doyle", "Mary_Shelley", "Roger_Lancelyn_Green", "Robert_Louis_Stevenson" };
    std::vector<bool> isAvailable = { false, true, false, false };
    Book book(title_arr, author_arr, isAvailable);
    std::vector<std::vector<std::string>> inputVector;
    int n;
    cout<<"enter number of inputs"<<endl;
    cin>>n;
    for (int i=0;i<n;i++){
        std::vector<std::string> inputVector(2);
        std::cin>>inputVector[0]>>inputVector[1];
        if(inputVector[0] == "1"){
            cout<<book.borrowBook(inputVector[1]);
        } else if(inputVector[0] == "2")
        {
            book.returnBook(inputVector[1]);
        } else if(inputVector[0] == "3")
        {
            book.getAvailability(inputVector[1]);
        } 
    }
    return 0;
}