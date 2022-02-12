
package com.Java_Files ;


// Imports



public class Java_Files {

    // @param args the command line arguments


    public static void main ( String[] args ) {

        final String PATH = "path\\testFile.txt";

        FileCreation.mCreateFile(PATH);

        FileWriting.mWriteFile(PATH,FileWriting.msg);

        FileReading.mReadFile(PATH);

    }


}


// To rest --->-->->    