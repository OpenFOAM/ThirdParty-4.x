/*=========================================================================

  Program:   ParaView
  Module:    vtkPVCacheKeeper.h

  Copyright (c) Kitware, Inc.
  All rights reserved.
  See Copyright.txt or http://www.paraview.org/HTML/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
// .NAME vtkPVCacheKeeper - manages data cache for flip book animations.
// .SECTION Description
// vtkPVCacheKeeper manages data cache for flip book animations.
// When caching is disabled, this simply acts as a pass through filter.
// When caching is enabled, is the current time step has been previously cached
// then this filter shuts the update request, otherwise propagates the update
// and then cache the result for later use.  The current time step is set using
// SetCacheTime().
// .SECTION See Also
// vtkPVCacheKeeperPipeline

#ifndef vtkPVCacheKeeper_h
#define vtkPVCacheKeeper_h

#include "vtkPVClientServerCoreRenderingModule.h" //needed for exports
#include "vtkDataObjectAlgorithm.h"

class vtkCacheSizeKeeper;

class VTKPVCLIENTSERVERCORERENDERING_EXPORT vtkPVCacheKeeper : public vtkDataObjectAlgorithm
{
public:
  static vtkPVCacheKeeper* New();
  vtkTypeMacro(vtkPVCacheKeeper, vtkDataObjectAlgorithm);
  void PrintSelf(ostream& os, vtkIndent indent);

  // Description:
  // Methods for saving, clearing and updating flip books.
  // This removes all saved cache.
  void RemoveAllCaches();

  // Description:
  // Set/Get the current cache time.
  vtkSetMacro(CacheTime, double);
  vtkGetMacro(CacheTime, double);

  // Description:
  // Returns if the given \c cacheTime is available in the cache. 
  // Does not cause any updates.
  bool IsCached(double cacheTime);
  bool IsCached()
    { return this->IsCached(this->CacheTime); }

  // Description:
  // Get/Set if caching is enabled. Default is true.
  vtkSetMacro(CachingEnabled, bool);
  vtkGetMacro(CachingEnabled, bool);
  vtkBooleanMacro(CachingEnabled, bool);

  // Description:
  // These methods are used for testing. Using this global state we can add
  // checks to ensure that cache was used or not used for a particular sequence
  // of actions.
  static void ClearCacheStateFlags();
  static int GetCacheHits();
  static int GetCacheMisses();
  static int GetCacheSkips();

//BTX
protected:
  vtkPVCacheKeeper();
  ~vtkPVCacheKeeper();

  // Description:
  // Get/Set the cache size keeper. The cacher
  // reports its cache size to this keeper, if any.
  void SetCacheSizeKeeper(vtkCacheSizeKeeper*);
  vtkGetObjectMacro(CacheSizeKeeper, vtkCacheSizeKeeper);

  int RequestDataObject(vtkInformation* request, vtkInformationVector **inputVector,
    vtkInformationVector *outputVector);
  int RequestData(vtkInformation* request, vtkInformationVector **inputVector,
    vtkInformationVector *outputVector);
  virtual vtkExecutive* CreateDefaultExecutive();

  // Description:
  // Called to save the data in cache. Returns true if data is saved otherwise
  // false.
  bool SaveData(vtkDataObject*);

  bool CachingEnabled;
  double CacheTime;
  vtkCacheSizeKeeper* CacheSizeKeeper;

private:
  vtkPVCacheKeeper(const vtkPVCacheKeeper&); // Not implemented
  void operator=(const vtkPVCacheKeeper&); // Not implemented

  class vtkCacheMap;
  vtkCacheMap* Cache;

  static int CacheHit;
  static int CacheMiss;
  static int CacheSkips;
//ETX
};

#endif
