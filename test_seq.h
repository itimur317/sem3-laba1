#pragma once
#include <cassert>
#include "ArraySequence.h"
#include "ListSequence.h"
using namespace std;
// реярш дкъ яхйбемяю бяе блеяре

void test_arr_seq_1_GetLast() {
    ArraySequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Append(13);
    assert(13 == seq->GetLast());
    seq->Append(15);
    assert(15 == seq->GetLast());
    seq->Append(0);
    seq->Append(-13);
    assert(-13 == seq->GetLast());
}

void test_list_seq_1_GetLast() {
    ListSequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Append(14);
    assert(14 == seq->GetLast());
    seq->Append(15);
    assert(15 == seq->GetLast());
    seq->Append(0);
    seq->Append(-11);
    assert(-11 == seq->GetLast());
}

void test_arr_seq_2_GetFirst() {
    ArraySequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Append(13);
    assert(13 == seq->GetFirst());
    seq->Prepend(16);
    assert(16 == seq->GetFirst());
    seq->Prepend(111);
    assert(111 == seq->GetFirst());
}

void test_list_seq_2_GetFirst() {
    ListSequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Append(17);
    assert(17 == seq->GetFirst());
    seq->Prepend(5);
    assert(5 == seq->GetFirst());
    seq->Prepend(1114);
    assert(1114 == seq->GetFirst());
}

void test_arr_seq_3_Get() {
    ArraySequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Prepend(12);
    seq->Prepend(14);
    seq->Prepend(16);
    assert(14 == seq->Get(1));
    assert(16 == seq->Get(0));
    assert(12 == seq->Get(2));
}

void test_list_seq_3_Get() {
    ListSequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Prepend(-12);
    seq->Prepend(-14);
    seq->Prepend(-16);
    assert(-14 == seq->Get(1));
    assert(-16 == seq->Get(0));
    assert(-12 == seq->Get(2));
}

void test_arr_seq_4_Insert() {
    ArraySequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->InsertAt(14, 0);
    seq->InsertAt(15, 1);
    seq->InsertAt(16, 2);
    seq->InsertAt(17, 3);
    assert(14 == seq->Get(0));
    assert(15 == seq->Get(1));
    assert(16 == seq->Get(2));
    assert(17 == seq->Get(3));
}

void test_list_seq_4_Insert() {
    ListSequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->InsertAt(114, 0);
    seq->InsertAt(115, 1);
    seq->InsertAt(116, 2);
    seq->InsertAt(117, 3);
    assert(114 == seq->Get(0));
    assert(115 == seq->Get(1));
    assert(116 == seq->Get(2));
    assert(117 == seq->Get(3));
    assert(seq->GetLength() == 4);
}


void test_arr_seq_5_GetLength() {
    ArraySequence<int> testing;
    Sequence<int>* seq = &testing;
    assert(0 == seq->GetLength());
    seq->Append(14);
    seq->Append(124);
    seq->Append(134);
    seq->Append(144);
    assert(4 == seq->GetLength());
}

void test_list_seq_5_GetLength() {
    ListSequence<int> testing;
    Sequence<int>* seq = &testing;
    assert(0 == seq->GetLength());
    seq->Append(14);
    seq->Append(124);
    seq->Append(134);
    seq->Append(144);
    assert(4 == seq->GetLength());
}

void test_arr_seq_6_delete() {
    ArraySequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Append(14);
    seq->Append(124);
    seq->Append(134);
    seq->Append(144);
    seq->delete_i(0);
    assert(124 == seq->GetFirst());
    assert(144 == seq->GetLast());
    assert(3 == seq->GetLength());
    seq->delete_i(2);
    assert(124 == seq->GetFirst());
    assert(134 == seq->GetLast());
    assert(2 == seq->GetLength());
}

void test_list_seq_6_delete() {
    ListSequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Append(14);
    seq->Append(124);
    seq->Append(134);
    seq->Append(144);
    seq->delete_i(0);
    assert(124 == seq->GetFirst());
    assert(144 == seq->GetLast());
    assert(3 == seq->GetLength());
    seq->delete_i(2);
    assert(124 == seq->GetFirst());
    assert(134 == seq->GetLast());
    assert(2 == seq->GetLength());
}

void test_arr_seq_7_SubSeq() {
    ArraySequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Append(14);
    seq->Append(124);
    seq->Append(134);
    seq->Append(144);
    assert(14 == seq->GetSubSequence(0, 2)->Get(0));
    assert(124 == seq->GetSubSequence(0, 2)->Get(1));
    assert(2 == seq->GetSubSequence(0, 2)->GetLength());
}

void test_list_seq_7_SubSeq() {
    ListSequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Append(14);
    seq->Append(124);
    seq->Append(134);
    seq->Append(144);
    assert(14 == seq->GetSubSequence(0, 2)->Get(0));
    assert(124 == seq->GetSubSequence(0, 2)->Get(1));
    assert(2 == seq->GetSubSequence(0, 2)->GetLength());
}

void test_arr_seq_8_Concat() {
    ArraySequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Append(14);
    seq->Append(124);
    seq->Append(134);
    seq->Append(144);
    ArraySequence<int> testing2;
    Sequence<int>* seq2 = &testing;
    seq2->Concat(seq);
    assert(seq2->GetLength() == 4);
    assert(14 == seq2->Get(0));
    assert(144 == seq2->Get(3));
}

void test_list_seq_8_Concat() {
    ListSequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Append(14);
    seq->Append(124);
    seq->Append(134);
    seq->Append(144);
    ArraySequence<int> testing2;
    Sequence<int>* seq2 = &testing;
    seq2->Concat(seq);
    assert(seq2->GetLength() == 4);
    assert(14 == seq2->Get(0));
    assert(144 == seq2->Get(3));
}

void test_arr_seq_9_Concat() {
    ArraySequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Append(14);
    seq->Append(124);
    seq->Append(134);
    seq->Append(144);
    ArraySequence<int> testing2;
    Sequence<int>* seq2 = &testing;
    seq->Concat(seq2);
    assert(seq->GetLength() == 4);
    assert(14 == seq->Get(0));
    assert(144 == seq->Get(3));
}

void test_list_seq_9_Concat() {
    ListSequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Append(14);
    seq->Append(124);
    seq->Append(134);
    seq->Append(144);
    ArraySequence<int> testing2;
    Sequence<int>* seq2 = &testing;
    seq->Concat(seq2);
    assert(seq->GetLength() == 4);
    assert(14 == seq->Get(0));
    assert(144 == seq->Get(3));
}

void test_arr_seq_10_Concat() {
    ArraySequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Append(14);
    seq->Append(124);
    seq->Append(134);
    seq->Append(144);
    ArraySequence<int> testing2;
    Sequence<int>* seq2 = &testing;
    seq2->Append(134);
    seq2->Append(144);
    seq->Concat(seq2);
    assert(seq->GetLength() == 6);
    assert(14 == seq->Get(0));
    assert(144 == seq->Get(5));
    assert(144 == seq->Get(3));
}


void test_list_seq_10_Concat() {
    ListSequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Append(14);
    seq->Append(124);
    seq->Append(134);
    seq->Append(144);
    ArraySequence<int> testing2;
    Sequence<int>* seq2 = &testing;
    seq2->Append(134);
    seq2->Append(144);
    seq->Concat(seq2);
    assert(seq->GetLength() == 6);
    assert(14 == seq->Get(0));
    assert(144 == seq->Get(5));
    assert(144 == seq->Get(3));
}

void test_arr_seq_11_construct() {
    int* a = new int[5];
    for (int i = 0; i < 5; i++) {
        a[i] = i + 2;
    }
    ArraySequence<int> testing(a, 5);
    Sequence<int>* seq = &testing;
    for (int i = 0; i < 5; i++) {
        assert(a[i] == seq->Get(i));
    }
    assert(5 == seq->GetLength());
}

void test_arr_seq_12_construct() {
    int* a = new int[5];
    for (int i = 0; i < 5; i++) {
        a[i] = i + 2;
    }
    ArraySequence<int> testing(5);
    Sequence<int>* seq = &testing;
    for (int i = 0; i < 5; i++) {
        seq->InsertAt(a[i], i);
    }
    assert(10 == seq->GetLength());
    for (int i = 0; i < 5; i++) {
        assert(seq->Get(i) == a[i]);
    }
}

void test_arr_seq_13_construct() {
    int* a = new int[5];
    for (int i = 0; i < 5; i++) {
        a[i] = i + 2;
    }
    ArraySequence<int> testing(a, 5);
    Sequence<int>* seq = &testing;
    Sequence <int>* copied(seq);
    for (int i = 0; i < 5; i++) {
        assert(a[i] == seq->Get(i));
    }
    assert(5 == seq->GetLength());
}

void test_list_seq_11_construct() {
    int* a = new int[5];
    for (int i = 0; i < 5; i++) {
        a[i] = i + 2;
    }
    ListSequence<int> testing(a, 5);
    Sequence<int>* seq = &testing;
    for (int i = 0; i < 5; i++) {
        assert(a[i] == seq->Get(i));
    }
    assert(5 == seq->GetLength());
}

void test_list_seq_12_construct() {
    ListSequence<int> testing;
    Sequence<int>* seq = &testing;
    for (int i = 0; i < 5; i++) {
        seq->InsertAt(i + 2, i);
    }
    Sequence <int>* copied(seq);
    for (int i = 0; i < 5; i++) {
        assert(i + 2 == seq->Get(i));
    }
    assert(5 == seq->GetLength());
}

void test_arr_seq_14_Set() {
    int* a = new int[5];
    for (int i = 0; i < 5; i++) {
        a[i] = i + 2;
    }
    ArraySequence<int> testing(a, 5);
    Sequence<int>* seq = &testing;
    seq->Set(3, 14);
    assert(5 == seq->GetLength());
    assert(14 == seq->Get(3));
    assert(4 == seq->Get(2));
    assert(6 == seq->Get(4));
}

void test_list_seq_13_Set() {
    int* a = new int[5];
    for (int i = 0; i < 5; i++) {
        a[i] = i + 2;
    }
    ListSequence<int> testing(a, 5);
    Sequence<int>* seq = &testing;
    seq->Set(3, 14);
    assert(5 == seq->GetLength());
    assert(14 == seq->Get(3));
    assert(4 == seq->Get(2));
    assert(6 == seq->Get(4));
}

void test_arr_seq_15_Set() {
    ArraySequence<int> testing(1);
    Sequence<int>* seq = &testing;
    seq->Set(0, 14);
    assert(14 == seq->Get(0));
    assert(1 == seq->GetLength());
}

void test_list_seq_14_Set() {
    ListSequence<int> testing;
    Sequence<int>* seq = &testing;
    seq->Append(10);
    seq->Set(0, 111);
    assert(1 == seq->GetLength());
    assert(111 == seq->Get(0));
}

void test_list_seq_15_Set() {
    int* a = new int[5];
    for (int i = 0; i < 5; i++) {
        a[i] = i + 2;
    }
    ListSequence<int> testing(a, 5);
    Sequence<int>* seq = &testing;
    for (int i = 0; i < 5; i++) {
        seq->Set(i, i);
    }
    assert(5 == seq->GetLength());
    for (int i = 0; i < 5; i++) {
        assert(seq->Get(i) == i);
    }

}

void Test_seq() {
    test_arr_seq_1_GetLast();
    test_arr_seq_2_GetFirst();
    test_arr_seq_3_Get();
    test_arr_seq_4_Insert();
    test_arr_seq_5_GetLength();
    test_arr_seq_6_delete();
    test_arr_seq_7_SubSeq();
    test_arr_seq_8_Concat();
    test_arr_seq_9_Concat();
    test_arr_seq_10_Concat();
    test_arr_seq_11_construct();
    test_arr_seq_12_construct();
    test_arr_seq_13_construct();
    test_arr_seq_14_Set();
    test_arr_seq_15_Set();
    test_list_seq_1_GetLast();
    test_list_seq_2_GetFirst();
    test_list_seq_3_Get();
    test_list_seq_4_Insert();
    test_list_seq_5_GetLength();
    test_list_seq_6_delete();
    test_list_seq_7_SubSeq();
    test_list_seq_8_Concat();
    test_list_seq_9_Concat();
    test_list_seq_10_Concat();
    test_list_seq_11_construct();
    test_list_seq_12_construct();
    test_list_seq_13_Set();
    test_list_seq_14_Set();
    test_list_seq_15_Set();
}
