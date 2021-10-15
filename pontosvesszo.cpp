#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

string tolvajlas(const string& eredeti) {
    string ujstring  = eredeti;
    ujstring.erase(remove(ujstring.begin(), ujstring.end(), ';'), ujstring.end());
    return ujstring;
}
/*
#include <iostream>
#include <string>

using namespace std;

string tolvajlas(const string& eredeti) {
    string s = "";

    for (char i: eredeti) {
        if (i != ';') {
            s += i;
        }
    }

    return s;
 */
