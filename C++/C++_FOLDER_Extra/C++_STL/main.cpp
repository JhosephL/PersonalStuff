
// PREPROCESSOR DIRECTIVES
#include <iostream> // For 'cout' and 'endl' functions
//// For STL containers.
#include <array>
#include <list>
#include <vector>
#include <deque>

using namespace std ;



// GLOBAL STATEMENTS


// PROTOTYPES
void function_array ( void ) ;
void function_list ( void ) ;
void function_vector ( void ) ;
void function_deque ( void ) ;


/* MAIN FUNCTION DEFINITION */

int main ( void ) {

    cout << "\n\n\n" << endl ;

    
    function_array() ;

    cout << endl << endl ;

    function_list() ;

    cout << endl << endl ;

    function_vector() ;

    cout << endl << endl ;

    function_deque() ;
    

    cout << "\n\n\n\tALL RIGHT!\n\n\n\n" << endl ;

return 0;
}


// OTHER FUNCTIONS DEFINITION

void function_array ( void ) {

    cout << "ARRAY" ;
    
    // - Declaration - //
    //// Empty declaration.
    array<int,0> array_empty ;
    //// Sized declaration.
    array<int,5> array_sized ;
    
    // - Initialization - //
    array<int,5> array_initialized = { 1,2,3,4,5 } ;

    // - Assignment - //
    //// Filled assignment.
    array_sized.fill ( {0} ) ;
    //// Aggregate assignment.
    array_initialized = { 0,1,2,3,4 } ;

    // - Iterations - //
    array<int,5>::const_iterator arrayIterator ;
    array<int,5>::const_reverse_iterator arrayReverseIterator ;
    //// for-loop forward.
    cout << "\n\n\tarray_empty:" << endl ;
    for ( int counter = 0 ; counter <= array_empty.size() ; counter++ )
        if ( ! array_empty.empty() )
            cout << '\t' << array_empty.at(counter) << ' ' ;
        else
            cout << "\t_" ;
    //// for-loop backward.
    cout << "\n\n\tarray_empty:" << endl ;
    for ( int counter = array_empty.size() ; counter >= 0 ; counter-- )
        if ( ! array_empty.empty() )
            cout << '\t' << array_empty[counter] << ' ' ;
        else
            cout << "\t_" ;
    //// for-each.
    cout << "\n\n\tarray_sized:" << endl ;
    for ( const int& iterator : array_sized )
        cout << '\t' << iterator << ' ' ;
    //// Iterator from Head to Tail.
    cout << "\n\n\tarray_initialized:" << endl ;
    for ( arrayIterator = array_initialized.cbegin() ; arrayIterator != array_initialized.end() ; arrayIterator++ )
        cout << '\t' << *arrayIterator << ' ' ;
    //// Reverse iterator from Head to Tail.
    cout << "\n\n\tvector_initialized:" << endl ;
    for ( arrayReverseIterator = array_initialized.crend()-1 ; arrayReverseIterator != array_initialized.crbegin()-1 ; arrayReverseIterator-- )
        cout << '\t' << *arrayReverseIterator << ' ' ;
    //// Iterator from Tail to Head.
    cout << "\n\n\tvector_initialized:" << endl ;
    for ( arrayIterator = array_initialized.end()-1 ; arrayIterator != array_initialized.cbegin()-1 ; arrayIterator-- )
        cout << '\t' << *arrayIterator << ' ' ;
    //// Reverse iterator from Tail to Head.
    cout << "\n\n\tvector_initialized:" << endl ;
    for ( arrayReverseIterator = array_initialized.crbegin() ; arrayReverseIterator != array_initialized.crend() ; arrayReverseIterator++ )
        cout << '\t' << *arrayReverseIterator << ' ' ;

    cout << endl << endl ;

    // - Operations - //
    //// Swap: container.
    bool bool_lastElementsEqual = false ;
    arrayIterator = prev ( array_initialized.end() ) ;
    bool_lastElementsEqual = ( *arrayIterator == array_initialized.back() ) ;
    cout << "\tLast elements equal?: " << boolalpha << bool_lastElementsEqual << endl ;
    array_initialized.swap ( array_sized ) ;
    bool_lastElementsEqual = ( *arrayIterator != array_sized.back() ) ;
    cout << "\tLast elements equal?: " << boolalpha << bool_lastElementsEqual << endl ;

}


void function_list ( void ) {

    cout << "LIST" ;

}


void function_vector ( void ) {

    cout << "VECTOR" ;

    // - Declarations - //
    //// Empty declaration.
    vector<int> vector_empty ;
    //// Sized declaration.
    vector<int> vector_sized(5) ;

    // - Initialization - //
    vector<int> vector_initialized = { 1,2,3,4,5 } ;

    // - Assignment - //
    vector_initialized = { 0,1,2,3,4 } ;

    // - Iterations - //
    vector<int>::iterator vectorIterator ;
    vector<int>::reverse_iterator vectorReverseIterator ;
    //// for-loop forward.
    cout << "\n\n\tvector_empty:" << endl ;
    for ( int counter = 0 ; counter <= vector_empty.size() ; counter++ )
        if ( ! vector_empty.empty() )
            cout << '\t' << vector_empty.at(counter) << ' ' ;
        else
            cout << "\t_" ;
    //// for-loop backward.
    cout << "\n\n\tvector_empty:" << endl ;
    for ( int counter = vector_empty.size() ; counter >= 0 ; counter-- )
        if ( ! vector_empty.empty() )
            cout << '\t' << vector_empty[counter] << ' ' ;
        else
            cout << "\t_" ;
    //// for-each.
    cout << "\n\n\tvector_sized:" << endl ;
    for ( const int& iterator : vector_sized )
        cout << '\t' << iterator << ' ' ;
    //// Iterator from Head to Tail.
    cout << "\n\n\tvector_initialized:" << endl ;
    for ( vectorIterator = vector_initialized.begin() ; vectorIterator != vector_initialized.end() ; vectorIterator++ )
        cout << '\t' << *vectorIterator << ' ' ;
    //// Reverse iterator from Head to Tail.
    cout << "\n\n\tvector_initialized:" << endl ;
    for ( vectorReverseIterator = vector_initialized.rend()-1 ; vectorReverseIterator != vector_initialized.rbegin()-1 ; vectorReverseIterator-- )
        cout << '\t' << *vectorReverseIterator << ' ' ;
    //// Iterator from Tail to Head.
    cout << "\n\n\tvector_initialized:" << endl ;
    for ( vectorIterator = vector_initialized.end()-1 ; vectorIterator != vector_initialized.begin()-1 ; vectorIterator-- )
        cout << '\t' << *vectorIterator << ' ' ;
    //// Reverse iterator from Tail to Head.
    cout << "\n\n\tvector_initialized:" << endl ;
    for ( vectorReverseIterator = vector_initialized.rbegin() ; vectorReverseIterator != vector_initialized.rend() ; vectorReverseIterator++ )
        cout << '\t' << *vectorReverseIterator << ' ' ;

    cout << endl << endl ;

    // - Operations - //
    //// Insert: iterator, value.
    vectorIterator = vector_initialized.end() ;
    vectorIterator = vector_initialized.insert ( vectorIterator , 5 ) ;
    cout << "\tThe value returned by the operation is: " << *vectorIterator << endl ;
    //// Insert range: position, container's range.
    vectorIterator = next ( vector_initialized.begin() ) ;
    vectorIterator = vector_initialized.insert ( vectorIterator , vector_sized.begin() , vector_sized.end() ) ;
    cout << "\tThe value returned by the operation is: " << *vectorIterator << endl ;
    //// Push back: value.
    vector_initialized.push_back ( 6 ) ;
    vectorIterator = prev ( vector_initialized.end() ) ;
    cout << "\tThe last element of the container is: " << *vectorIterator << endl ;
    //// Pop back: none.
    vector_initialized.pop_back() ;
    vectorIterator = prev ( vector_initialized.end() ) ;
    cout << "\tThe last element of the container is: " << *vectorIterator << endl ;
    //// Erase: position.
    vectorIterator = prev ( vector_initialized.end() ) ;
    vectorIterator = prev ( vector_initialized.erase ( vectorIterator ) ) ;
    cout << "\tThe last element of the container is: " << *vectorIterator << ", " << boolalpha << ( *vectorIterator == vector_initialized.back() ) << endl ;
    //// Erase: range.
    vectorIterator = vector_initialized.begin() ;
    vectorIterator = vector_initialized.erase ( vectorIterator , vectorIterator+5 ) ;
    cout << "\tThe first element of the container is: " << *vectorIterator << ", " << boolalpha << ( *vectorIterator == vector_initialized.front() ) << endl ;
    //// Resize: new size, values assigment.
    vector_empty.resize ( 5 , 0 ) ;
    //// Swap: container.
    bool bool_lastElementsEqual = false ;
    vectorIterator = prev ( vector_initialized.end() ) ;
    bool_lastElementsEqual = ( *vectorIterator == vector_initialized.back() ) ;
    cout << "\tLast elements equal?: " << boolalpha << bool_lastElementsEqual << endl ;
    vector_initialized.swap ( vector_empty ) ;
    bool_lastElementsEqual = ( *vectorIterator == vector_empty.back() ) ;
    cout << "\tLast elements equal?: " << boolalpha << bool_lastElementsEqual << endl ;
    //// Clean: none.
    vector_empty.clear() ;
    bool bool_containerEmpty = vector_empty.empty() ;
    cout << "\tContainer empty?: " << boolalpha << bool_containerEmpty << endl ;

}


void function_deque ( void ) {

    cout << "DEQUE" ;

}




// To rest -->      