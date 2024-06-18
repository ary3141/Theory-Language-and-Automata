#include <iostream>
#include <string>
#include <Stack>
using namespace std;
bool subject(string word){
    bool rets = false;
    string state = "q1";
    for(int i = 0;i < word.length();i++){
        if(word[i] == 'S' || word[i] == 's'){
            if(state == "q1"){state = "q2";rets=false;}
            else{rets = false;}
        } else if(word[i] == 'K' || word[i] == 'k'){
            if(state == "q1"){state = "q6";rets=false;}
            else{rets = false;}
        } else if(word[i] == 'D' || word[i] == 'd'){
            if(state == "q1"){state = "q11";rets=false;}
            else{rets = false;}
        } else if(word[i] == 'A' || word[i] == 'a'){
            if(state == "q1"){state = "q14";rets=false;}
            else if(state == "q2"){state = "q3";rets=false;}
            else if(state == "q4"){state = "q5";rets=true;}
            else if(state == "q6"){state = "q7";rets=false;}
            else if(state == "q12"){state = "q13";rets=true;}
            else if (state == "q16") {state = "q17";rets=true;}
            else{rets = false;}
        } else if(word[i] == 'I' || word[i] == 'i'){
            if (state == "q8"){state = "q10";rets=true;}
            else if (state == "q11"){state = "q12";rets=false;}
            else{rets = false;}
        } else if(word[i] == 'I' || word[i] == 'i'){
            if (state == "q2"){state = "q6";rets=false;}
            else if (state == "q13"){state = "q15";rets=false;}
            else{rets = false;}
        } else if(word[i] == 'R' || word[i] == 'r'){
            if (state == "q14"){state = "q15";rets=false;}
            else{rets = false;}
        } else if (word[i] == 'Y' || word[i] == 'y') {
            if (state == "q3"){state = "q4";rets=false;}
            else if (state == "q15"){state = "q16";rets=false;}
            else{rets = false;}
        } else if(word[i] == 'M' || word[i] == 'm'){
            if (state == "q7"){state = "q8";rets=false;}
            else{rets = false;}
        } else if(word[i] == 'U' || word[i] == 'u'){
            if (state == "q8"){state = "q9";rets=true;}
            else{rets = false;}
        } else {
            rets = false;
        }
    }
    return rets;
}

bool predikat(string wordp){
    bool retp = false;
    string state = "q1";
    for(int i = 0;i < wordp.length();i++){
        if(wordp[i] == 'M' || wordp[i] == 'm'){
            if(state == "q1"){state = "q2";retp = false;}
            else if(state == "q3"){state = "q9";retp=false;}
            else if(state == "q19"){state = "q20";retp=true;}
            else{retp = false;}
        }else if(wordp[i] == 'E' || wordp[i] == 'e'){
            if(state == "q2"){state = "q3";retp = false;}
            else if(state == "q10"){state = "q11";retp=false;}
            else{retp = false;}
        }else if(wordp[i] == 'A' || wordp[i] == 'a'){
            if(state == "q2"){state = "q21";retp = false;}
            else if(state == "q6"){state = "q7";retp=false;}
            else if(state == "q10"){state = "q14";retp=false;}
            else if(state == "q15"){state = "q16";retp=true;}
            else if(state == "q22"){state = "q23";retp=false;}
            else{retp = false;}
        }else if(wordp[i] == 'L' || wordp[i] == 'l'){
            if(state == "q3"){state = "q4";retp = false;}
            else if(state == "q11"){state = "q12";retp=false;}
            else{retp = false;}
        }else if(wordp[i] == 'N' || wordp[i] == 'n'){
            if(state == "q17"){state = "q18";retp = false;}
            else if(state == "q23"){state = "q24";retp=true;}
            else{retp = false;}
        }else if(wordp[i] == 'K' || wordp[i] == 'k'){
            if(state == "q21"){state = "q22";retp = false;}
            else{retp = false;}
        }else if(wordp[i] == 'I' || wordp[i] == 'i'){
            if(state == "q2"){state = "q17";retp = false;}
            else if(state == "q4"){state = "q5";retp = false;}
            else if(state == "q12"){state = "q13";retp=true;}
            else {retp = false;}
        }else if(wordp[i] == 'B' || wordp[i] == 'b'){
            if(state == "q9"){state = "q10";retp = false;}
            else{retp = false;}
        } else if(wordp[i] == 'H' || wordp[i] == 'h'){
            if(state == "q5"){state = "q6";retp = false;}
            else{retp = false;}
        }else if(wordp[i] == 'U' || wordp[i] == 'u'){
            if(state == "q18"){state = "q19";retp = false;}
            else{retp = false;}
        } else if(wordp[i] == 'C' || wordp[i] == 'c'){
            if(state == "q14"){state = "q15";retp = false;}
            else{retp = false;}
        } else if(wordp[i] == 'T' || wordp[i] == 't'){
            if(state == "q7"){state = "q8";retp = true;}
            else{retp = false;}
        } else {
            retp = false;
        }
    }
    return retp;
}

bool objek(string wordo){
    bool reto=false;
    string state = "q1";
    for(int i = 0;i < wordo.length();i++){
        if(wordo[i] == 'N' || wordo[i] == 'n'){
            if(state == "q1"){state = "q2";reto=false;}
            else{reto=false;}
        }else if(wordo[i] == 'K' || wordo[i] == 'k'){
            if(state == "q1"){state = "q6";reto=false;}
            else if(state == "q16"){state = "q17";reto=false;}
            else{reto=false;}
        }else if(wordo[i] == 'P' || wordo[i] == 'p'){
            if(state == "q1"){state = "q9";reto=false;}
            else if(state == "q7"){state = "q8";reto=false;}
            else{reto=false;}
        }else if(wordo[i] == 'B' || wordo[i] == 'b'){
            if(state == "q1"){state = "q15";reto=false;}
            else{reto=false;}
        }else if(wordo[i] == 'A' || wordo[i] == 'a'){
            if(state == "q2"){state = "q3";reto=false;}
            else if(state == "q22"){state = "q23";reto=true;}
            else{reto=false;}
        }else if(wordo[i] == 'O' || wordo[i] == 'o'){
            if(state == "q6"){state = "q7";reto=false;}
            else if(state == "q9"){state = "q10";reto=false;}
            else{reto=false;}
        }else if(wordo[i] == 'U' || wordo[i] == 'u'){
            if(state == "q15"){state = "q16";reto=false;}
            else if(state == "q17"){state = "q18";reto=true;}
            else{reto=false;}
        }else if(wordo[i] == 'E' || wordo[i] == 'e'){
            if(state == "q12"){state = "q13";reto=false;}
            else if(state == "q15"){state = "q19";reto=false;}
            else{reto=false;}
        }else if(wordo[i] == 'S' || wordo[i] == 's'){
            if(state == "q3"){state = "q4";reto=false;}
            else if(state == "q10"){state = "q11";reto=false;}
            else{reto=false;}
        }else if(wordo[i] == 'R' || wordo[i] == 'r'){
            if(state == "q13"){state = "q14";reto=true;}
            else if(state == "q19"){state = "q20";reto=false;}
            else{reto=false;}
        }else if(wordo[i] == 'I' || wordo[i] == 'i'){
            if(state == "q4"){state = "q5";reto=true;}
            else if(state == "q8"){state = "q5";reto=true;}
            else if(state == "q20"){state = "q21";reto=false;}
            else{reto=false;}
        }else if(wordo[i] == 'T' || wordo[i] == 't'){
            if(state == "q11"){state = "q12";reto=false;}
            else if(state == "q21"){state = "q22";reto=false;}
            else{reto=false;}
        }
        else{
            reto=false;
        }
    }
    return reto;
}

bool keterangan(string wordk){
    bool retk = false;
    string state = "q1";
    for(int i = 0;i < wordk.length();i++){
        if(wordk[i] == 'D' || wordk[i] == 'd'){
            if(state == "q1"){state = "q2";retk=false;}
            else{retk = false;}
        }else if(wordk[i] == 'I' || wordk[i] == 'i'){
            if(state == "q2"){state = "q3";retk=true;}
            else{retk = false;}
        }else{
            retk = false;
        }
    }
    return retk;
}

bool keteranganfix(string wordkf){
    bool retkf = false;;
    string state = "q1";
    for(int i = 0;i < wordkf.length();i++){
        if(wordkf[i] == 'R' || wordkf[i] == 'r'){
            if(state == "q1"){state = "q2";retkf=false;}
            else if(state == "q15"){state = "q16";retkf=true;}
            else if(state == "q23"){state = "q24";retkf=true;}
            else{retkf = false;}
        }else if(wordkf[i] == 'J' || wordkf[i] == 'j'){
            if(state == "q1"){state = "q7";retkf=false;}
            else{retkf = false;}
        }else if(wordkf[i] == 'P' || wordkf[i] == 'p'){
            if(state == "q1"){state = "q12";retkf=false;}
            else{retkf = false;}
        }else if(wordkf[i] == 'K' || wordkf[i] == 'k'){
            if(state == "q1"){state = "q17";retkf=false;}
            else{retkf = false;}
        }else if(wordkf[i] == 'U' || wordkf[i] == 'u'){
            if(state == "q2"){state = "q3";retkf=false;}
            else{retkf = false;}
        }else if(wordkf[i] == 'A' || wordkf[i] == 'a'){
            if(state == "q4"){state = "q5";retkf=false;}
            else if(state == "q7"){state = "q8";retkf=false;}
            else if(state == "q9"){state = "q10";retkf=false;}
            else if(state == "q12"){state = "q13";retkf=false;}
            else if(state == "q14"){state = "q15";retkf=false;}
            else if(state == "q17"){state = "q18";retkf=false;}
            else{retkf = false;}
        }else if(wordkf[i] == 'N' || wordkf[i] == 'n'){
            if(state == "q10"){state = "q11";retkf=true;}
            else if(state == "q18"){state = "q19";retkf=false;}
            else if(state == "q21"){state = "q22";retkf=true;}
            else{retkf = false;}
        }else if(wordkf[i] == 'M' || wordkf[i] == 'm'){
            if(state == "q3"){state = "q4";retkf=false;}
            else{retkf = false;}
        }else if(wordkf[i] == 'L' || wordkf[i] == 'l'){
            if(state == "q8"){state = "q9";retkf=false;}
            else{retkf = false;}
        }else if(wordkf[i] == 'S' || wordkf[i] == 's'){
            if(state == "q13"){state = "q14";retkf=false;}
            else{retkf = false;}
        }else if(wordkf[i] == 'T' || wordkf[i] == 't'){
            if(state == "q19"){state = "q20";retkf=false;}
            else{retkf = false;}
        }else if(wordkf[i] == 'I' || wordkf[i] == 'i'){
            if(state == "q20"){state = "q21";retkf=false;}
            else{retkf = false;}
        }else if(wordkf[i] == 'O' || wordkf[i] == 'o'){
            if(state == "q20"){state = "q23";retkf=false;}
            else{retkf = false;}
        }else if(wordkf[i] == 'H' || wordkf[i] == 'h'){
            if(state == "q5"){state = "q6";retkf=true;}
            else{retkf = false;}
        }else{
            retkf = false;
        }
    }
    return retkf;
}

int main()
{
    string sentence;
    string arr[100];
    string words[10];
    stack<string> mystack;
    int counter = 0;
    cout << "Masukkan kata : ";
    getline(cin, sentence);
    string output;
    for(int i=0;i<sentence.length();i++){
        if(sentence[i] == ' '){
            counter++;
            i++;
        }
        words[counter] += sentence[i];
    }
    mystack.push("#");
    string states = "q1";
    for(int z = 0;z <= counter;z++){
        if(subject(words[z]) == true){
            output += "S";
            if(z != counter){
                output += " - ";
            }
            if(states == "q1"){
                mystack.push("s");
                states = "q2";
            }
        }else if(predikat(words[z]) == true){
            output += "P";
            if(z != counter){
                output += " - ";
            }
            if(states == "q2"){
                if(mystack.top() == "s"){
                    mystack.pop();
                }
                mystack.push("p");
                states = "q3";
                if(z == counter){ //kata paling terakhir
                    if(mystack.top() == "p"){
                        mystack.pop();
                        states = "q6";
                    }
                }
            }
        }else if(objek(words[z]) == true){
            output += "O";
            if(z != counter){
                output += " - ";
            }
            if(states == "q3"){
                if(mystack.top() == "p"){
                    mystack.pop();
                }
                mystack.push("o");
                states = "q5";
                if(z == counter){//kata paling terakhir
                    if(mystack.top() == "o"){
                        mystack.pop();
                        states = "q8";
                    }
                }
            }
        }else if(keterangan(words[z])== true){
            if(states == "q3"){
                if(mystack.top() == "p"){
                mystack.pop();
                }
            }else if(states == "q5"){
                if(mystack.top() == "o"){
                    mystack.pop();
                }
            }
            mystack.push("b");
        }else if(keteranganfix(words[z])== true){
            output += "K";
            if(z != counter){
                output += " - ";
            }
            if(states == "q3" || states == "q5"){
                if(mystack.top() == "b"){
                    mystack.pop();
                }
                mystack.push("k");
                states = "q7";
                if(z == counter){//kata paling terakhir
                    if(mystack.top() == "k"){
                        mystack.pop();
                        states = "q10";
                    }
                }
            }
        }else{

output += "Unknown";
            if(z != counter){
                output += " - ";
            }
            mystack.push("e");
        }
    }
    if(states == "q10" || states == "q8" || states == "q6"){
        if(mystack.top() == "#"){
            mystack.pop();
        }
    }
    if(mystack.empty()){
        cout << "VALID" << endl;
    }else{
        cout << "NOT VALID" << endl;
    }
    cout << output;
    return 0;
}
