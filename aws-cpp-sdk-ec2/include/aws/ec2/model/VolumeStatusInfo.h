﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VolumeStatusInfoStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VolumeStatusDetails.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the status of a volume.</p>
   */
  class AWS_EC2_API VolumeStatusInfo
  {
  public:
    VolumeStatusInfo();
    VolumeStatusInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    VolumeStatusInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The status of the volume.</p>
     */
    inline const VolumeStatusInfoStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the volume.</p>
     */
    inline void SetStatus(const VolumeStatusInfoStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the volume.</p>
     */
    inline void SetStatus(VolumeStatusInfoStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the volume.</p>
     */
    inline VolumeStatusInfo& WithStatus(const VolumeStatusInfoStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the volume.</p>
     */
    inline VolumeStatusInfo& WithStatus(VolumeStatusInfoStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The details of the volume status.</p>
     */
    inline const Aws::Vector<VolumeStatusDetails>& GetDetails() const{ return m_details; }

    /**
     * <p>The details of the volume status.</p>
     */
    inline void SetDetails(const Aws::Vector<VolumeStatusDetails>& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>The details of the volume status.</p>
     */
    inline void SetDetails(Aws::Vector<VolumeStatusDetails>&& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>The details of the volume status.</p>
     */
    inline VolumeStatusInfo& WithDetails(const Aws::Vector<VolumeStatusDetails>& value) { SetDetails(value); return *this;}

    /**
     * <p>The details of the volume status.</p>
     */
    inline VolumeStatusInfo& WithDetails(Aws::Vector<VolumeStatusDetails>&& value) { SetDetails(value); return *this;}

    /**
     * <p>The details of the volume status.</p>
     */
    inline VolumeStatusInfo& AddDetails(const VolumeStatusDetails& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }

    /**
     * <p>The details of the volume status.</p>
     */
    inline VolumeStatusInfo& AddDetails(VolumeStatusDetails&& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }

  private:
    VolumeStatusInfoStatus m_status;
    bool m_statusHasBeenSet;
    Aws::Vector<VolumeStatusDetails> m_details;
    bool m_detailsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
