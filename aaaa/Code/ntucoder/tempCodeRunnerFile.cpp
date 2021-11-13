 string st,s="";
    char c;
    getline(cin,st);
    cin >> c;

    while(st.find(c) != -1){
        st.erase(st.begin() + st.find(c));
    }
    cout << st;