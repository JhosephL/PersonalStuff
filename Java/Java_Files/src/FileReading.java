
// package


import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;



public class FileReading extends Abs_Decorator {


    public static final String CLASS_NAME = "FileReading" ;
    public static final String METHOD_NAME = "mReadFile" ;
    public static String content ;

    FileReading ( String path ) {
        // no statements
    }

    public static final String mReadFile ( String pathFile ) {

        abs_mMethodIdentifier_INITIAL(abs_mDescription(CLASS_NAME,METHOD_NAME));

        try {

            File fileObject = new File(pathFile) ;

            Scanner dataReader = new Scanner(fileObject) ;

            while (dataReader.hasNextLine()) {
                FileReading.content = dataReader.nextLine() ;
                Boolean reading = !(content.isEmpty());
                System.out.println ("READING?: " + String.valueOf(reading)) ;
            }

            dataReader.close();

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }

        mReader(FileReading.content);

        abs_mMethodIdentifier_FINAL(abs_mDescription(CLASS_NAME,METHOD_NAME));

        return FileReading.content ;

    }

    private static final void mReader ( String fileContent ) {

        System.out.print("*** THE CONTENT OF A FILE ***\n\n");
        System.out.print (fileContent) ;
        System.out.println("\n\n*** THE CONTENT OF A FILE ***");

    }


}
