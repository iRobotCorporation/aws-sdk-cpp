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
#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <i>ModifyReplicationGroups</i> action.</p>
   */
  class AWS_ELASTICACHE_API ModifyReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    ModifyReplicationGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline ModifyReplicationGroupRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline ModifyReplicationGroupRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline ModifyReplicationGroupRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline const Aws::String& GetReplicationGroupDescription() const{ return m_replicationGroupDescription; }

    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline void SetReplicationGroupDescription(const Aws::String& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = value; }

    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline void SetReplicationGroupDescription(Aws::String&& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = value; }

    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline void SetReplicationGroupDescription(const char* value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription.assign(value); }

    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline ModifyReplicationGroupRequest& WithReplicationGroupDescription(const Aws::String& value) { SetReplicationGroupDescription(value); return *this;}

    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline ModifyReplicationGroupRequest& WithReplicationGroupDescription(Aws::String&& value) { SetReplicationGroupDescription(value); return *this;}

    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline ModifyReplicationGroupRequest& WithReplicationGroupDescription(const char* value) { SetReplicationGroupDescription(value); return *this;}

    /**
     * <p>If this parameter is specified, ElastiCache will promote the specified
     * cluster in the specified replication group to the primary role. The nodes of all
     * other clusters in the replication group will be read replicas.</p>
     */
    inline const Aws::String& GetPrimaryClusterId() const{ return m_primaryClusterId; }

    /**
     * <p>If this parameter is specified, ElastiCache will promote the specified
     * cluster in the specified replication group to the primary role. The nodes of all
     * other clusters in the replication group will be read replicas.</p>
     */
    inline void SetPrimaryClusterId(const Aws::String& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = value; }

    /**
     * <p>If this parameter is specified, ElastiCache will promote the specified
     * cluster in the specified replication group to the primary role. The nodes of all
     * other clusters in the replication group will be read replicas.</p>
     */
    inline void SetPrimaryClusterId(Aws::String&& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = value; }

    /**
     * <p>If this parameter is specified, ElastiCache will promote the specified
     * cluster in the specified replication group to the primary role. The nodes of all
     * other clusters in the replication group will be read replicas.</p>
     */
    inline void SetPrimaryClusterId(const char* value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId.assign(value); }

    /**
     * <p>If this parameter is specified, ElastiCache will promote the specified
     * cluster in the specified replication group to the primary role. The nodes of all
     * other clusters in the replication group will be read replicas.</p>
     */
    inline ModifyReplicationGroupRequest& WithPrimaryClusterId(const Aws::String& value) { SetPrimaryClusterId(value); return *this;}

    /**
     * <p>If this parameter is specified, ElastiCache will promote the specified
     * cluster in the specified replication group to the primary role. The nodes of all
     * other clusters in the replication group will be read replicas.</p>
     */
    inline ModifyReplicationGroupRequest& WithPrimaryClusterId(Aws::String&& value) { SetPrimaryClusterId(value); return *this;}

    /**
     * <p>If this parameter is specified, ElastiCache will promote the specified
     * cluster in the specified replication group to the primary role. The nodes of all
     * other clusters in the replication group will be read replicas.</p>
     */
    inline ModifyReplicationGroupRequest& WithPrimaryClusterId(const char* value) { SetPrimaryClusterId(value); return *this;}

    /**
     * <p>The cache cluster ID that will be used as the daily snapshot source for the
     * replication group.</p>
     */
    inline const Aws::String& GetSnapshottingClusterId() const{ return m_snapshottingClusterId; }

    /**
     * <p>The cache cluster ID that will be used as the daily snapshot source for the
     * replication group.</p>
     */
    inline void SetSnapshottingClusterId(const Aws::String& value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId = value; }

    /**
     * <p>The cache cluster ID that will be used as the daily snapshot source for the
     * replication group.</p>
     */
    inline void SetSnapshottingClusterId(Aws::String&& value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId = value; }

    /**
     * <p>The cache cluster ID that will be used as the daily snapshot source for the
     * replication group.</p>
     */
    inline void SetSnapshottingClusterId(const char* value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId.assign(value); }

    /**
     * <p>The cache cluster ID that will be used as the daily snapshot source for the
     * replication group.</p>
     */
    inline ModifyReplicationGroupRequest& WithSnapshottingClusterId(const Aws::String& value) { SetSnapshottingClusterId(value); return *this;}

    /**
     * <p>The cache cluster ID that will be used as the daily snapshot source for the
     * replication group.</p>
     */
    inline ModifyReplicationGroupRequest& WithSnapshottingClusterId(Aws::String&& value) { SetSnapshottingClusterId(value); return *this;}

    /**
     * <p>The cache cluster ID that will be used as the daily snapshot source for the
     * replication group.</p>
     */
    inline ModifyReplicationGroupRequest& WithSnapshottingClusterId(const char* value) { SetSnapshottingClusterId(value); return *this;}

    /**
     * <p>Whether a read replica will be automatically promoted to read/write primary
     * if the existing primary encounters a failure.</p> <p>Valid values:
     * <code>true</code> | <code>false</code></p> <note><p>ElastiCache Multi-AZ
     * replication groups are not supported on:</p> <ul> <li>Redis versions earlier
     * than 2.8.6.</li> <li>T1 and T2 cache node types.</li> </ul> </note>
     */
    inline bool GetAutomaticFailoverEnabled() const{ return m_automaticFailoverEnabled; }

    /**
     * <p>Whether a read replica will be automatically promoted to read/write primary
     * if the existing primary encounters a failure.</p> <p>Valid values:
     * <code>true</code> | <code>false</code></p> <note><p>ElastiCache Multi-AZ
     * replication groups are not supported on:</p> <ul> <li>Redis versions earlier
     * than 2.8.6.</li> <li>T1 and T2 cache node types.</li> </ul> </note>
     */
    inline void SetAutomaticFailoverEnabled(bool value) { m_automaticFailoverEnabledHasBeenSet = true; m_automaticFailoverEnabled = value; }

    /**
     * <p>Whether a read replica will be automatically promoted to read/write primary
     * if the existing primary encounters a failure.</p> <p>Valid values:
     * <code>true</code> | <code>false</code></p> <note><p>ElastiCache Multi-AZ
     * replication groups are not supported on:</p> <ul> <li>Redis versions earlier
     * than 2.8.6.</li> <li>T1 and T2 cache node types.</li> </ul> </note>
     */
    inline ModifyReplicationGroupRequest& WithAutomaticFailoverEnabled(bool value) { SetAutomaticFailoverEnabled(value); return *this;}

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running outside of an Amazon Virtual Private Cloud
     * (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheSecurityGroupNames() const{ return m_cacheSecurityGroupNames; }

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running outside of an Amazon Virtual Private Cloud
     * (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline void SetCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = value; }

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running outside of an Amazon Virtual Private Cloud
     * (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline void SetCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = value; }

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running outside of an Amazon Virtual Private Cloud
     * (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { SetCacheSecurityGroupNames(value); return *this;}

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running outside of an Amazon Virtual Private Cloud
     * (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { SetCacheSecurityGroupNames(value); return *this;}

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running outside of an Amazon Virtual Private Cloud
     * (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline ModifyReplicationGroupRequest& AddCacheSecurityGroupNames(const Aws::String& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running outside of an Amazon Virtual Private Cloud
     * (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline ModifyReplicationGroupRequest& AddCacheSecurityGroupNames(Aws::String&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running outside of an Amazon Virtual Private Cloud
     * (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline ModifyReplicationGroupRequest& AddCacheSecurityGroupNames(const char* value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cache clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running in an Amazon Virtual Private Cloud (VPC).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cache clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running in an Amazon Virtual Private Cloud (VPC).</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cache clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running in an Amazon Virtual Private Cloud (VPC).</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cache clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running in an Amazon Virtual Private Cloud (VPC).</p>
     */
    inline ModifyReplicationGroupRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>Specifies the VPC Security Groups associated with the cache clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running in an Amazon Virtual Private Cloud (VPC).</p>
     */
    inline ModifyReplicationGroupRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>Specifies the VPC Security Groups associated with the cache clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running in an Amazon Virtual Private Cloud (VPC).</p>
     */
    inline ModifyReplicationGroupRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cache clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running in an Amazon Virtual Private Cloud (VPC).</p>
     */
    inline ModifyReplicationGroupRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cache clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing cache clusters running in an Amazon Virtual Private Cloud (VPC).</p>
     */
    inline ModifyReplicationGroupRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li><code>sun</code></li>
     * <li><code>mon</code></li> <li><code>tue</code></li> <li><code>wed</code></li>
     * <li><code>thu</code></li> <li><code>fri</code></li> <li><code>sat</code></li>
     * </ul> <p>Example: <code>sun:05:00-sun:09:00</code></p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li><code>sun</code></li>
     * <li><code>mon</code></li> <li><code>tue</code></li> <li><code>wed</code></li>
     * <li><code>thu</code></li> <li><code>fri</code></li> <li><code>sat</code></li>
     * </ul> <p>Example: <code>sun:05:00-sun:09:00</code></p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li><code>sun</code></li>
     * <li><code>mon</code></li> <li><code>tue</code></li> <li><code>wed</code></li>
     * <li><code>thu</code></li> <li><code>fri</code></li> <li><code>sat</code></li>
     * </ul> <p>Example: <code>sun:05:00-sun:09:00</code></p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li><code>sun</code></li>
     * <li><code>mon</code></li> <li><code>tue</code></li> <li><code>wed</code></li>
     * <li><code>thu</code></li> <li><code>fri</code></li> <li><code>sat</code></li>
     * </ul> <p>Example: <code>sun:05:00-sun:09:00</code></p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li><code>sun</code></li>
     * <li><code>mon</code></li> <li><code>tue</code></li> <li><code>wed</code></li>
     * <li><code>thu</code></li> <li><code>fri</code></li> <li><code>sat</code></li>
     * </ul> <p>Example: <code>sun:05:00-sun:09:00</code></p>
     */
    inline ModifyReplicationGroupRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li><code>sun</code></li>
     * <li><code>mon</code></li> <li><code>tue</code></li> <li><code>wed</code></li>
     * <li><code>thu</code></li> <li><code>fri</code></li> <li><code>sat</code></li>
     * </ul> <p>Example: <code>sun:05:00-sun:09:00</code></p>
     */
    inline ModifyReplicationGroupRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li><code>sun</code></li>
     * <li><code>mon</code></li> <li><code>tue</code></li> <li><code>wed</code></li>
     * <li><code>thu</code></li> <li><code>fri</code></li> <li><code>sat</code></li>
     * </ul> <p>Example: <code>sun:05:00-sun:09:00</code></p>
     */
    inline ModifyReplicationGroupRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note>The Amazon SNS topic owner must be same as the
     * replication group owner. </note>
     */
    inline const Aws::String& GetNotificationTopicArn() const{ return m_notificationTopicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note>The Amazon SNS topic owner must be same as the
     * replication group owner. </note>
     */
    inline void SetNotificationTopicArn(const Aws::String& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note>The Amazon SNS topic owner must be same as the
     * replication group owner. </note>
     */
    inline void SetNotificationTopicArn(Aws::String&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note>The Amazon SNS topic owner must be same as the
     * replication group owner. </note>
     */
    inline void SetNotificationTopicArn(const char* value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note>The Amazon SNS topic owner must be same as the
     * replication group owner. </note>
     */
    inline ModifyReplicationGroupRequest& WithNotificationTopicArn(const Aws::String& value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note>The Amazon SNS topic owner must be same as the
     * replication group owner. </note>
     */
    inline ModifyReplicationGroupRequest& WithNotificationTopicArn(Aws::String&& value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note>The Amazon SNS topic owner must be same as the
     * replication group owner. </note>
     */
    inline ModifyReplicationGroupRequest& WithNotificationTopicArn(const char* value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <i>ApplyImmediately</i> parameter is specified as
     * <i>true</i> for this request.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <i>ApplyImmediately</i> parameter is specified as
     * <i>true</i> for this request.</p>
     */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <i>ApplyImmediately</i> parameter is specified as
     * <i>true</i> for this request.</p>
     */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <i>ApplyImmediately</i> parameter is specified as
     * <i>true</i> for this request.</p>
     */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }

    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <i>ApplyImmediately</i> parameter is specified as
     * <i>true</i> for this request.</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <i>ApplyImmediately</i> parameter is specified as
     * <i>true</i> for this request.</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <i>ApplyImmediately</i> parameter is specified as
     * <i>true</i> for this request.</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <i>active</i>.</p> <p>Valid values:
     * <code>active</code> | <code>inactive</code></p>
     */
    inline const Aws::String& GetNotificationTopicStatus() const{ return m_notificationTopicStatus; }

    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <i>active</i>.</p> <p>Valid values:
     * <code>active</code> | <code>inactive</code></p>
     */
    inline void SetNotificationTopicStatus(const Aws::String& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = value; }

    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <i>active</i>.</p> <p>Valid values:
     * <code>active</code> | <code>inactive</code></p>
     */
    inline void SetNotificationTopicStatus(Aws::String&& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = value; }

    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <i>active</i>.</p> <p>Valid values:
     * <code>active</code> | <code>inactive</code></p>
     */
    inline void SetNotificationTopicStatus(const char* value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus.assign(value); }

    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <i>active</i>.</p> <p>Valid values:
     * <code>active</code> | <code>inactive</code></p>
     */
    inline ModifyReplicationGroupRequest& WithNotificationTopicStatus(const Aws::String& value) { SetNotificationTopicStatus(value); return *this;}

    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <i>active</i>.</p> <p>Valid values:
     * <code>active</code> | <code>inactive</code></p>
     */
    inline ModifyReplicationGroupRequest& WithNotificationTopicStatus(Aws::String&& value) { SetNotificationTopicStatus(value); return *this;}

    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <i>active</i>.</p> <p>Valid values:
     * <code>active</code> | <code>inactive</code></p>
     */
    inline ModifyReplicationGroupRequest& WithNotificationTopicStatus(const char* value) { SetNotificationTopicStatus(value); return *this;}

    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <i>PreferredMaintenanceWindow</i> setting for the
     * replication group.</p> <p>If <code>false</code>, then changes to the nodes in
     * the replication group are applied on the next maintenance reboot, or the next
     * failure reboot, whichever occurs first.</p> <p>Valid values: <code>true</code> |
     * <code>false</code></p> <p>Default: <code>false</code></p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <i>PreferredMaintenanceWindow</i> setting for the
     * replication group.</p> <p>If <code>false</code>, then changes to the nodes in
     * the replication group are applied on the next maintenance reboot, or the next
     * failure reboot, whichever occurs first.</p> <p>Valid values: <code>true</code> |
     * <code>false</code></p> <p>Default: <code>false</code></p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <i>PreferredMaintenanceWindow</i> setting for the
     * replication group.</p> <p>If <code>false</code>, then changes to the nodes in
     * the replication group are applied on the next maintenance reboot, or the next
     * failure reboot, whichever occurs first.</p> <p>Valid values: <code>true</code> |
     * <code>false</code></p> <p>Default: <code>false</code></p>
     */
    inline ModifyReplicationGroupRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}

    /**
     * <p>The upgraded version of the cache engine to be run on the cache clusters in
     * the replication group.</p> <p><b>Important:</b> You can upgrade to a newer
     * engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The upgraded version of the cache engine to be run on the cache clusters in
     * the replication group.</p> <p><b>Important:</b> You can upgrade to a newer
     * engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The upgraded version of the cache engine to be run on the cache clusters in
     * the replication group.</p> <p><b>Important:</b> You can upgrade to a newer
     * engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The upgraded version of the cache engine to be run on the cache clusters in
     * the replication group.</p> <p><b>Important:</b> You can upgrade to a newer
     * engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The upgraded version of the cache engine to be run on the cache clusters in
     * the replication group.</p> <p><b>Important:</b> You can upgrade to a newer
     * engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline ModifyReplicationGroupRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The upgraded version of the cache engine to be run on the cache clusters in
     * the replication group.</p> <p><b>Important:</b> You can upgrade to a newer
     * engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline ModifyReplicationGroupRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The upgraded version of the cache engine to be run on the cache clusters in
     * the replication group.</p> <p><b>Important:</b> You can upgrade to a newer
     * engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline ModifyReplicationGroupRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline ModifyReplicationGroupRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /**
     * <p>The number of days for which ElastiCache will retain automatic node group
     * snapshots before deleting them. For example, if you set
     * <i>SnapshotRetentionLimit</i> to 5, then a snapshot that was taken today will be
     * retained for 5 days before being deleted.</p> <p><b>Important</b><br/>If the
     * value of SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     */
    inline long GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }

    /**
     * <p>The number of days for which ElastiCache will retain automatic node group
     * snapshots before deleting them. For example, if you set
     * <i>SnapshotRetentionLimit</i> to 5, then a snapshot that was taken today will be
     * retained for 5 days before being deleted.</p> <p><b>Important</b><br/>If the
     * value of SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     */
    inline void SetSnapshotRetentionLimit(long value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }

    /**
     * <p>The number of days for which ElastiCache will retain automatic node group
     * snapshots before deleting them. For example, if you set
     * <i>SnapshotRetentionLimit</i> to 5, then a snapshot that was taken today will be
     * retained for 5 days before being deleted.</p> <p><b>Important</b><br/>If the
     * value of SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     */
    inline ModifyReplicationGroupRequest& WithSnapshotRetentionLimit(long value) { SetSnapshotRetentionLimit(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache will begin taking a
     * daily snapshot of the node group specified by <i>SnapshottingClusterId</i>.</p>
     * <p>Example: <code>05:00-09:00</code></p> <p>If you do not specify this
     * parameter, then ElastiCache will automatically choose an appropriate time
     * range.</p>
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache will begin taking a
     * daily snapshot of the node group specified by <i>SnapshottingClusterId</i>.</p>
     * <p>Example: <code>05:00-09:00</code></p> <p>If you do not specify this
     * parameter, then ElastiCache will automatically choose an appropriate time
     * range.</p>
     */
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache will begin taking a
     * daily snapshot of the node group specified by <i>SnapshottingClusterId</i>.</p>
     * <p>Example: <code>05:00-09:00</code></p> <p>If you do not specify this
     * parameter, then ElastiCache will automatically choose an appropriate time
     * range.</p>
     */
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache will begin taking a
     * daily snapshot of the node group specified by <i>SnapshottingClusterId</i>.</p>
     * <p>Example: <code>05:00-09:00</code></p> <p>If you do not specify this
     * parameter, then ElastiCache will automatically choose an appropriate time
     * range.</p>
     */
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache will begin taking a
     * daily snapshot of the node group specified by <i>SnapshottingClusterId</i>.</p>
     * <p>Example: <code>05:00-09:00</code></p> <p>If you do not specify this
     * parameter, then ElastiCache will automatically choose an appropriate time
     * range.</p>
     */
    inline ModifyReplicationGroupRequest& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache will begin taking a
     * daily snapshot of the node group specified by <i>SnapshottingClusterId</i>.</p>
     * <p>Example: <code>05:00-09:00</code></p> <p>If you do not specify this
     * parameter, then ElastiCache will automatically choose an appropriate time
     * range.</p>
     */
    inline ModifyReplicationGroupRequest& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache will begin taking a
     * daily snapshot of the node group specified by <i>SnapshottingClusterId</i>.</p>
     * <p>Example: <code>05:00-09:00</code></p> <p>If you do not specify this
     * parameter, then ElastiCache will automatically choose an appropriate time
     * range.</p>
     */
    inline ModifyReplicationGroupRequest& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>A valid cache node type that you want to scale this replication group to. The
     * value of this parameter must be one of the <i>ScaleUpModifications</i> values
     * returned by the <code>ListAllowedCacheNodeTypeModification</code> action.</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }

    /**
     * <p>A valid cache node type that you want to scale this replication group to. The
     * value of this parameter must be one of the <i>ScaleUpModifications</i> values
     * returned by the <code>ListAllowedCacheNodeTypeModification</code> action.</p>
     */
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>A valid cache node type that you want to scale this replication group to. The
     * value of this parameter must be one of the <i>ScaleUpModifications</i> values
     * returned by the <code>ListAllowedCacheNodeTypeModification</code> action.</p>
     */
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>A valid cache node type that you want to scale this replication group to. The
     * value of this parameter must be one of the <i>ScaleUpModifications</i> values
     * returned by the <code>ListAllowedCacheNodeTypeModification</code> action.</p>
     */
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }

    /**
     * <p>A valid cache node type that you want to scale this replication group to. The
     * value of this parameter must be one of the <i>ScaleUpModifications</i> values
     * returned by the <code>ListAllowedCacheNodeTypeModification</code> action.</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>A valid cache node type that you want to scale this replication group to. The
     * value of this parameter must be one of the <i>ScaleUpModifications</i> values
     * returned by the <code>ListAllowedCacheNodeTypeModification</code> action.</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>A valid cache node type that you want to scale this replication group to. The
     * value of this parameter must be one of the <i>ScaleUpModifications</i> values
     * returned by the <code>ListAllowedCacheNodeTypeModification</code> action.</p>
     */
    inline ModifyReplicationGroupRequest& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}

  private:
    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet;
    Aws::String m_replicationGroupDescription;
    bool m_replicationGroupDescriptionHasBeenSet;
    Aws::String m_primaryClusterId;
    bool m_primaryClusterIdHasBeenSet;
    Aws::String m_snapshottingClusterId;
    bool m_snapshottingClusterIdHasBeenSet;
    bool m_automaticFailoverEnabled;
    bool m_automaticFailoverEnabledHasBeenSet;
    Aws::Vector<Aws::String> m_cacheSecurityGroupNames;
    bool m_cacheSecurityGroupNamesHasBeenSet;
    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;
    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;
    Aws::String m_notificationTopicArn;
    bool m_notificationTopicArnHasBeenSet;
    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet;
    Aws::String m_notificationTopicStatus;
    bool m_notificationTopicStatusHasBeenSet;
    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;
    long m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet;
    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet;
    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
