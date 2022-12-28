
// Preprocessor directives
#include <iostream>
#include <cstring>

using namespace std ;



// Global statements
void ALL_FROM () {

    // https://www.w3resource.com/c-programming-exercises/recursion/index.php

}


// Prototypes
int fEx1(int number);
int fEx2(int number,int stop);
int fEx3(int number,int stop);
int fEx4(int a,int b,int limit);
int * fEx5(int array[],int size,int i,int fill);
void fEx6(int*p_array,int i,int size);
int fEx7(int number,int i);
int fEx8(int number,int answer);
int fEx9 (int array[],int size,int i_array,int num,int answer,int flag,int flag2);


int main () {


    cout << "\n\n\n\n()()()()()\tRECURSION EXERCISES\t()()()()()\n\n\n\n" ;


    int int_aux = fEx1(3) ;
    cout << int_aux ;


    cout << "\n\n\n\n()()()()()\tEND OF RECURSION EXERCISES\t()()()()()\n\n\n\n" << endl ;


return 0;
}


int fEx1 (int number) {

    if(number>1){
        cout << "\t";
        return number*fEx1(number-1);
    }
    else{
        return 1;
    }
    
}

int fEx2 (int number,int stop) {

    if(number<stop){
        cout << number;
        return fEx2(number+1,stop);
    }
    else{
        return 0;
    }

}

int fEx3 (int from,int toward){

    if(from<=toward){
        return from+fEx3(from+1,toward);
    }
    else{
        return 0;
    }

}

int fEx4 (int a,int b,int limit) {

    if(b<limit){
        int aux = a + b; cout << aux << endl;
        b = a;
        a = aux;
        return fEx4(a,b,limit);
    }
    else{
        return 0;
    }

}

int * fEx5 (int array [],int size,int i,int fill) {
    
    if(i<size){
        array[i] = fill;
        return fEx5(array,size,i+=1,fill+=2);
    }
    else{
        return 0;
    }

}

void fEx6 (int*brray,int i,int size) {

    if(i<size){
        cout << brray[i] << endl;
        fEx6(brray++,i+=1,size);
    }

}

int fEx7 (int number,int counter) {

    if(number/10!=0){
        return fEx7(number/10,counter+=1);
    }
    else{
        return counter;
    }

}

int fEx8 (int number,int answer) {

    if(number!=0){
        answer+=(number%10);
        number/=10;
        return fEx8(number,answer);
    }
    else{
        return answer;
    }

}

int fEx9 (int array[],int size,int i_array,int trying_number,int result,int flag,int end_flag) {
    
    cout << "\nsize: " << size << endl;
    
    if(i_array<size){
        cout << "0. i_array: " << i_array << endl;
        if(array[i_array]%trying_number==0){
            i_array++; cout << "1. i_array: " << i_array << endl;
            flag++; cout << "2. flag++: " << flag << endl;
        }
        else{
            i_array=0; cout << "3. i_array: " << i_array << endl;
            trying_number++; cout << "4. trying_number++: " << trying_number << endl;
            flag=0; cout << "5. flag++: " << flag << endl;
        }

        if(flag==size){
            result*=trying_number; cout << "6. result*=trying_number: " << result << endl;
            for(int i=0; i<size ;i++){
                array[i]/=trying_number; cout << "7. array[i]/=trying_number: " << array[i] << endl;
            }
            for(int i=0; i<size ;i++){
                int aux = array[i]/trying_number; cout << "8. aux: " << aux << endl;
                if(aux*trying_number != array[i] || array[i]/1==array[i]){ //  || array[i]/trying_number==1
                    cout << "9. if(aux*trying_number != array[i]): " << aux*trying_number << " != " << array[i] << endl;
                    end_flag++; cout << "10. end_flag: " << end_flag << endl;
                }
            }
            trying_number++; cout << "11. trying_number++: " << trying_number << endl;
            i_array=0; cout << "12. i_array: " << i_array << endl;
            flag=0; cout << "13. flag: " << flag << endl;
        }

        cout << end_flag << endl;

        if(end_flag!=0){
            i_array=size; cout << "14. i_array: " << i_array << endl;
            end_flag=0; cout << "15. end_flag: " << end_flag << endl;
        }
        else{
            end_flag=0; cout << "16. end_flag: " << end_flag << endl;
        }

        return fEx9(array,size,i_array,trying_number,result,flag,end_flag);
    }
    else{
        return result;
    }

}



// To rest -->      