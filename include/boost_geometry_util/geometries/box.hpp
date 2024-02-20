// Copyright (c) 2022 OUXT Polaris
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef BOOST_GEOMETRY_UTIL__GEOMETRIES__BOX_HPP_
#define BOOST_GEOMETRY_UTIL__GEOMETRIES__BOX_HPP_

#include <boost/geometry/geometries/box.hpp>
#include <boost/geometry/geometries/register/box.hpp>
#include <boost_geometry_util/geometries/point.hpp>
#include <geometry_msgs/msg/point.hpp>

namespace boost_geometry_util
{
class Box2D
{
public:
  explicit Box2D(const Point2D & min_corner, const Point2D & max_corner);
  explicit Box2D(const geometry_msgs::msg::Point & min_corner, const Point2D & max_corner);
  explicit Box2D(const Point2D & min_corner, const geometry_msgs::msg::Point & max_corner);
  explicit Box2D(
    const geometry_msgs::msg::Point & min_corner, const geometry_msgs::msg::Point & max_corner);
  Point2D min_corner;
  Point2D max_corner;
};
}  // namespace boost_geometry_util

BOOST_GEOMETRY_REGISTER_BOX(
  boost_geometry_util::Box2D, boost_geometry_util::Point2D, min_corner, max_corner)
#endif  // BOOST_GEOMETRY_UTIL__GEOMETRIES__BOX_HPP_
