/*
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
#include <aws/firehose/model/RedshiftDestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

RedshiftDestinationConfiguration::RedshiftDestinationConfiguration() : 
    m_roleARNHasBeenSet(false),
    m_clusterJDBCURLHasBeenSet(false),
    m_copyCommandHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_s3ConfigurationHasBeenSet(false),
    m_cloudWatchLoggingOptionsHasBeenSet(false)
{
}

RedshiftDestinationConfiguration::RedshiftDestinationConfiguration(const JsonValue& jsonValue) : 
    m_roleARNHasBeenSet(false),
    m_clusterJDBCURLHasBeenSet(false),
    m_copyCommandHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_s3ConfigurationHasBeenSet(false),
    m_cloudWatchLoggingOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftDestinationConfiguration& RedshiftDestinationConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");

    m_roleARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterJDBCURL"))
  {
    m_clusterJDBCURL = jsonValue.GetString("ClusterJDBCURL");

    m_clusterJDBCURLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyCommand"))
  {
    m_copyCommand = jsonValue.GetObject("CopyCommand");

    m_copyCommandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Password"))
  {
    m_password = jsonValue.GetString("Password");

    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Configuration"))
  {
    m_s3Configuration = jsonValue.GetObject("S3Configuration");

    m_s3ConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchLoggingOptions"))
  {
    m_cloudWatchLoggingOptions = jsonValue.GetObject("CloudWatchLoggingOptions");

    m_cloudWatchLoggingOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftDestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_clusterJDBCURLHasBeenSet)
  {
   payload.WithString("ClusterJDBCURL", m_clusterJDBCURL);

  }

  if(m_copyCommandHasBeenSet)
  {
   payload.WithObject("CopyCommand", m_copyCommand.Jsonize());

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_s3ConfigurationHasBeenSet)
  {
   payload.WithObject("S3Configuration", m_s3Configuration.Jsonize());

  }

  if(m_cloudWatchLoggingOptionsHasBeenSet)
  {
   payload.WithObject("CloudWatchLoggingOptions", m_cloudWatchLoggingOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws