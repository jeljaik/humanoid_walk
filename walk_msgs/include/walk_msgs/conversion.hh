#ifndef WALK_MSGS_CONVERSION_HH
# define WALK_MSGS_CONVERSION_HH
# include <string>

# include <walk_interfaces/trajectory.hh>
# include <walk_interfaces/types.hh>

# include "geometry_msgs/Point.h"
# include "geometry_msgs/Pose.h"

# include "nav_msgs/Path.h"

# include "walk_msgs/Footprint2d.h"
# include "walk_msgs/PathPoint2d.h"
# include "walk_msgs/PathPoint3d.h"

namespace walk_msgs
{
  void convertPoseToHomogeneousMatrix(walk::HomogeneousMatrix3d& dst,
				      const geometry_msgs::Pose& src);
  void convertHomogeneousMatrixToPose(geometry_msgs::Pose&,
				      const walk::HomogeneousMatrix3d&);

  void convertTrajectoryToPath(nav_msgs::Path&,
			       const walk::Trajectory3d&,
			       const std::string& frameName);

  void convertTrajectoryV2dToPath(walk_msgs::PathPoint2d&,
				  const walk::TrajectoryV2d&,
				  const std::string& frameName);
  void convertTrajectoryV2dToPath(nav_msgs::Path& dst,
				  const walk::TrajectoryV2d& src,
				  const std::string& frameName);

  void convertTrajectoryV3dToPath(walk_msgs::PathPoint3d& dst,
				  const walk::TrajectoryV3d& src,
				  const std::string& frameName);
  void convertTrajectoryV3dToPath(nav_msgs::Path& dst,
				  const walk::TrajectoryV3d& src,
				  const std::string& frameName);

  void convertPointToVector3d(walk::Vector3d& dst,
			      const geometry_msgs::Point& src);

} // end of namespace walk_msgs.

#endif //! WALK_MSGS_CONVERSION_HH
