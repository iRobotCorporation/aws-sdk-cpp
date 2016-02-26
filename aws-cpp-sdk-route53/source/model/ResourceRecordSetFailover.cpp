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
#include <aws/route53/model/ResourceRecordSetFailover.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int PRIMARY_HASH = HashingUtils::HashString("PRIMARY");
static const int SECONDARY_HASH = HashingUtils::HashString("SECONDARY");

namespace Aws
{
namespace Route53
{
namespace Model
{
namespace ResourceRecordSetFailoverMapper
{


ResourceRecordSetFailover GetResourceRecordSetFailoverForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRIMARY_HASH)
  {
     return ResourceRecordSetFailover::PRIMARY;
  }
  else if (hashCode == SECONDARY_HASH)
  {
     return ResourceRecordSetFailover::SECONDARY;
  }
  return ResourceRecordSetFailover::NOT_SET;
}

Aws::String GetNameForResourceRecordSetFailover(ResourceRecordSetFailover enumValue)
{
  switch(enumValue)
  {
  case ResourceRecordSetFailover::PRIMARY:
    return "PRIMARY";
  case ResourceRecordSetFailover::SECONDARY:
    return "SECONDARY";
  default:
    return "";
  }
}

} // namespace ResourceRecordSetFailoverMapper
} // namespace Model
} // namespace Route53
} // namespace Aws