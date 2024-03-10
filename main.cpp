#include <iostream>
#include <map>
#include <string>


int main() {
    std::map<std::string, int> queue;
   std::string str;
    while (str != "1")
    {
        std::cin >> str;
        int repetition = 1;
        if (str == "1") break;
        if (str == "Next")
        {
            std::map<std::string, int>::iterator itb = queue.begin();
            std::cout << itb->first << std::endl;
            itb->second -= 1;

            if (itb->second == 0)  queue.erase(itb);
        }

        if (str != "1" && str != "Next")
        {
            std::map<std::string, int>::iterator it = queue.find(str);
                if (str == it->first) it->second += 1;
                else queue.insert(std::pair<std::string, int> (str, repetition));
        }
    }
}


