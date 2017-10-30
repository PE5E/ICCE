    cout << "extracted first number: " << no1 << '\n';
                                    // discards istr contents, copies argv[2] 
    istr.str(argv[2]);              // into istr, moves writing position to end
                                    // of stream, but does not unset eof even
                                    // though it is fixed

    istr.clear();                   // we have fixed the eof, so we may clear
                                    // the eof bit

    size_t no2 = 0;                 
  
