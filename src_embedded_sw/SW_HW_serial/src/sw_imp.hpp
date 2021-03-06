#ifndef SRC_SW_IMP_HPP_
#define SRC_SW_IMP_HPP_

#include <math.h>
#include "xparameters.h"
#include "xil_printf.h"
#include "xtime_l.h"
#include "Dense"

#include "utility.hpp"

using namespace Eigen;

typedef Matrix<u8, Dynamic, Dynamic, Eigen::RowMajor> Data_t;

void sw_load_weights(u16* weights);
void sw_rand_weights();

float sw_train(u8* features, u8* labels, u16 nb_ex, u16 nb_iterations);
void sw_predict(u8* features, u8* results, u16 nb_ex);

//void sw_feedforward(const Ref<const Data_T> data_in, Ref<MatrixXf> h);

#endif
