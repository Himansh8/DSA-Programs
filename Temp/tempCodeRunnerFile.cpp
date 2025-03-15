Front(head);
    traverse(head);
    cout<<endl;
    
    head=deleteTail(head);
    traverse(head);
    cout<<endl;

    head=deleteK(head,1);
    traverse(head);
    cout<<endl;

    head=insertFront(head);
    traverse(head);
    cout<<endl;

    head=insertTail(head);
    traverse(head);
    cout<<endl;