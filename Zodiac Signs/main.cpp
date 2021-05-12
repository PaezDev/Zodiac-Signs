//  This program will determine your zodiac sign based on your birthday

#include <iostream>
#include <limits>

using namespace std;

int main(){
    //  declare variables
    unsigned bMonth, bDay;
    int input = 2, c = 0;
    
    //  print explanation of program
    cout << "\n\t\t\t---This program will determine your zodiac sign\n\t\t\tbased on your birthday and will describe your key traits---\n\n";
    //  create menu and error checking sequence
    while (input == 2 || isalpha(input)){
    cout << "PRESS 0 TO CONTINUE\nPRESS 1 TO QUIT\n";
    cin >> input;
        if (cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\t\tThis Entry Is Invalid\n";
            c++;
        }
        if (c == 1){
            cout << "\t\tEntry Invalid\n\t\tProgram Closing...\n";
            return 0;
        }
        if (input == 1){
            return 0;
        }
        
    }

    cout << "\n\n\t\t\t\t\t\t\t---WELCOME!!!---\n";
            
//  Ascii art
    cout << "      ,   ,\n"
"    ,-`{-`/\n"
" ,-~ , \\ {-~~-,\n"
",~  ,   ,`,-~~-,`,\n"
",`   ,   { {      } }                                             }/\n"
";     ,--/`\\ \\    / /                                     }/      /,/\n"
";  ,-./      \\ \\  { {  (                                  /,;    ,/ ,/\n"
"; /   `       } } `, `-`-.___                            / `,  ,/  `,/\n"
"\\|         ,`,`    `~.___,---}                         / ,`,,/  ,`,;\n"
"`        { {                                     __  /  ,`/   ,`,;\n"
"   /   \\ \\                                 _,`, `{  `,{   `,`;`\n"
"  {     } }       /~\\         .-:::-.     (--,   ;\\ `,}  `,`;\n"
"  \\\\._./ /      /` , \\      ,:::::::::,     `~;   \\},/  `,`;     ,-=-\n"
"   `-..-`      /. `  .\\_   ;:::::::::::;  __,{     `/  `,`;     {\n"
"              / , ~ . ^ `~`\\:::::::::::<<~>-,,`,    `-,  ``,_    }\n"
"           /~~ . `  . ~  , .`~~\\:::::::;    _-~  ;__,        `,-`\n"
"  /`\\    /~,  . ~ , '  `  ,  .` \\::::;`   <<<~```   ``-,,__   ;\n"
" /` .`\\ /` .  ^  ,  ~  ,  . ` . ~\\~                       \\\\, `,__\n"
"/ ` , ,`\\.  ` ~  ,  ^ ,  `  ~ . . ``~~~`,                   `-`--,\\\n"
"/ , ~ . ~ \\ , ` .  ^  `  , . ^   .   , ` .`-,___,---,__          ``\n"
"/` ` . ~ . ` `\\ `  ~  ,  .  ,  `  ,  . ~  ^  ,  .  ~  , .`~---,___\n"
"/` . `  ,  . ~ , \\  `  ~  ,  .  ^  ,  ~  .  `  ,  ~  .  ^  ,  ~  .  `-,\n\n";
    
    //  Description of Zodiac Signs
    cout << "A Zodiac symbol is based on an imaginary band\nin the heavens centered on the ecliptic\nthat encompasses the apparent paths of all the planets\nand is divided into 12 constellations\nor signs each taken for astrological purposes\nto extend 30 degrees of longitude. \n\n\n";
    
    //  do-while loop checking for invalid input
    do{
        c = 0;
        
        if (c == 5){
            cout << "\t\tEntry Invalid\n\t\tProgram Closing...\n";
            return 0;
        }
        
            cout << "ENTER THE MONTH OF YOUR BIRTHDAY (e.g 6)\n\n";
            cin >> bMonth;
        if (cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\t\tThis Entry Is Invalid\n";
            c++;
        }
        
        if (bMonth > 12){
            cout << "\n\t\tInvalid Entry.\n\n";
            c++;
        }
    
            cout << "ENTER THE DAY OF YOUR BIRTHDAY (e.g 16)\n\n";
            cin >> bDay; cout << '\n';
    
        if (cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\t\tThis Entry Is Invalid\n";
            c++;
        }
    
        if (bDay > 31){
            cout << "\n\t\tInvalid Entry.\n\n";
            c++;
        }
        
        if (c == 5){
            cout << "\t\tEntry Invalid\n\t\tProgram Closing...\n";
            return 0;
        }
    }
    while (bMonth > 12 || bDay > 31);
    
    //  create if statement with conditions that accurately describes the range of each sign
    
    if ((bMonth == 3 && bDay >= 21) || (bMonth == 4 && bDay <= 19)){
        cout <<
"         .-.   .-.\n"
"        (_  \\ /  _)    Aries  -  The Ram\n"
"             |\n"
"             |\n\n\n";
        
        cout << "Aries loves to be number one,\nso it’s no surprise that these audacious rams\nare the first sign of the zodiac.\nBold and ambitious,\nAries dives headfirst into even the most challenging situations.\n\n\n";
    }
    
    if ((bMonth == 4 && bDay >= 20) || (bMonth == 5 && bDay <= 20)){
        cout <<
"        .     .\n"
"        '.___.'      Taurus  -  The Bull\n"
"        .'   `.\n"
"       :       :\n"
"       :       :\n"
"        `.___.' \n\n\n";
        
        
        
        cout << "Taurus is an earth sign represented by the bull.\nLike their celestial spirit animal,\nTaureans enjoy relaxing in serene, bucolic environments surrounded by\nsoft sounds, soothing aromas, and succulent flavors.\n\n\n";
    }
    
    if ((bMonth == 5 && bDay >= 21) || (bMonth == 6 && bDay <= 20)){
        cout <<
"      ._____.\n"
"        | |        Gemini  -  The Twins\n"
"        | |\n"
"       _|_|_\n"
"      '     '\n\n\n";
        
        cout << "Have you ever been so busy that you wished\nyou could clone yourself just to get everything done?\nThat’s the Gemini experience in a nutshell.\nAppropriately symbolized by the celestial twins,\nthis air sign was interested in so many pursuits\nthat it had to double itself.\n\n\n";
    }
    
    if ((bMonth == 6 && bDay >= 21) || (bMonth == 7 && bDay <= 22)){
        cout <<
"         .--.\n"
"        /   _`.     Cancer  -  The Crab\n"
"       (_) ( )\n"
"      '.    /\n"
"        `--'\n\n\n";
        
        cout << "Cancer is a cardinal water sign.\nRepresented by the crab,\nthis crustacean seamlessly weaves\nbetween the sea and shore\nrepresenting Cancer’s ability to exist\nin both emotional and material realms.\nCancers are highly intuitive and their psychic abilities\nmanifest in tangible spaces:\nFor instance,\nCancers can effortlessly pick up the energies in a room.\n\n\n";
    }
    
    if ((bMonth == 7 && bDay >= 23) || (bMonth == 8 && bDay <= 22)){
        cout <<
"         .--.\n"
"        (    )       Leo  -  The Lion\n"
"       (_)  /\n"
"           (_,\n\n\n";
        
        cout << "Roll out the red carpet because Leo has arrived.\nLeo is represented by the lion\nand these spirited fire signs are the kings and queens\nof the celestial jungle.\nThey’re delighted to embrace their royal status:\nVivacious, theatrical, and passionate,\nLeos love to bask in the spotlight and celebrate themselves.\n\n\n";
    }
    
    if ((bMonth == 8 && bDay >= 23) || (bMonth == 9 && bDay <= 22)){
        cout <<
"         _\n"
"        ' `:--.--.\n"
"           |  |  |_     Virgo  -  The Virgin\n"
"           |  |  | )\n"
"           |  |  |/\n"
"                (J\n\n\n";
        
        cout << "Virgo is an earth sign historically represented by\nthe goddess of wheat and agriculture,\nan association that speaks to Virgo’s deep-rooted presence in the material world.\nVirgos are logical, practical, and systematic in their approach to life.\nThis earth sign is a perfectionist at heart\nand isn’t afraid to improve skills through diligent and consistent practice.\n\n\n";
    }
    
    if ((bMonth == 9 && bDay >= 23) || (bMonth == 10 && bDay <= 22)){
        cout <<
"             __\n"
"        ___.'  '.___   Libra  -  The Balance\n"
"        ____________\n\n\n";
        
        cout << "Libra is an air sign represented by the scales\n(interestingly, the only inanimate object of the zodiac),\nan association that reflects Libra's fixation on balance and harmony.\nLibra is obsessed with symmetry and strives to create\nequilibrium in all areas of life.\n\n\n";
    }
    
    if ((bMonth == 10 && bDay >= 23) || (bMonth == 11 && bDay <= 21)){
        cout <<
"        _\n"
"       ' `:--.--.\n"
"          |  |  |      Scorpius  -  The Scorpion\n"
"          |  |  |\n"
"          |  |  |  ..,\n"
"                `---':\n\n\n";
        
        cout << "Scorpio is one of the most misunderstood signs of the zodiac.\nBecause of its incredible passion and power,\nScorpio is often mistaken for a fire sign.\nIn fact, Scorpio is a water sign that derives its strength from\nthe psychic, emotional realm.\n\n\n";
    }
    
    if ((bMonth == 11 && bDay >= 22) || (bMonth == 12 && bDay <= 21)){
        cout <<
"        ...\n"
"        .':     Sagittarius  -  The Archer\n"
"      .'\n"
"  `..'\n"
"  .'`.\n\n\n";
        
        cout << "Represented by the archer,\nSagittarians are always on a quest for knowledge.\nThe last fire sign of the zodiac,\nSagittarius launches its many pursuits like blazing arrows, chasing after\ngeographical, intellectual, and spiritual adventures.\n\n\n";
    }
    
    if ((bMonth == 12 && bDay >= 22) || (bMonth == 1 && bDay <= 19)){
        cout <<
"        _\n"
"\\      /_)    Capricorn  -  The Goat\n"
" \\    /`.\n"
"  \\  /   ;\n"
"   \\/ __.'\n\n\n";
        
        cout << "The last earth sign of the zodiac,\nCapricorn is represented by the sea goat,\na mythological creature with the body of a goat and the tail of a fish.\nAccordingly, Capricorns are skilled at navigating both\nthe material and emotional realms.\n\n\n";
    }
    
    if ((bMonth == 1 && bDay >= 20) || (bMonth == 2 && bDay <= 18)){
        cout <<
"        .-\"-._.-\"-._.-   Aquarius  -  The Water Bearer\n"
"        .-\"-._.-\"-._.-\n\n\n";
        
        cout << "Despite the “aqua” in its name, Aquarius is actually\nthe last air sign of the zodiac.\nAquarius is represented by the water bearer,\nthe mystical healer who bestows water, or life, upon the land.\nAccordingly, Aquarius is the most humanitarian astrological sign.\n\n\n";
    }
    
    if ((bMonth == 2 && bDay >= 19) || (bMonth == 3 && bDay <= 20)){
        cout <<
"        `-.    .-'   Pisces  -  The Fishes\n"
"           :  :\n"
"         --:--:--\n"
"           :  :\n"
"        .-'    `-.\n";
        
        cout << "Pisces, a water sign, is the last constellation of the zodiac.\nIt's symbolized by two fish swimming in opposite directions,\nrepresenting the constant division of Pisces' attention between fantasy and reality.\nAs the final sign, Pisces has absorbed every lesson\n— the joys and the pain, the hopes and the fears —\nlearned by all of the other signs.\n\n\n";
    }
                    
    return 0;
}
