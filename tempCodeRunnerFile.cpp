char name[20];

    cout << "Enter your name " << endl;
    cin >> name;
    //name[2] = '\0';

    cout << "Your name is ";
    cout << name << endl;
    int len = getLength(name);
    cout << " Length: " << len << endl;