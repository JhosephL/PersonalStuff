
package com.Java_Files;


import java.io.FileWriter;
import java.io.IOException;



public class FileWriting extends Abs_Decorator {


    public static final String CLASS_NAME = "FileWriting" ;
    public static final String METHOD_NAME = "mWriteFile" ;
    public static String msg = "This is a msg from '" + METHOD_NAME + "' inside '" + CLASS_NAME + "'." ;

    FileWriting ( String path , String message ) {
        FileWriting.msg = message;
    }

    public static final void mWriteFile ( String pathFile , String message ) {

        abs_mMethodIdentifier_INITIAL(abs_mDescription(CLASS_NAME,METHOD_NAME));

        try {

            FileWriter fileWriterObject = new FileWriter(pathFile);

            fileWriterObject.write (message) ;
            System.out.println ("The file was writen.") ;

            fileWriterObject.flush();
            System.out.println ("The output stream was flushed.") ;

            fileWriterObject.close();
            System.out.println ("The output stream was closed.") ;

        } catch (IOException e) {
            e.printStackTrace();
        }

        abs_mMethodIdentifier_FINAL(abs_mDescription(CLASS_NAME,METHOD_NAME));

    }


}
