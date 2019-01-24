ForwardIt my_unique(ForwardIt first, ForwardIt last, BinaryPredicate p)
{
    ForwardIt my_iterator1 = first;
    ForwardIt my_iterator2 = my_iterator1;
    my_iterator2++;
    while (my_iterator2 != last)
    {
        if (p(*my_iterator1,*my_iterator2))


        my_iterator2++;
        my_iterator1++;
    }
}
