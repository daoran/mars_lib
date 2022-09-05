// Copyright (C) 2022 Christian Brommer, Control of Networked Systems, University of Klagenfurt, Austria.
//
// All rights reserved.
//
// This software is licensed under the terms of the BSD-2-Clause-License with
// no commercial use allowed, the full terms of which are made available
// in the LICENSE file. No license in patents is granted.
//
// You can contact the author at <christian.brommer@ieee.org>

#ifndef MEASUREMENT_BASE_CLASS_H
#define MEASUREMENT_BASE_CLASS_H

#include <mars/sensors/measurement_interface.h>

#include <Eigen/Dense>

namespace mars
{
class BaseMeas : public MeasInterface
{
public:
  Eigen::MatrixXd meas_noise;
  bool has_meas_noise{ false };

  Eigen::MatrixXd get_meas_noise()
  {
    if (this->has_meas_noise)
    {
      return this->meas_noise;
    }
    else
    {
      return Eigen::MatrixXd();
    }
  }
};
}  // namespace mars

#endif  // MEASUREMENT_BASE_CLASS_H
