#ifndef CD_KFStripUpdator_H_
#define CD_KFStripUpdator_H_

#include "TrackingTools/PatternTools/interface/TrajectoryStateUpdator.h"

/** A Kalman Updator that works in the measurement frame and uses
 *  both hit coordinates.
 */

class KFStripUpdator : public TrajectoryStateUpdator {

private:
  
  typedef TrajectoryStateOnSurface TSOS;
  typedef LocalTrajectoryParameters LTP;
  typedef LocalTrajectoryError LTE;
  
public:

  KFStripUpdator() {}

  ~KFStripUpdator() {}

  virtual TSOS update(const TSOS& aTsos, const TransientTrackingRecHit& aHit) const;

#ifndef CMS_NO_RELAXED_RETURN_TYPE
  virtual KFStripUpdator * clone() const 
#else
  virtual TrajectoryStateUpdator * clone() const 
#endif
  {
    return new KFStripUpdator(*this);
  }

};

#endif// CD_KFStripUpdator_H_