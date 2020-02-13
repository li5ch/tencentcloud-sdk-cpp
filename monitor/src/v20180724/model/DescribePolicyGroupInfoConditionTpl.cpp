/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoConditionTpl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace rapidjson;
using namespace std;

DescribePolicyGroupInfoConditionTpl::DescribePolicyGroupInfoConditionTpl() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_lastEditUinHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyGroupInfoConditionTpl::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DescribePolicyGroupInfoConditionTpl.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DescribePolicyGroupInfoConditionTpl.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ViewName") && !value["ViewName"].IsNull())
    {
        if (!value["ViewName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DescribePolicyGroupInfoConditionTpl.ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(value["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `DescribePolicyGroupInfoConditionTpl.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("LastEditUin") && !value["LastEditUin"].IsNull())
    {
        if (!value["LastEditUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `DescribePolicyGroupInfoConditionTpl.LastEditUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastEditUin = string(value["LastEditUin"].GetString());
        m_lastEditUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicyGroupInfoConditionTpl::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_lastEditUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LastEditUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lastEditUin.c_str(), allocator).Move(), allocator);
    }

}


int64_t DescribePolicyGroupInfoConditionTpl::GetGroupId() const
{
    return m_groupId;
}

void DescribePolicyGroupInfoConditionTpl::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribePolicyGroupInfoConditionTpl::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribePolicyGroupInfoConditionTpl::GetGroupName() const
{
    return m_groupName;
}

void DescribePolicyGroupInfoConditionTpl::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribePolicyGroupInfoConditionTpl::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string DescribePolicyGroupInfoConditionTpl::GetViewName() const
{
    return m_viewName;
}

void DescribePolicyGroupInfoConditionTpl::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool DescribePolicyGroupInfoConditionTpl::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

string DescribePolicyGroupInfoConditionTpl::GetRemark() const
{
    return m_remark;
}

void DescribePolicyGroupInfoConditionTpl::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DescribePolicyGroupInfoConditionTpl::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribePolicyGroupInfoConditionTpl::GetLastEditUin() const
{
    return m_lastEditUin;
}

void DescribePolicyGroupInfoConditionTpl::SetLastEditUin(const string& _lastEditUin)
{
    m_lastEditUin = _lastEditUin;
    m_lastEditUinHasBeenSet = true;
}

bool DescribePolicyGroupInfoConditionTpl::LastEditUinHasBeenSet() const
{
    return m_lastEditUinHasBeenSet;
}

