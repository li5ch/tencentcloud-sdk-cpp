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

#include <tencentcloud/emr/v20190103/model/EmrProductConfigOutter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

EmrProductConfigOutter::EmrProductConfigOutter() :
    m_softInfoHasBeenSet(false),
    m_masterNodeSizeHasBeenSet(false),
    m_coreNodeSizeHasBeenSet(false),
    m_taskNodeSizeHasBeenSet(false),
    m_comNodeSizeHasBeenSet(false),
    m_masterResourceHasBeenSet(false),
    m_coreResourceHasBeenSet(false),
    m_taskResourceHasBeenSet(false),
    m_comResourceHasBeenSet(false),
    m_onCosHasBeenSet(false),
    m_chargeTypeHasBeenSet(false)
{
}

CoreInternalOutcome EmrProductConfigOutter::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SoftInfo") && !value["SoftInfo"].IsNull())
    {
        if (!value["SoftInfo"].IsArray())
            return CoreInternalOutcome(Error("response `EmrProductConfigOutter.SoftInfo` is not array type"));

        const Value &tmpValue = value["SoftInfo"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_softInfo.push_back((*itr).GetString());
        }
        m_softInfoHasBeenSet = true;
    }

    if (value.HasMember("MasterNodeSize") && !value["MasterNodeSize"].IsNull())
    {
        if (!value["MasterNodeSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EmrProductConfigOutter.MasterNodeSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_masterNodeSize = value["MasterNodeSize"].GetInt64();
        m_masterNodeSizeHasBeenSet = true;
    }

    if (value.HasMember("CoreNodeSize") && !value["CoreNodeSize"].IsNull())
    {
        if (!value["CoreNodeSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EmrProductConfigOutter.CoreNodeSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coreNodeSize = value["CoreNodeSize"].GetInt64();
        m_coreNodeSizeHasBeenSet = true;
    }

    if (value.HasMember("TaskNodeSize") && !value["TaskNodeSize"].IsNull())
    {
        if (!value["TaskNodeSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EmrProductConfigOutter.TaskNodeSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskNodeSize = value["TaskNodeSize"].GetInt64();
        m_taskNodeSizeHasBeenSet = true;
    }

    if (value.HasMember("ComNodeSize") && !value["ComNodeSize"].IsNull())
    {
        if (!value["ComNodeSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EmrProductConfigOutter.ComNodeSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_comNodeSize = value["ComNodeSize"].GetInt64();
        m_comNodeSizeHasBeenSet = true;
    }

    if (value.HasMember("MasterResource") && !value["MasterResource"].IsNull())
    {
        if (!value["MasterResource"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EmrProductConfigOutter.MasterResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_masterResource.Deserialize(value["MasterResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_masterResourceHasBeenSet = true;
    }

    if (value.HasMember("CoreResource") && !value["CoreResource"].IsNull())
    {
        if (!value["CoreResource"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EmrProductConfigOutter.CoreResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coreResource.Deserialize(value["CoreResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coreResourceHasBeenSet = true;
    }

    if (value.HasMember("TaskResource") && !value["TaskResource"].IsNull())
    {
        if (!value["TaskResource"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EmrProductConfigOutter.TaskResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskResource.Deserialize(value["TaskResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskResourceHasBeenSet = true;
    }

    if (value.HasMember("ComResource") && !value["ComResource"].IsNull())
    {
        if (!value["ComResource"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EmrProductConfigOutter.ComResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_comResource.Deserialize(value["ComResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_comResourceHasBeenSet = true;
    }

    if (value.HasMember("OnCos") && !value["OnCos"].IsNull())
    {
        if (!value["OnCos"].IsBool())
        {
            return CoreInternalOutcome(Error("response `EmrProductConfigOutter.OnCos` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_onCos = value["OnCos"].GetBool();
        m_onCosHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EmrProductConfigOutter.ChargeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = value["ChargeType"].GetInt64();
        m_chargeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmrProductConfigOutter::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_softInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SoftInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_softInfo.begin(); itr != m_softInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_masterNodeSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterNodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterNodeSize, allocator);
    }

    if (m_coreNodeSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoreNodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coreNodeSize, allocator);
    }

    if (m_taskNodeSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskNodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskNodeSize, allocator);
    }

    if (m_comNodeSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ComNodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_comNodeSize, allocator);
    }

    if (m_masterResourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_masterResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coreResourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoreResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_coreResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskResourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_taskResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_comResourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ComResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_comResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_onCosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OnCos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onCos, allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeType, allocator);
    }

}


vector<string> EmrProductConfigOutter::GetSoftInfo() const
{
    return m_softInfo;
}

void EmrProductConfigOutter::SetSoftInfo(const vector<string>& _softInfo)
{
    m_softInfo = _softInfo;
    m_softInfoHasBeenSet = true;
}

bool EmrProductConfigOutter::SoftInfoHasBeenSet() const
{
    return m_softInfoHasBeenSet;
}

int64_t EmrProductConfigOutter::GetMasterNodeSize() const
{
    return m_masterNodeSize;
}

void EmrProductConfigOutter::SetMasterNodeSize(const int64_t& _masterNodeSize)
{
    m_masterNodeSize = _masterNodeSize;
    m_masterNodeSizeHasBeenSet = true;
}

bool EmrProductConfigOutter::MasterNodeSizeHasBeenSet() const
{
    return m_masterNodeSizeHasBeenSet;
}

int64_t EmrProductConfigOutter::GetCoreNodeSize() const
{
    return m_coreNodeSize;
}

void EmrProductConfigOutter::SetCoreNodeSize(const int64_t& _coreNodeSize)
{
    m_coreNodeSize = _coreNodeSize;
    m_coreNodeSizeHasBeenSet = true;
}

bool EmrProductConfigOutter::CoreNodeSizeHasBeenSet() const
{
    return m_coreNodeSizeHasBeenSet;
}

int64_t EmrProductConfigOutter::GetTaskNodeSize() const
{
    return m_taskNodeSize;
}

void EmrProductConfigOutter::SetTaskNodeSize(const int64_t& _taskNodeSize)
{
    m_taskNodeSize = _taskNodeSize;
    m_taskNodeSizeHasBeenSet = true;
}

bool EmrProductConfigOutter::TaskNodeSizeHasBeenSet() const
{
    return m_taskNodeSizeHasBeenSet;
}

int64_t EmrProductConfigOutter::GetComNodeSize() const
{
    return m_comNodeSize;
}

void EmrProductConfigOutter::SetComNodeSize(const int64_t& _comNodeSize)
{
    m_comNodeSize = _comNodeSize;
    m_comNodeSizeHasBeenSet = true;
}

bool EmrProductConfigOutter::ComNodeSizeHasBeenSet() const
{
    return m_comNodeSizeHasBeenSet;
}

OutterResource EmrProductConfigOutter::GetMasterResource() const
{
    return m_masterResource;
}

void EmrProductConfigOutter::SetMasterResource(const OutterResource& _masterResource)
{
    m_masterResource = _masterResource;
    m_masterResourceHasBeenSet = true;
}

bool EmrProductConfigOutter::MasterResourceHasBeenSet() const
{
    return m_masterResourceHasBeenSet;
}

OutterResource EmrProductConfigOutter::GetCoreResource() const
{
    return m_coreResource;
}

void EmrProductConfigOutter::SetCoreResource(const OutterResource& _coreResource)
{
    m_coreResource = _coreResource;
    m_coreResourceHasBeenSet = true;
}

bool EmrProductConfigOutter::CoreResourceHasBeenSet() const
{
    return m_coreResourceHasBeenSet;
}

OutterResource EmrProductConfigOutter::GetTaskResource() const
{
    return m_taskResource;
}

void EmrProductConfigOutter::SetTaskResource(const OutterResource& _taskResource)
{
    m_taskResource = _taskResource;
    m_taskResourceHasBeenSet = true;
}

bool EmrProductConfigOutter::TaskResourceHasBeenSet() const
{
    return m_taskResourceHasBeenSet;
}

OutterResource EmrProductConfigOutter::GetComResource() const
{
    return m_comResource;
}

void EmrProductConfigOutter::SetComResource(const OutterResource& _comResource)
{
    m_comResource = _comResource;
    m_comResourceHasBeenSet = true;
}

bool EmrProductConfigOutter::ComResourceHasBeenSet() const
{
    return m_comResourceHasBeenSet;
}

bool EmrProductConfigOutter::GetOnCos() const
{
    return m_onCos;
}

void EmrProductConfigOutter::SetOnCos(const bool& _onCos)
{
    m_onCos = _onCos;
    m_onCosHasBeenSet = true;
}

bool EmrProductConfigOutter::OnCosHasBeenSet() const
{
    return m_onCosHasBeenSet;
}

int64_t EmrProductConfigOutter::GetChargeType() const
{
    return m_chargeType;
}

void EmrProductConfigOutter::SetChargeType(const int64_t& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool EmrProductConfigOutter::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

