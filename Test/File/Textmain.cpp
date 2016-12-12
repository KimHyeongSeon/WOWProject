#include <iostream>
using namespace std;

#include "TextFile.h"

int main()
{
    string fileName;
    cout << "file name : ";
    getline(cin, fileName);
    TextFile file1(fileName, File::out);
    file1.WriteString("hello, world");
    file1.WriteString("good-bye!");
    file1.Close();

    TextFile file2(fileName, File::in);
    cout << "file content  : \n";
    while( ! file2.IsEOF() )
    {
        string s;
        file2.ReadString(s);
        cout << s << "\n";
    }
    file2.Close();

    return 0;
}
