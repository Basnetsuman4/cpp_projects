 switch (choose)
        {
            case 1:
            {
                int choice2;
                cout<<"\t=> Press 1 for registration of teacher."<<endl;
                cout<<"\t=> Press 2 for registration of officer."<<endl;
                cout<<"\t=> Press 3 for registration of typist."<<endl;
                cin>>choice2;

                switch (choice2)
                {
                    case 1:
                        { 
                            t.get_name();
                            t.get_code();
                            t.get_sub_and_publication(); 
                        }     
                        break;

                    case 2:
                        {
                            o.get_name();
                            o.get_code();
                            o.get_grade();
                        }
                        break;

                    case 3:
                        {
                            typ.get_name();
                            typ.get_code();
                            typ.get_speed();

                            cout<<"=> Press 1 for regular typist"<<endl;
                            cout<<"=> Press 2 for casual typidt"<<endl;
                            int choice3;
                            cin>>choice3;
                            switch (choice3)
                            {
                                case 1:
                                        r.get_wages1();
                                
                                    break;
                                case 2:
                                        c.get_wages2();
                                    break;                                
                                
                                default:
                                    cout<<"Invalid Option " ;
                                    break;
                            }
                        }
                        break;
                    default:
                        cout<<"Invalid Option " ;
                        break;
                }
            }
                break;
    
            case 2:
                    {
                        int choice4;
                        cout<<"\t=> Press 1 for display information of teacher."<<endl;
                        cout<<"\t=> Press 2 for display information of officer."<<endl;
                        cout<<"\t=> Press 3 for display information of typist."<<endl;
                        
                        cin>>choice4;

                        switch (choice4)
                        {
                        case 1:
                            {
                                t.display_sub_publication();
                            }
                            break;

                        case 2:
                            {
                                o.display_grade();
                            }
                            break;

                        case 3:
                            {
                                typ.display_speed();                            }
                            break;

                        default:
                            cout<<"Invalid Option " ;
                            break;
                        }    
                    }
                break;
    
            default:
                cout<<"Invalid Option " ;
                break;
        }
 