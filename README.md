# spacecraftDB
Implemented the linked lists Data structure for solving a Database about Planets and Stars, distinguished planets and stars on the basis of their frequency and black body radiation. 


Input: Distance from Earth and Intensity.
Output: Status as a planet or a star with its corresponding name.

ABSTRACT DATA TYPE:-

Objects: A finite ordered list of data's.

Functions:
For all signals_received ∈ inputPointer, stored_data ∈ dataPointer.

 Datapointer search(x,y) ::= if(x==y)
return the position at which it is present in database;
. else return NULL;

 Void add() ::= Add the new data received into the existing database.

 Float calculate() ::= Calculate the surface temperature of star or planet using the
. wavelength.
. temperature=2898000/wavelength;
. return temperature;

 Float newdistance() ::= Calculate the distance after a time interval and update the existing distance
of star or planet in our existing database.
. new_distance=old_distance+(speed*time*1.057e-13);
. return new_distance;

 Void presentdata() ::= Contains the informations received till date and keeps updating as and when
new planet or new star is detected with its corresponding details.

 Void display(distance) ::= if(distance>=450)
Displays that it is a planet and its corresponding details.
. else
Display that it is a star and its corresponding details.

RESULTS AND DISCUSSIONS:-

Case 1: When the heavenly body detected is
already present in our database.
Signals received: Distance of the heavenly body with respect to earth and the intensity of light emitted by that heavenly body.
Processing: Surface temperature is calculated.
Output: Whether it is a planet or a star is displayed and other information like it's Name, Distance, Temperature and Wavelength of radiation is shown as output.

Case 2: When the heavenly body detected is not present in our existing database.
Signals Received: Distance of the heavenly body with respect to earth and the intensity of light emitted by that heavenly body.
Processing: The heavenly body wasn’t found in our database. Hence it asks to suggest a new name for this heavenly body and it checks the speed of this heavenly body.
Result: This heavenly body gets added in our database.


The next time when we detect the same heavenly body, it searches our database and correctly displays the details of heavenly bodies.
