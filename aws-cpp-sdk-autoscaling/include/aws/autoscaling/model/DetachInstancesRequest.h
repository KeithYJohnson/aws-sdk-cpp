/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /*
  */
  class AWS_AUTOSCALING_API DetachInstancesRequest : public AutoScalingRequest
  {
  public:
    DetachInstancesRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>One or more instance IDs.</p>
    */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }
    /*
     <p>One or more instance IDs.</p>
    */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /*
     <p>One or more instance IDs.</p>
    */
    inline DetachInstancesRequest&  WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /*
     <p>One or more instance IDs.</p>
    */
    inline DetachInstancesRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /*
     <p>One or more instance IDs.</p>
    */
    inline DetachInstancesRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /*
     <p>The name of the group.</p>
    */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    /*
     <p>The name of the group.</p>
    */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupName = value; }

    /*
     <p>The name of the group.</p>
    */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupName.assign(value); }

    /*
     <p>The name of the group.</p>
    */
    inline DetachInstancesRequest&  WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /*
     <p>The name of the group.</p>
    */
    inline DetachInstancesRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /*
     <p>If <code>True</code>, the Auto Scaling group decrements the desired capacity value by the number of instances detached.</p>
    */
    inline bool GetShouldDecrementDesiredCapacity() const{ return m_shouldDecrementDesiredCapacity; }
    /*
     <p>If <code>True</code>, the Auto Scaling group decrements the desired capacity value by the number of instances detached.</p>
    */
    inline void SetShouldDecrementDesiredCapacity(bool value) { m_shouldDecrementDesiredCapacity = value; }

    /*
     <p>If <code>True</code>, the Auto Scaling group decrements the desired capacity value by the number of instances detached.</p>
    */
    inline DetachInstancesRequest&  WithShouldDecrementDesiredCapacity(bool value) { SetShouldDecrementDesiredCapacity(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet;
    Aws::String m_autoScalingGroupName;
    bool m_shouldDecrementDesiredCapacity;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws