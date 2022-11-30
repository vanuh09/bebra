#include "str_easy.h"

string itc_hello_str(string name){
    return "Hello, " + name;
}

long long itc_len(string str){
    return str.size();
}

void itc_print_copy_str(string str, int number){
    for(int i = 0; i<number; i++){cout << str;}
}

void itc_first_end_three(string str){
    if (str.size() > 5){cout << str[0] << str[1] << str[2] << str.size() - 3 << str.size() - 2 << str.size() - 1;}
    else{
        string a = "";
        a += str[0];
        itc_print_copy_str(a, str.size());
    }
}

int itc_count_char_in_str(char ch, string str){
    int a = 0;
    for(int i = 0; i < str.size(); i++){
        if (str[i] == ch){
            a++;
        }
    }
    return a;
}

string itc_even_place(string str){
    string a = "";
    for(int i = 0; i < str.size(); i++){
        if(i % 2 == 0){
            a += str[i];
        }
    }
    return a;
}

double itc_percent_lower_uppercase(string str){
    double a = 0.0, b = 0.0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            a++;
        }
        else{
            if(str[i] >= 'a' && str[i] <= 'z'){
                b++;}
        }
    }
    return b / a * 100;
}

string itc_reverse_str(string str){
    string a = "";
    for(int i = 0; i < str.size(); i++){
        a += str[str.size() - i - 1];
    }
    return a;
}

string itc_slice_str(string str, int start, int end){
    string a = "";
    for(int i = start; i <= end; i++){
        a += str[i];
    }
    return a;
}

bool itc_equal_reverse(string str){}

string itc_cmp_str(string str1, string str2, int num){}

int itc_find_str(string str1, string str2){}

string itc_three_str(string str1, string str2, string str3){}

int itc_max_char_on_end(string str){}
