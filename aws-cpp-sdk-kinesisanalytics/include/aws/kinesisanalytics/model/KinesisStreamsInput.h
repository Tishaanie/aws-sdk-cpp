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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p> Identifies an Amazon Kinesis stream as the streaming source. You provide the
   * stream's ARN and an IAM role ARN that enables Amazon Kinesis Analytics to access
   * the stream on your behalf.</p>
   */
  class AWS_KINESISANALYTICS_API KinesisStreamsInput
  {
  public:
    KinesisStreamsInput();
    KinesisStreamsInput(const Aws::Utils::Json::JsonValue& jsonValue);
    KinesisStreamsInput& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>ARN of the input Amazon Kinesis stream to read.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>ARN of the input Amazon Kinesis stream to read.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>ARN of the input Amazon Kinesis stream to read.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>ARN of the input Amazon Kinesis stream to read.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>ARN of the input Amazon Kinesis stream to read.</p>
     */
    inline KinesisStreamsInput& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>ARN of the input Amazon Kinesis stream to read.</p>
     */
    inline KinesisStreamsInput& WithResourceARN(Aws::String&& value) { SetResourceARN(value); return *this;}

    /**
     * <p>ARN of the input Amazon Kinesis stream to read.</p>
     */
    inline KinesisStreamsInput& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to grant the necessary permissions to this
     * role.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to grant the necessary permissions to this
     * role.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to grant the necessary permissions to this
     * role.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to grant the necessary permissions to this
     * role.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to grant the necessary permissions to this
     * role.</p>
     */
    inline KinesisStreamsInput& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to grant the necessary permissions to this
     * role.</p>
     */
    inline KinesisStreamsInput& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to grant the necessary permissions to this
     * role.</p>
     */
    inline KinesisStreamsInput& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

  private:
    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
