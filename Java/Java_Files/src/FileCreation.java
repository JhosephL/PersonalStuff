
// package


import java.io.File;
import java.io.IOException;



public class FileCreation extends Abs_Decorator {


    public static final String CLASS_NAME = "FileCreation" ;
    public static final String METHOD_NAME = "mCreateFile" ;

    FileCreation ( String path ) {
        // no statements
    }

    public static final void mCreateFile ( String pathFile ) {

        abs_mMethodIdentifier_INITIAL(abs_mDescription(CLASS_NAME,METHOD_NAME));

        try {

            File fileObject = new File(pathFile) ;

            if ( fileObject.createNewFile() ) {
                System.out.println ("The file has been created.") ;
                mCreateFileINFO(fileObject);
            } else if ( fileObject.exists() ) {
                System.out.println ("The file had already been created.") ;
                mCreateFileINFO(fileObject);
            } else {
                System.out.println ("Something else has happened with: " + fileObject) ;
            }

        } catch (IOException e) {
            e.printStackTrace();
        }

        abs_mMethodIdentifier_FINAL(abs_mDescription(CLASS_NAME,METHOD_NAME));

    }

    private static final void mCreateFileINFO ( File fileObject ) {

        System.out.println ("FILE: " + fileObject.getName()) ;
        System.out.println ("PATH: " + fileObject.getPath()) ;
        System.out.println ("READ?: " + fileObject.canRead()) ;
        System.out.println ("WRITE?: " + fileObject.canWrite()) ;
        System.out.println ("LENGTH (bytes): " + fileObject.length()) ;

    }


}
