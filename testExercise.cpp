#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

int main(){
    /*long bound;
    cout << "Enter a positive integer: ";
    cin >> bound;
    cout << "Factorial numbers < " << bound << ":\n1,1";
    long f=1,i=1;    

    do
    { 
        f *= ++i;
        cout << "," << f;
    }
    while (f < bound);*/

   /* int a = 1, b= 4;

    a *= ++b;

    cout << a;*/

    /*for (int i=0; i < 8; i++)
        { if (i%2 == 0) cout << i + 1 << endl;
        else if (i%3 == 0) continue;
        else if (i%5 == 0) break;
        cout << "End of program.\n";
        }
        cout << "End of program.\n";*/

    /*for(int i = 1; i <= 5; i++){
        for(int j =1; j <= 5; j++){            
            if(j <= i){
                cout << j << " ";
            }
            else{
                cout << "*" << " ";
            }         
        }   
        cout << endl;
    }*/

    /*int sum = 0;
    int n;
    while(true){
        cout << 'Enter a number: ';
        cin >> n;       
        if(n > 9999 || n < -9999){
            goto here;
        }
        else{
            sum += n;
        }
       
    }
     here: cout << "The number you entered is out of bound." << endl;
     cout << "The sum is: " << sum;
     */

   /* const int SIZE = 10;
    double temp[2*SIZE];

    int dim = sizeof(temp)/sizeof(double);
    cout << dim;
    */
    /*int arr[20]={1}, i=1, y=3;
    arr[2*i +1] = 3*y + arr[2*i];

    cout << arr[2*i +1];*/

    /*int size = 5;
    int a[size] = {1,2,3,4,5};
    int b[size];
    cout << "list of a[size]: " ;
    for(int i=0; i<size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i =0; i<size; i++){
        b[i] = a[i];
    }
    cout << "list of b[size]: ";
    for(int i=0; i<size;i++){
        cout << b[i] << " ";
    }*/

    /*int size = 5;
    int a[size] = {1,2,3,4,5,6}, sum =0;

    for(int i=0; i<size; i++){
        sum += a[i];
    }
    cout << "The sum of the array elements is: " << sum;*/

   /* int size = 10;
    int a[size] = {-1,1,2,-3,5,7,-20,8,-1,-3};
    for(int i =0; i <size; i++){
        if(a[i]<0){
            cout << a[i] << " ";
        }
    }*/

    /*int size= 10;
    int oe[size] = {1,2,3,4,5,6,7,8,9,10};
    int sizeE = 0;
    int sizeO = 0;
    

    for(int i =0; i < size; i++){
        if(oe[i] % 2 == 0){
            sizeE++;
        }

        if(oe[i] % 2 == 1){
            sizeO++;
        }
    }

    int o[sizeO];
    int e[sizeE];

    int even = 0;
    for(int i = 0; i <size; i++){
        if(oe[i] % 2 == 0){
            e[even] = oe[i];    
            even++;       
        }        
    }
    int odd =0;
    for(int i=0; i < size; i++){
        if(oe[i] % 2 == 1){
            o[odd] = oe[i]; 
            odd++;           
        }
    }
        
    for(int i =0; i < sizeE; i++){
        cout << e[i] << " ";
    }
    cout << endl;
    
    for(int i =0; i < sizeO; i++){
        cout << o[i] << " ";
    }
    */

    /*int size = 10;
    int a[size] = {1,2,3,4,5,6,7,8,9,10};

    int max = a[0];
    int min = a[0];

    for(int i =0; i < size; i++){
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }
    cout << "The largest number is: " << max << endl;
    cout << "The smallest number is: " << min;
    */

    /*int size = 7;
    int a[size] = {7,4,6,1,3,5,2};
    for(int i =0; i <size; i++){
        for(int j =0; j < size-i; j++){
            if(a[j+1] < a[j]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int i =0; i<size; i++){
        cout << a[i] << " ";
    }
    */
    
    /*int a[] = {1,5,1,1,1,1,2,3,2,6,6,4,4,4,4,4,4,4,4,3,4,2,5};

    int size = sizeof(a)/ sizeof(int);
    int max = 0, num;    
    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = i+1; j < size; j++){
            if(a[i] == a[j]){
                count++;                
            }
        }
        if(count > max){
            max = count;
            num = a[i];
        }
    }
    cout << "The number frequently appears is: " << num;
    */

    /*int a[] = {5,2,8,1,6,3,9,7,4};
    int size = sizeof(a)/ sizeof(int);

    for(int i = 0; i<size; i++){
        for(int j = 0; j <size; j++){
            if(a[j] < a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int i =0; i < size; i++){
        cout << a[i] << " ";
    }
    */

    /*const int SIZE = 3;
    short a[SIZE] = {22,33,44};
    cout << "a = " << a << endl;
    cout << "sizeof(short) = " << sizeof(short) << endl;
    short* end = a + SIZE; // converts SIZE to offset 6
    short sum = 0;
    for (short* p = a; p < end; p++)
    { sum += *p;
    cout << "\t p = " << p;
    cout << "\t *p = " << *p;
    cout << "\t sum = " << sum << endl;
    }
    cout << "end = " << end << endl;
    */
    /*double x=0, *ptr1, *ptr2;
    ptr1=&x;
    ptr2=ptr1;
    cout  << x << endl; 
    cout << *ptr1 << endl;                    
    cout << *ptr2 << endl;
    *ptr1=6;
    x=3;
    *ptr2 = 7;
    cout << "x= " << x << " " << *ptr1;
    */
    
    /*int v =9, y=2;
    int *ptr1 = &v , *ptr2 = &y;
    ptr2 = &ptr1;
    cout << *ptr2;*/

    /*int array[] = { 23, 5, 12, 34, 17, 56, 87 }; 
    int size = sizeof(array)/sizeof(int);
    int *arrPtr=array;
    for (int i=size-1; i>=0; --i){
        cout << *(arrPtr + i) << " "; 
    }*/

    /*int array[] = {1,0,1,1,0,1};
    int size = sizeof(array)/sizeof(int);

    int* start = array;
    int* end = array + size -1;
    bool isPalindrome = true;

    while(start < end){        
        if(*start != *end){
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if(isPalindrome){
        cout << "The array elements are palindrome.";
    }
    else{
        cout << "The array elements are not palidrome.";
    }
    */

    /*int m = 44;
    int* p = &m;
    int& r = m;
    int n = (*p)++;
    int* q = p - 1;
    r = *(--p) + 1;
    ++*q;
    cout << m << endl;
    cout << n << endl;
    cout << &m << endl;
    cout << *p << endl;
    cout << r << endl;
    cout << *q << endl;
    */

    /*int size = 14; 
    int a[size] = {1,2,1,3,2,3,4,2,7, 4, 6, 8,2, 8};
    for(int i =0; i<size; i++){
        for(int j =i+1; j<size; j++){
            if(a[i] == a[j]){
                for(int k =j; k < size-i; k++){
                    a[k] =a[k+1];
                }          
                size--;      
            }
        }
    }

    for(int i =0; i <size; i++){
        cout << a[i] << " ";
    }
*/
    /*char s[] = "ABCD";
    int size = sizeof(s) / sizeof(char);
    cout << size << endl;
    for(int i =0; i < size; i++){
        cout << "s[" << i << "] = " << s[i] << endl;
    }*/
    
    /*char word[80];
    do
    { cin >> word;
    if (*word) cout << "\t\"" << word << "\"\n";
    } while (*word);
    */

    /*char ch,pre = '\0';
    while (cin.get(ch))
    { if (pre == ' ' || pre == '\n') cout.put(toupper(ch));
    else cout.put(ch);
    pre = ch;
    }*/

    /*char name[5][20];
    int count=0;
    cout << "Enter at most 4 names with at most 19 characters:\n";
    while (cin.getline(name[count++],20))
    ;
    

    cout << "The names are:\n";
    for (int i=0; i<count; i++)
    cout << "\t" << i << ". [" << name[i] << "]" << endl;
    */
    /*char s1[4] = "XYZ";
    // cout << strlen(s1);
    char s2[7] = "ABCDEF";
    cout << strncpy(s1,s2,7);*/
    // cout << strlen(s2);
    

    /*char str[30];
    cin.getline(str, 7, 'r');
 
    cout << str;*/

   /* char *ch = "Helllo";
    cout << ch[4];*/

    /*int x[10], y;
    x = &y;
    cout << x;
    */

    /*int* ptr, one[100], three;

    *ptr = three;
    ptr = one;
    // ptr = three;
    ptr = &one[12];*/

    /*int a = 5, *b = &a;

    cout << a**b;*/

    /*int b[2][4] = {1,2,3,4,5,6,7,8};
    
    cout << b << endl;
    cout << b+1 << endl;
    cout << *b << endl;
    cout << *b +1<< endl;
    cout << *(b+1) +1 << endl;
    cout << *(*b) <<endl;
    cout << *(*b +1) << endl;
    cout << *(*(b+1)+1) << endl;
    */

    /*char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if(ch >= 97 && ch <= 122){
        cout << ch << " is lower case letter.";
    }
    else if(ch >= 65 && ch <= 90){
        cout << ch << " is upper case letter.";
    }
    else {
        cout << ch << " is neither.";
    }
    */

    /*float temp, temp_result;
    char unit;

    cout << "Enter the temp in the unit you want(10c or 10f): ";

    cin >> temp >> unit;

    if(unit == 'c' || unit =='C'){
        temp_result = 1.8* temp + 32;
        cout << "The temprature is " << temp_result << "F.";
    }
    else if(unit == 'F' || unit == 'f'){
        temp_result = 0.56 * (temp - 32);
        cout << "The temperatur is " << temp_result << "C. ";
    }
    */

    /*for(int i = 1; i <= 5; i++){
        for(int j =1; j <=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }*/

    /*for(int i =1; i<=9; i++){
       cout << i << " ";
       if(i % 3 == 0){
        cout << endl;
       }
    }*/

    /*for(int i = 1; i <= 5; i++){
        for(int j = 1; j < i; j++){
            cout << "  ";
        }
        for(int k = i; k <= 5; k++){
            cout << k << " ";
        }
        cout << endl;
    }*/

    /*for(int i = 5; i >= 1; --i){
        for(int j = 5; j > i; --j){
            cout << "  ";
        }
        for(int k = 1; k <= i; k++){
            cout << k << " ";
        }
        cout << endl;
    }*/

    /*for(int i = 1; i <= 5; i++){
        for(int j = 1; j < i; j++){
            cout << "  ";
        }
        for(int k = 5; k >= i; --k){
            cout << k << " ";
        }    
        for(int l = i+1; l <= 5; l++){
            cout << l << " ";
        }
        cout << endl;
    }
    for(int i = 4; i > 0; --i){
        for(int j = 1; j < i; j++){
            cout << "  ";
        }
        for(int k = 5; k >= i; --k){
            cout << k << " ";
        }
        for(int h = i+1; h<= 5 ; h++){
            cout << h << " ";
        }
        cout << endl;
    }
    */

    /*for(int i = 6; i > 0; --i){
        for(int j = i; j > 0; --j){
            cout << "*" << " ";
        }
        cout << endl;
    }*/

    /*for(int i = 5; i > 0; --i){
        for(int j = 0; j < i; j++){
            cout << "  " ;
        }
        for(int k = i; k <= 5; k++){
            cout << k << " ";
        }
        for(int l = 4; l >=i; --l){
            cout << l << " ";
        }
        cout << endl;
    }
    for(int i = 1; i < 5; i++){
        for(int j = 0; j <= i; j++){
            cout << "  ";
        }
        for(int k = i+1; k <= 5; k++){
            cout << k << " ";
        }
        for(int y = 4; y >= i+1; --y){
            cout << y << " ";
        }
        cout << endl;
    }*/

    /*char  a[20] = "the incorrigible";
    char* x = a;
    
    cout << strlen(++x) << endl;
    // cout << x[0];*/

    // const char SPC = '';
    /*float a[100];
    int n, i;
    cout << "Enter the size of the list: ";
    cin >> n;

    cout << "Enter the list: ";
    for(i = 0; i < n-1; i++){
        cin >> a[i];
    }
    for(i = 1; i < n-1; i++){
        a[i] = a[i] + a[i-1];
    }
    cout << "The resulting value is: "; 
    for(i = 0; i < n-1; ix++){
        cout << a[i] << " ";
    }
*/

    /*char arr[] =  "Test";
    char* ch = &(*(arr+1));
    cout << arr;*/

    /*int num, key= 8;
    for(int k = 3; k > 0; k--){
        cout << "Guess my number: ";
        cin >> num;

        if(num != key)
            continue;
        break;
    }*/

    /*int x,y;
    int *ptr1 =&x, *ptr2 = &y;
    cout << ptr1 << endl;
    cout << ptr2 << endl;
    cout << ptr2 -ptr1;*/

    /*int a[] = {1,2,3,4,5};
    int* ptr = a;
    cout << a[3] << " " << *(ptr+3) << " " << ptr[3];*/

    /*char x[] ="It is a nice day";
    char y[25];
    char z[15];

    cout << "string x is: " << x << endl;
    cout << "string y is: " << strcpy(y,x) << endl;

    strncpy(z,y,9);
    z[9] ='\0';
    cout << "string z  is: " << z << endl;*/

    /*const int NUM = 5;
    int size;
    int a[] = {1,2,3,4,5,6,7,8,9};    
    size = sizeof(a)/sizeof(a[0]);

    for(int i = 0; i < size; i++){
        if(a[i] == NUM){
            for(int k = i; k < size; k++){
                a[k] = a[k+1];
            }
            size--;
        }
    }

    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }*/

    /*int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int b[3][3] = {1,2,3,4,5,6,7,8,9};
    int multi[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            multi[i][j] = 0;
            for(int k = 0; k < 3; k++){
                multi[i][j] += a[i][k] * b[k][j];
            }
        }

    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << multi[i][j] << " ";
        }
        cout << endl;
    }*/

    /*int a[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(a)/sizeof(a[0]);

    int countEven = 0;
    int countOdd = 0;

    for(int i = 0; i < size; i++){
        if(a[i] %2 == 0){
            countEven++;
        }
        if(a[i]%2 == 1){
            countOdd++;
        }
    }

    cout << "The number of even numbers is: " << countEven << endl;
    cout << "The number of odd numbers is: " << countOdd << endl;*/

    /*int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int size = sizeof(a)/sizeof(a[0]);

    int start = 0;
    int end = size-1;

    while(start < end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }

    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }*/

    /*int a[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(a)/sizeof(a[0]);
    
    int countEven = 0;
    int countOdd = 0;

    for(int i = 0; i < size; i++){
        if(a[i]%2 == 0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }

    int even[countEven];
    int odd[countOdd];

    int evenIndex = 0;
    int oddIndex = 0;

    for(int i = 0; i < size; i++){
        if(a[i]%2 == 0){
            even[evenIndex] = a[i];
            evenIndex++;
        }

        if(a[i]%2==1){
            odd[oddIndex] = a[i];
            oddIndex++;
        }
    }

    for(int i = 0; i < countEven; i++){
        cout << even[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < countOdd; i++){
        cout << odd[i] << " ";
    }*/

    /* m=1, n=2, min;
    int mCount = 0, nCount = 0;
    //...
    min = (m < n ? mCount++, m : nCount++, n); //result?    
    cout << mCount <<" " << nCount << " " << m;
    cout << min;*/

    /*int  n=1, p=2, q=3; 
    int value = (p < q ? n > p ? q * n - 2 : q / n + 1 : q - n);
    cout << value;*/

    /*int num, rem, x, count = 0;

    cout << "Enter a number between 0 and 34767: ";
    cin >> num;
    x = num;
    while(x > 0 && x < 32767){
        if(x > 0){
            x = x/10;
            count++;
        }
    }
    
    for(int i = 0; i < count; i++){
        rem = num % (int)pow(10, count-i);
        for(int j = i; j < count; j++){
            x = rem/pow(10,count-j);
            cout << x << " ";
            rem = rem % (int)pow(10, count-j);
        }
        cout << rem;
        cout << endl;
    }*/

    /*char ch[1000];
    char ch1[100];

    cout << "Enter a text: ";
    cin.getline(ch,sizeof(ch));

    cout <<"Enter a word: ";
    cin >> ch1;

    int count = 0;
    char* pos = strstr(ch,ch1);

    while(pos != nullptr){        
        count++;   
        pos = strstr(pos+1, ch1);
    }    
         
   cout << count;*/

    /*char word[100];

    cout << "Enter a word: ";
    cin >> word;

    bool isPalindrome = true;
    int length = strlen(word);
    int start = 0;
    int end = length - 1;

    while(start < end){
        if(word[start] != word[end]){
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if(isPalindrome){
        cout << "The words is palidrome.";
    }else{
        cout << "The word is not palindrom";
    }
    */

    /*string str1 = "name";
    string str2 = " classes of hilcoe";

    cout << str1.append(str2, 3, 6);*/

    /*char ch[100];

    cout << "Enter a text: ";
    cin.getline(ch, 100);

    /*int count = 0; 

    int i = 0;
    while(i < strlen(ch)){
        if(ch[i] != ' ' && ch[i] != '\t' && ch[i] != '\n'){
            count++;
        }
        
        
        i++;
    }
    
    cout << count;
    int i = 0;
    while(i < strlen(ch)){
        ch[i] = toupper(ch[i]);
    }

    cout << ch;*/

    /*const int MAX_SIZE = 100;
    char cString[MAX_SIZE];

    cout << "Enter a C-string: ";
    cin.getline(cString, MAX_SIZE);

    for (int i = 0; i < strlen(cString); i++) {
        cString[i] = toupper(cString[i]);
    }

    cout << "Uppercase string: " << cString << endl;*/

    /*char ch[100];

    cout << "Enter a text: ";
    cin.getline(ch, 100);
    bool isWors = false;
    int i = 0, count = 0; 
    while(ch[i] != '\0'){
        if(ch[i] != ' ' || ch[i] != '\t' || ch[i] != '\n'){
            isWors = false;
        }else if(!isWors){
            isWors = true;
            count++;
           
        }
        i++;
    }
    cout << count;*/

    /*char ch[100];

    cout << "Enter a text: ";
    cin.getline(ch, 100);

    int i = 0, wordCount = 0;
    bool inWord = false;
    while (ch[i] != '\0') {
        if (ch[i] == ' ' || ch[i] == '\t' || ch[i] == '\n') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            wordCount++;
        }
        i++;
    }

    cout << "The number of words entered: " << wordCount << endl;*/


    /*const int MAX_STUDENTS = 80;
    const int NUM_TESTS = 3;

    string names[MAX_STUDENTS];
    int scores[MAX_STUDENTS][NUM_TESTS];

    int numStudents;
    cout << "Enter the number of students (up to 80): ";
    cin >> numStudents;

    cin.ignore(); // Ignore the newline character left in the input buffer

    // Input names and scores for each student
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the name for student " << i + 1 << ": ";
        getline(cin, names[i]);

        for (int j = 0; j < NUM_TESTS; j++) {
            cout << "Enter the score for test " << j + 1 << " for " << names[i] << ": ";
            cin >> scores[i][j];
        }

        cin.ignore(); // Ignore the newline character left in the input buffer
    }

    // Calculate total and average scores for each student
    int totalScores[MAX_STUDENTS] = {0};
    double averageScores[MAX_STUDENTS] = {0.0};

    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < NUM_TESTS; j++) {
            totalScores[i] += scores[i][j];
        }
        averageScores[i] = static_cast<double>(totalScores[i]) / NUM_TESTS;
    }

    // Display the results in table format
    cout << "\n---------------------------------------------------------------\n";
    cout << setw(20) << left << "Name" << setw(10) << "Test 1" << setw(10) << "Test 2" << setw(10) << "Test 3"
         << setw(10) << "Total" << setw(10) << "Average" << endl;
    cout << "---------------------------------------------------------------\n";

    for (int i = 0; i < numStudents; i++) {
        cout << setw(20) << left << names[i];

        for (int j = 0; j < NUM_TESTS; j++) {
            cout << setw(10) << scores[i][j];
        }

        cout << setw(10) << totalScores[i] << setw(10) << fixed << setprecision(2) << averageScores[i] << endl;
    }

    cout << "---------------------------------------------------------------\n";*/

    /*bool name = true;
    cout << sizeof(bool);*/

    /*int num = 1;

    switch(num){
        case 1: 
            cout << "Yes";
            
        case 2:
            cout << "OHHH";
            
        case 3:
            cout << "And";
            break;
        default:
            cout << "so";
    }*/

    /*int a[] = {2,3,4,5,6};
    int size = sizeof(a)/sizeof(a[0]);

    int* start = a;
    int* end = a + (size-1);

    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    for(int i =0; i < size; i++){
        cout << a[i] << " ";
    }*/

    /*char ch[100];
    cout << "Enter a text: ";
    cin.getline(ch, 100);

    int i = 0, count = 0;
    while(i < strlen(ch)){
        if(ch[i] != '\t' && ch[i] != '\n'&& ch[i] != ' '){
            ch[i] = toupper(ch[i]);
        }
        i++;
    }
    cout << ch;*/

    /*string text;

    cout << "Enter a text: ";
    getline(cin, text);

    int i = 0;
    while(i < text.size()){
        if(text[i] != '\t' && text[i] != '\n'&& text[i] != ' '){
            text[i] = toupper(text[i]);
        }
        i++;        
    }

    cout << text;*/

    /*string text;

    cout << "Enter a text: ";
    getline(cin, text);
    bool isWord = false;
    int i = 0, count= 0;

    while(i < text.size()){
        if(text[i] == '\t' || text[i] == '\n'|| text[i] == ' '){
           isWord = false;
        }
        else if(!isWord){
            isWord = true;
            count++;
        }
        i++;
    }
    cout << count;*/

    /*char ch[100];
    cout << "Enter a word: ";
    cin >> ch;
    int size = strlen(ch);
    bool isPalindrome = true;
    int start = 0;
    int end = size-1;

    while(start < end){
        if(ch[start] != ch[end]){
            isPalindrome = false;
            break;
        }
        start++;
        end--;
        
    }
    if(isPalindrome){
        cout << "It is Palindrome";
    }
    else{
        cout << "It is not Palindrome.";
    }*/

    /*string text;

    cout << "Enter a text: ";
    getline(cin, text);
    int length = text.size();
    bool isPalindrome = true;
    int start = 0, end = length-1;

    while(start < end){
        if(text[start] != text[end]){
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }    

    if(isPalindrome){
        cout << "Yes";
    }
    else{
        cout << "No";
    }*/

    char ch1[10];
    char ch2[10];

    cout << "Enter the first string: ";
    cin >> ch1;

    cout << "Enter the second string: ";
    cin >> ch2;

    int size = strlen(ch2);

    cout << strncat(ch1,ch2,size);
}