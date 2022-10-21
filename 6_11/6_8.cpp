 #include<iostream>
 #include<fstream>
const int SIZE=60;

 int main(){

    char filename[SIZE];
    std::ifstream inFile;
    std::cout << "Enter the name of data file: ";
    std::cin.getline(filename,SIZE);
    inFile.open(filename);
    if(!inFile.is_open()){
        std::cout<<"Could not open the file"<<filename<<std::endl;
        std::cout<<"Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    char str;
    int count=0;
    inFile>>str;
    while(inFile.good()){
        count++;
        inFile>>str;
    }
    if (inFile.eof())
	std::cout << "End of file reached.\n";
    inFile.close();
    std::cout<< "The total number of characters is " << count<<std::endl;

    return 0;
 }