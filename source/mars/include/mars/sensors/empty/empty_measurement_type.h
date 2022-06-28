// Copyright (C) 2022 Christian Brommer, Control of Networked Systems, University of Klagenfurt, Austria.
//
// All rights reserved.
//
// This software is licensed under the terms of the BSD-2-Clause-License with
// no commercial use allowed, the full terms of which are made available
// in the LICENSE file. No license in patents is granted.
//
// You can contact the author at <christian.brommer@ieee.org>

#ifndef EMPTYMEASUREMENTTYPE_H
#define EMPTYMEASUREMENTTYPE_H

#include <utility>

namespace mars
{
class EmptyMeasurementType
{
public:
  double value_;

  EmptyMeasurementType(double value) : value_(std::move(value))
  {
  }
};
}  // namespace mars
#endif  // EMPTYMEASUREMENTTYPE_H
