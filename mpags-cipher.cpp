#include <iostream>
#include<vector>
int main(int argc, char* argv[]){

    const std::vector<std::string> cmdLineArgs { argv, argv+argc };

    char in_char{'x'};
    std::string out_str("");
    
    for(int i{0}; i<cmdLineArgs.size(); i++){
        if (cmdLineArgs[i]=="--help" || cmdLineArgs[i] =="-h"){

            std::cout << "Help message" << std::endl;
        }
        else if (cmdLineArgs[i]=="--version")
        {   std::cout << "Version 1.0" << std::endl;
            
        }
        else if (cmdLineArgs[i]=="-i")
        {   std::string InputFile{cmdLineArgs[i+1]};

            std::cout << InputFile << std::endl;
            
        }
        else if (i==0){
            continue;
        }
        else if (cmdLineArgs[i]=="-o"){
            std::string OutputFile{cmdLineArgs[i+1]};
           std::cout << OutputFile << std::endl;
        }   
        else if (cmdLineArgs[i-1] == "-o" || cmdLineArgs[i-1]== "-i"){
            continue;
        }
        else{
            
        
            std::string UnknownCommand{cmdLineArgs[i]};
            std::cout << "Trouble parsing argument: " + UnknownCommand << std::endl;
            exit(0);
        }
    }

    // Take each letter from user input and in each case:
    while(std::cin >> in_char)
{
    // - Convert to upper case
    if (std::isalpha(in_char)){
        out_str += std::toupper(in_char);
        continue;
    }
    // - Change numbers to words
    switch (in_char)
    {
        case '1':
            out_str += "ONE";
            break;
        case '2':
            out_str += "TWO";
            break;
        case '3':
            out_str += "THREE";
            break;
        case '4':
            out_str += "FOUR";
            break;
        case '5':
            out_str += "FIVE";
            break;
        case '6':
            out_str += "SIX";
            break;
        case '7':
            out_str += "SEVEN";
            break;
        case '8':
            out_str += "EIGHT";
            break;
        case '9':
            out_str += "NINE";
            break;
        case '0':
            out_str += "ZERO";
            break;
        default:
            break;
    }
    // - Ignore any other (non-alpha) characters
    //DON'T add to out_string
}
    // print out the new string
    std::cout << out_str << std::endl;

}
