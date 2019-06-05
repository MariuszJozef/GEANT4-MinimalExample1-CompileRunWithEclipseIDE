# GEANT4 - A Bare Bones Example with Eclipse IDE 
A rudimentary example to get started with GEANT4 simulations with Eclipse. The code herein consists only of a minimal main function; the essential classes: DetectorConstruction, PhysicsList and PrimaryGeneratorAction are not included yet - but it compiles and runs! These three essential classes will be added in the next example. Afterwards a sensitive detector will be build to read out information from radiation-matter interactions.

Here are pictorial instructions of how to compile GEANT4 with Eclipse IDE. (This information is not readily available so I include it here with the hope that it may be useful to others).

Following a successful GEANT4 installation on a Mac/Linux platorm, proceed as follows:

<img width="1436" alt="image" src="https://user-images.githubusercontent.com/51378175/58910435-ccb52f80-8715-11e9-8de2-f2e49dce5d62.png">

<img width="1040" alt="image" src="https://user-images.githubusercontent.com/51378175/58911376-f5d6bf80-8717-11e9-82bb-4c28bb30830c.png">

<img width="1126" alt="image" src="https://user-images.githubusercontent.com/51378175/58910770-aba10e80-8716-11e9-91c9-123f1ad48dc3.png">

<img width="1197" alt="image" src="https://user-images.githubusercontent.com/51378175/58911723-bc528400-8718-11e9-85e1-822822f73c1d.png">

<img width="1130" alt="image" src="https://user-images.githubusercontent.com/51378175/58910972-21a57580-8717-11e9-902c-d4d5a1c8d20a.png">

Be sure to build the project before continuing with the subsequent steps. 

<img width="1037" alt="image" src="https://user-images.githubusercontent.com/51378175/58913171-e78aa280-871b-11e9-85cc-cb76de99d380.png">

<img width="1042" alt="image" src="https://user-images.githubusercontent.com/51378175/58912916-7519c280-871b-11e9-9073-24e93ff1bce9.png">

<img width="1418" alt="image" src="https://user-images.githubusercontent.com/51378175/58912391-35061000-871a-11e9-9e6d-44d05ccd375f.png">

<img width="1431" alt="image" src="https://user-images.githubusercontent.com/51378175/58912828-41d73380-871b-11e9-9e1d-45cb61abb894.png">

<img width="1116" alt="image" src="https://user-images.githubusercontent.com/51378175/58913917-924f9080-871d-11e9-9199-ecccb7d1b240.png">

Notice that GEANT4 specific keywords: G4cout and G4endl have been used and no statement: using namespace std.

# N.B.
To avoid retyping these settings for every new project, instead of doing: File >> New >> C++ Project, you can simply compy this project. That way the compilation flags and location of header files will be set automatically. Nevertheless it is still necessary to manually set Run >> Run Configurations, as shown above.

<img width="716" alt="image" src="https://user-images.githubusercontent.com/51378175/58955855-40e6e600-879d-11e9-9e3c-1ae55bd8dce0.png">

