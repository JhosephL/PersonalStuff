
-- Tables are comprised by FIELDS and RECORDS.
-- Each table creation contains HEADER.


---- TABLES ----

CREATE TABLE country (

    id INTEGER PRIMARY KEY ,

    name TEXT ,
    capital TEXT

) ;

CREATE TABLE color (

    id INTEGER PRIMARY KEY ,

    name TEXT

) ;

CREATE TABLE flag (

    country_id INTEGER ,
    color_id INTEGER ,

    FOREIGN KEY ( country_id ) REFERENCES country ( id ) ,
    FOREIGN KEY ( color_id ) REFERENCES color ( id )

) ;

CREATE TABLE border (

    id INTEGER PRIMARY KEY ,
    country_id INTEGER ,
    border_country_id INTEGER ,

    FOREIGN KEY ( country_id ) REFERENCES country ( id ) ,
    FOREIGN KEY ( border_country_id ) REFERENCES country ( id ) ,

    UNIQUE ( country_id , border_country_id )

) ;


---- RECORDS ----

INSERT INTO country ( id , name , capital ) VALUES
    ( 1 , 'Morrocco' , 'Rabat' )
;

INSERT INTO color ( id , name ) VALUES
    ( 1 , 'red' ) ,
    ( 2 , 'green' )
;

INSERT INTO flag ( country_id , color_id ) VALUES
    ( 1 , 1 ) ,
    ( 1 , 2 )
;

INSERT INTO country ( id , name , capital ) VALUES
    ( 2 , 'Western Sahara' , 'Laayoune' ) ,
    ( 3 , 'Algeria' , 'Algiers' )
;

INSERT INTO border ( country_id , border_country_id ) VALUES
    ( 1 , 2 ) ,
    ( 1 , 3 )
;


---- QUERIES ----

SELECT * FROM country ;
SELECT id FROM country ;
SELECT id,name FROM country ;




---- EOF ----