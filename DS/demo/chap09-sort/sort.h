#pragma once

#include "record.h"

//insertion
extern void InsSort(RecordType r[], int length);
extern void BinSort (RecordType r[], int length);
extern void ShellSort(RecordType r[], int length);

//swap
extern void BubbleSort(RecordType r[], int length);
extern void QuickSort(RecordType r[], int length);