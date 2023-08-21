# MondrianBlocksProject
Abschlussprojekt MondrainBlocks von Luca Laderer und Kevin Lücke


Study project MondrianBlocks by Luca Laderer and Kevin Lücke

### Wie wird das Programm gestartet / How to execute?
Führen Sie die start_project.bat Datei aus.
Funktioniert mit dem g++ Compiler.
Um das Projekt mit CMake kompilieren zu können, befinden sich entsprechende CMakeLists.txt Dateien im Repository. Wenn Sie lediglich das Programm (Spiel) selbst kompilieren möchten, öffnen Sie nur den src Ordner in VSCode (MondrianBlocksProject/src) und wählen die darin enthaltene CMakeLists.txt aus. Wenn Sie die googletests kompilieren möchten, öffnen Sie das komplette Repository (MondrianBlocksProject) als Ordner in VSCode und wählen Sie die erste CMakeLists.txt für Ihr Projekt aus.


Execute the start_project.bat file.
Works with the g++ compiler.
To start the project with CMake, CMakeLists.txt files are provided in the repository. If you only want to compile the game itself, open the src folder (MondrianBlocksProject/src) via "Open Folder" in VSCode and select the CMakeLists.txt in the src folder. If you want to compile the googletests, open the whole repository (MondrianBlocksProject) via "Open Folder" in VSCode and select the first CMakeLists.txt, located in the main folder.

### Beschreibung der Implementierung / Description of the implementation
Wir haben uns dazu entschieden das Programm in folgende Klassen aufzuteilen: Blocks, Field, Menu, Rules, Template, Win.
Blocks: Diese Klasse koordiniert die Spielblöcke, also das Setzen, Entfernen, Rotieren und Anzeigen von Blöcken. 
Field: Die Field-Klasse erstellt das Feld und ermöglicht einen Zugriff darauf. 
Menu: Diese Klasse beinhaltet das Startmenü und ermöglicht die Auswahl des Spielmodus und der Vorlage.
Rules: Über die Rules-Klasse werden die Regeln beim Legen der Blöcke überprüft, also Grenzüberschreitung des Feldes oder Kollision mit anderen Blöcken.
Template: Die Template-Klasse stellt vordefinierte Templates zur Verfügung.
Win: Mit Hilfe der Win-Klasse werden die Gewinnbedingungen überprüft und die Siegesnachricht ausgegeben.


We decided to split the programm into the following classes: Blocks, Field, Menu, Rules, Template, Win.
Blocks: This class coordinates the blocks. This means set, delete, rotate and show available blocks.
Field: This class creates the field and allows access to it.
Menu: This class prints the Menu and lets the player choose the gamemode and the template.
Rules: The Rules class checks if the next block follows the rules - that means it checks if there is a crossing of the boundaries or a collision. 
Template: This class provides predefined templates.
Win: The Win class checks the win conditions and prints the win message.

### Erweiterungen / Extension
Wir haben uns für eine weitere Klasse entschieden, nämlich die Stats-Klasse. Diese gibt nach dem Sieg die Anzahl der benötigten Züge und die seit Level-Auswahl vergangene Zeit aus. Somit weiß der Spieler, wie lange er zum Beenden des Spiels benötigt hat.


We decided to create another class, namely Stats. At the end of the game Stats prints the total number of turns and also returns the time needed to solve the Level. With that the player knows how much time he needed. 
