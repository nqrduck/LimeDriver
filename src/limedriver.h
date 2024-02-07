#ifndef LIMECONFIG_H
#define LIMECONFIG_H

#include "H5Cpp.h"
#include "lime/LimeSuite.h"
#include <chrono>
#include <cstddef>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <math.h>
#include <sstream>
#include <stdio.h>
#include <string.h>

#include <errno.h> // errno, ENOENT, EEXIST
#include <string>
#include <sys/stat.h> // stat
#include <sys/types.h>
#include <vector>
#if defined(_WIN32)
#include <direct.h> // _mkdir
#endif


struct LimeConfig_t {

  float srate;
  float frq;
  float frq_set;
  float RX_LPF;
  float TX_LPF;
  int RX_gain;
  int TX_gain;
  int TX_IcorrDC;
  int TX_QcorrDC;
  int TX_IcorrGain;
  int TX_QcorrGain;
  int TX_IQcorrPhase;
  int RX_IcorrGain;
  int RX_QcorrGain;
  int RX_IQcorrPhase;
  int RX_gain_rback[4];
  int TX_gain_rback[3];

  int Npulses;
  double *p_dur;
  int *p_dur_smp;
  int *p_offs;
  double *p_amp;
  double *p_frq;
  double *p_frq_smp;
  double *p_pha;
  int *p_phacyc_N;
  int *p_phacyc_lev;
  double *am_frq;
  double *am_pha;
  double *am_depth;
  int *am_mode;
  double *am_frq_smp;
  double *fm_frq;
  double *fm_pha;
  double *fm_width;
  int *fm_mode;
  double *fm_frq_smp;

  int *p_c0_en;
  int *p_c1_en;
  int *p_c2_en;
  int *p_c3_en;

  int c0_tim[4];
  int c1_tim[4];
  int c2_tim[4];
  int c3_tim[4];

  int c0_synth[5];
  int c1_synth[5];
  int c2_synth[5];
  int c3_synth[5];

  int averages;
  int repetitions;
  int pcyc_bef_avg;
  double reptime_secs;
  double rectime_secs;
  int reptime_smps;
  int rectime_smps;
  int buffersize;

  std::string file_pattern;
  std::string file_stamp;
  std::string save_path;
  int override_save;
  int override_init;

  std::string stamp_start;
  std::string stamp_end;
};

// structure that will be used to map LimeConfig to HDF attribute
struct Config2HDFattr_t {
  std::string arg;
  H5std_string Name;
  H5::DataType dType;
  void *Value;
  hsize_t dim;
};

// Device structure, should be initialize to NULL
static lms_device_t *device = NULL;

#endif // LIMECONFIG_H