
// package


// imports



public abstract class Abstr_Verbatim {


    // TO DESIGN A MODULE
    public final void abstr_mForModules ( int number ) {
    
        System.out.println (". . . . . . . . " + "MODULE " + Integer.toString(number) + " . . . . . . . .") ;
    
    }

    public final void abstr_mModuleDescription ( String text ) {
    
        System.out.println (text) ;
    
    }

    public final void abstr_mSeparation ( ) {
    
        System.out.println ("\n----------------------------------------------------------------\n") ;
    
    }

    // TO STRUCTURE A MODULE
    public final void abstr_mPresentation ( int number,String text ) {
    
        abstr_mForModules(number);
        abstr_mModuleDescription(text);
        System.out.println(". . . . . . . . . . . . . . . . . . . .");
        System.out.println("\n\n");
    
    }

    public void abstr_mBody ( ) {  } ;

    public final void abstr_mConclusion ( String text,int number ) {
    
        System.out.println("\n\n");
        System.out.println(". . . . . . . . . . . . . . . . . . . .");
        abstr_mModuleDescription(text);
        abstr_mForModules(number);
    
    }

    // TO ARRANGE A MODULE
    public final void abstr_mSubstance ( int number,String text ) {
    
        abstr_mPresentation(number,text);
        abstr_mBody();
        abstr_mConclusion(text,number);
    
    }

    // TO DETACH MODULES
    public static final void abstr_mDetacher ( ) {
    
        System.out.print ("\n\n\n\n") ;
    
    }


}
