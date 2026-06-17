#include <string>
using std::string;
namespace log_line {
string message (string log_message){
    int postion = log_message.find(":") ;
    string display =  log_message.substr(postion + 2, 22);
    return display;
}
string log_level(string log_message){
    int postion = log_message.find(":") ;
    string display =  log_message.substr(1,postion-2);
    return display;
}
string reformat(string log_message){
    return (message(log_message) + " (" + log_level(log_message) +")");
}

} // namespace log_line
