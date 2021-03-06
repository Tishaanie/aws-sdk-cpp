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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ReservedInstancesListing.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output of CancelReservedInstancesListing.</p>
   */
  class AWS_EC2_API CancelReservedInstancesListingResponse
  {
  public:
    CancelReservedInstancesListingResponse();
    CancelReservedInstancesListingResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CancelReservedInstancesListingResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The Reserved Instance listing.</p>
     */
    inline const Aws::Vector<ReservedInstancesListing>& GetReservedInstancesListings() const{ return m_reservedInstancesListings; }

    /**
     * <p>The Reserved Instance listing.</p>
     */
    inline void SetReservedInstancesListings(const Aws::Vector<ReservedInstancesListing>& value) { m_reservedInstancesListings = value; }

    /**
     * <p>The Reserved Instance listing.</p>
     */
    inline void SetReservedInstancesListings(Aws::Vector<ReservedInstancesListing>&& value) { m_reservedInstancesListings = value; }

    /**
     * <p>The Reserved Instance listing.</p>
     */
    inline CancelReservedInstancesListingResponse& WithReservedInstancesListings(const Aws::Vector<ReservedInstancesListing>& value) { SetReservedInstancesListings(value); return *this;}

    /**
     * <p>The Reserved Instance listing.</p>
     */
    inline CancelReservedInstancesListingResponse& WithReservedInstancesListings(Aws::Vector<ReservedInstancesListing>&& value) { SetReservedInstancesListings(value); return *this;}

    /**
     * <p>The Reserved Instance listing.</p>
     */
    inline CancelReservedInstancesListingResponse& AddReservedInstancesListings(const ReservedInstancesListing& value) { m_reservedInstancesListings.push_back(value); return *this; }

    /**
     * <p>The Reserved Instance listing.</p>
     */
    inline CancelReservedInstancesListingResponse& AddReservedInstancesListings(ReservedInstancesListing&& value) { m_reservedInstancesListings.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CancelReservedInstancesListingResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CancelReservedInstancesListingResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<ReservedInstancesListing> m_reservedInstancesListings;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws