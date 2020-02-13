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

#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupInstancesWeightRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

ModifyTargetGroupInstancesWeightRequest::ModifyTargetGroupInstancesWeightRequest() :
    m_targetGroupIdHasBeenSet(false),
    m_targetGroupInstancesHasBeenSet(false)
{
}

string ModifyTargetGroupInstancesWeightRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_targetGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetGroupInstancesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetGroupInstances";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetGroupInstances.begin(); itr != m_targetGroupInstances.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTargetGroupInstancesWeightRequest::GetTargetGroupId() const
{
    return m_targetGroupId;
}

void ModifyTargetGroupInstancesWeightRequest::SetTargetGroupId(const string& _targetGroupId)
{
    m_targetGroupId = _targetGroupId;
    m_targetGroupIdHasBeenSet = true;
}

bool ModifyTargetGroupInstancesWeightRequest::TargetGroupIdHasBeenSet() const
{
    return m_targetGroupIdHasBeenSet;
}

vector<TargetGroupInstance> ModifyTargetGroupInstancesWeightRequest::GetTargetGroupInstances() const
{
    return m_targetGroupInstances;
}

void ModifyTargetGroupInstancesWeightRequest::SetTargetGroupInstances(const vector<TargetGroupInstance>& _targetGroupInstances)
{
    m_targetGroupInstances = _targetGroupInstances;
    m_targetGroupInstancesHasBeenSet = true;
}

bool ModifyTargetGroupInstancesWeightRequest::TargetGroupInstancesHasBeenSet() const
{
    return m_targetGroupInstancesHasBeenSet;
}


