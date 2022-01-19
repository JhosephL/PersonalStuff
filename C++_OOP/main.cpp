
#include <iostream> // COUT function
#include <string> // TO_STRING function

using std::string; // to use STRING
using std::to_string; // to use TO_STRING ( from INT toward STRING )



void ALL_FROM () {

    // https://www.youtube.com/watch?v=wN0x9eZLix4&t=950s

}


class cAbs_ToDo { // Abstract class

    virtual string mAction () = 0 ;

};


class cProduction : cAbs_ToDo {

    protected:

        string move;

    public:

            // CONSTRUCTOR
            cProduction ( string move_inC ) {

                move = move_inC ;

            }

            // Override
            string mAction () {

                return "action: " + move ;

            }

};

class cUser : public cProduction {
// With public statement, any object from this class can access to its inherited class

    private:

        string name;
        string id;
        int user;

    public:

        // CONSTRUCTOR
        cUser ( string name_inC , string id_inC , int user_inC , string move_ByInh ) 
        : cProduction ( move_ByInh )
        {

            name = name_inC ;
            id = id_inC ;
            user = user_inC ;

        }

        // SETS
        void setName ( string name_inS ) {

            name = name_inS ;

        }

        void setId ( string id_inS ) {

            id = id_inS ;

        }

        void setUser ( int user_inS ) {

            user = user_inS ;

        }

        // GETS
        string getName () {

            return name ;

        }

        string getId () {

            return id ;
            
        }

        int getUser () {

            return user ;

        }

        // Override

        // METHODS
        void mNumer_user () {

            std::cout << "#: " << user << std::endl ;

        }

        // toString
        string toString () {

            return "name: " + name + ". ID: " + id + ". user: " + to_string(user) + ". " + mAction() ;
            
        }

};

class cComputer : public cProduction {
// With public statement, any object from this class can access to its inherited class

    public :

        string name;
        string driver;
        float storage;
        float ram;
        string motherboard;
        string cpu;
        string gpu;

            // CONSTRUCTOR
            cComputer ( string name_inC , string move_ByInh ) 
            : cProduction ( move_ByInh )
            {
                
                name = name_inC ;

            }
            
            // SETS

            // GETS
            
            // Override

            // METHODS
            void mFormal_driver () {

                std::cout << name << "'s driver: " << driver << std::endl ;

            }

            //toString
            string toString () {

                return "name: " + name + ". " + move ;

            }

};


int main() {


    std::cout << "\n\n\n\no0o0o0o0\tOPP. C++\to0o0o0o0\n\n\n\n" ;


    cUser u1 = cUser ( "AAA" , "123" , 1 , "Typing" ) ;
    std::cout << u1.toString() << std::endl ;
    u1.setId ( "111" ) ;
    std::cout << u1.toString() << std::endl ;

    cProduction * p_cP = & u1 ;
    p_cP -> mAction() ; // p_cP -> mAction() ; == *(p_cP).mAction() ;


    std::cout << std::endl ;

    
    cComputer cp1 = cComputer ( "A1" , "Processing" ) ;

    cp1.driver = "SDD" ;
    cp1.mFormal_driver() ;
    std::cout << cp1.toString() ;

    cComputer * p_cC = & cp1 ;
    p_cC -> mAction() ; // p_cC -> mAction() ; == *(p_cC).mAction() ;


    std::cout << "\n\n\n\no0o0o0o0\tOOP END\t\to0o0o0o0\n\n\n\n" << std::endl ;


return 0;
}




// To rest --->     