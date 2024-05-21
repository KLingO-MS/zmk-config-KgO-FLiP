/*                              34 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────┬────────────────────╮ ╭─────────────────────┬─────────────────────╮
  │  0   1   2   3   4 │  5   6   7   8   9 │ │ LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 │
  │ 10  11  12  13  14 │ 15  16  17  18  19 │ │ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
  │     20  21  22     |     23  24  25     │ │     LB3 LB2 LB1     │     RB1 RB2 RB3     │
  ╰───────────╮ 26  27 | 28  29 ╭───────────╯ ╰───────────╮ LH1 LH0 │ RH0 RH1 ╭───────────╯
              ╰────────┴────────╯                         ╰─────────┴─────────╯             */

#pragma once

#define LTC  4  // left-top row
#define LTI  3
#define LTM  2
#define LTR  1
#define LTP  0

#define RTC  5  // right-top row
#define RTI  6
#define RTM  7
#define RTR  8
#define RTP  9

#define LMC 14  // left-middle row
#define LMI 13
#define LMM 12
#define LMR 11
#define LMP 10

#define RMC 15  // right-middle row
#define RMI 16
#define RMM 17
#define RMR 18
#define RMP 19

#define LBI 22  // left-bottom row
#define LBM 21
#define LBR 20

#define RBI 23  // right-bottom row
#define RBM 24
#define RBR 25

#define LHI 27  // left thumb keys
#define LHO 26

#define RHI 28  // right thumb keys
#define RHO 29

#define KEYS_L LTC LTI LTM LTR LTP LMC LMI LMM LMR LMP LBI LBM LBR  // left-hand keys
#define KEYS_R RTC RTI RTM RTR RTP RMC RMI RMM RMR RMP RBI RBM RBR  // right-hand keys
#define THUMBS LHO LHI RHI RHO
