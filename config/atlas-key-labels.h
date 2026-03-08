#pragma once

// Atlas key positions (58 keys)
//
// Row 3 (number row) — positions 0–11
// ╭─────────────────────────────────────╮ ╭─────────────────────────────────────╮
// │ LN5  LN4  LN3  LN2  LN1  LN0       │ │       RN0  RN1  RN2  RN3  RN4  RN5 │
// Row 2 (top alpha) — positions 12–23
// │ LT5  LT4  LT3  LT2  LT1  LT0       │ │       RT0  RT1  RT2  RT3  RT4  RT5 │
// Row 1 (home row) — positions 24–35
// │ LM5  LM4  LM3  LM2  LM1  LM0       │ │       RM0  RM1  RM2  RM3  RM4  RM5 │
// Row 0 (bottom row) — positions 36–47
// │ LB5  LB4  LB3  LB2  LB1  LB0       │ │       RB0  RB1  RB2  RB3  RB4  RB5 │
// ╰──────────────────────────────────╮  LH4  LH3  LH2  LH1  LH0 │ RH0  RH1  RH2  RH3  RH4 ╭─╯
//                                   ╰──────────────────────────────────────────────────────╯
// Thumb row — positions 48–57 (col 0 missing on left, col 11 missing on right)

// Number row (row 3)
#define LN5  0
#define LN4  1
#define LN3  2
#define LN2  3
#define LN1  4
#define LN0  5
#define RN0  6
#define RN1  7
#define RN2  8
#define RN3  9
#define RN4 10
#define RN5 11

// Top alpha row (row 2)
#define LT5 12
#define LT4 13
#define LT3 14
#define LT2 15
#define LT1 16
#define LT0 17
#define RT0 18
#define RT1 19
#define RT2 20
#define RT3 21
#define RT4 22
#define RT5 23

// Home row (row 1)
#define LM5 24
#define LM4 25
#define LM3 26
#define LM2 27
#define LM1 28
#define LM0 29
#define RM0 30
#define RM1 31
#define RM2 32
#define RM3 33
#define RM4 34
#define RM5 35

// Bottom row (row 0)
#define LB5 36
#define LB4 37
#define LB3 38
#define LB2 39
#define LB1 40
#define LB0 41
#define RB0 42
#define RB1 43
#define RB2 44
#define RB3 45
#define RB4 46
#define RB5 47

// Thumb row (row 4): LH0 = innermost, LH4 = outermost
#define LH4 48
#define LH3 49
#define LH2 50
#define LH1 51
#define LH0 52
#define RH0 53
#define RH1 54
#define RH2 55
#define RH3 56
#define RH4 57
