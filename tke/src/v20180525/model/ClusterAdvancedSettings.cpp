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

#include <tencentcloud/tke/v20180525/model/ClusterAdvancedSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

ClusterAdvancedSettings::ClusterAdvancedSettings() :
    m_iPVSHasBeenSet(false),
    m_asEnabledHasBeenSet(false),
    m_containerRuntimeHasBeenSet(false),
    m_nodeNameTypeHasBeenSet(false),
    m_extraArgsHasBeenSet(false)
{
}

CoreInternalOutcome ClusterAdvancedSettings::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("IPVS") && !value["IPVS"].IsNull())
    {
        if (!value["IPVS"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ClusterAdvancedSettings.IPVS` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_iPVS = value["IPVS"].GetBool();
        m_iPVSHasBeenSet = true;
    }

    if (value.HasMember("AsEnabled") && !value["AsEnabled"].IsNull())
    {
        if (!value["AsEnabled"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ClusterAdvancedSettings.AsEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_asEnabled = value["AsEnabled"].GetBool();
        m_asEnabledHasBeenSet = true;
    }

    if (value.HasMember("ContainerRuntime") && !value["ContainerRuntime"].IsNull())
    {
        if (!value["ContainerRuntime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterAdvancedSettings.ContainerRuntime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerRuntime = string(value["ContainerRuntime"].GetString());
        m_containerRuntimeHasBeenSet = true;
    }

    if (value.HasMember("NodeNameType") && !value["NodeNameType"].IsNull())
    {
        if (!value["NodeNameType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterAdvancedSettings.NodeNameType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeNameType = string(value["NodeNameType"].GetString());
        m_nodeNameTypeHasBeenSet = true;
    }

    if (value.HasMember("ExtraArgs") && !value["ExtraArgs"].IsNull())
    {
        if (!value["ExtraArgs"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ClusterAdvancedSettings.ExtraArgs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraArgs.Deserialize(value["ExtraArgs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraArgsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterAdvancedSettings::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_iPVSHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IPVS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPVS, allocator);
    }

    if (m_asEnabledHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asEnabled, allocator);
    }

    if (m_containerRuntimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContainerRuntime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_containerRuntime.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeNameType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_nodeNameType.c_str(), allocator).Move(), allocator);
    }

    if (m_extraArgsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExtraArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_extraArgs.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool ClusterAdvancedSettings::GetIPVS() const
{
    return m_iPVS;
}

void ClusterAdvancedSettings::SetIPVS(const bool& _iPVS)
{
    m_iPVS = _iPVS;
    m_iPVSHasBeenSet = true;
}

bool ClusterAdvancedSettings::IPVSHasBeenSet() const
{
    return m_iPVSHasBeenSet;
}

bool ClusterAdvancedSettings::GetAsEnabled() const
{
    return m_asEnabled;
}

void ClusterAdvancedSettings::SetAsEnabled(const bool& _asEnabled)
{
    m_asEnabled = _asEnabled;
    m_asEnabledHasBeenSet = true;
}

bool ClusterAdvancedSettings::AsEnabledHasBeenSet() const
{
    return m_asEnabledHasBeenSet;
}

string ClusterAdvancedSettings::GetContainerRuntime() const
{
    return m_containerRuntime;
}

void ClusterAdvancedSettings::SetContainerRuntime(const string& _containerRuntime)
{
    m_containerRuntime = _containerRuntime;
    m_containerRuntimeHasBeenSet = true;
}

bool ClusterAdvancedSettings::ContainerRuntimeHasBeenSet() const
{
    return m_containerRuntimeHasBeenSet;
}

string ClusterAdvancedSettings::GetNodeNameType() const
{
    return m_nodeNameType;
}

void ClusterAdvancedSettings::SetNodeNameType(const string& _nodeNameType)
{
    m_nodeNameType = _nodeNameType;
    m_nodeNameTypeHasBeenSet = true;
}

bool ClusterAdvancedSettings::NodeNameTypeHasBeenSet() const
{
    return m_nodeNameTypeHasBeenSet;
}

ClusterExtraArgs ClusterAdvancedSettings::GetExtraArgs() const
{
    return m_extraArgs;
}

void ClusterAdvancedSettings::SetExtraArgs(const ClusterExtraArgs& _extraArgs)
{
    m_extraArgs = _extraArgs;
    m_extraArgsHasBeenSet = true;
}

bool ClusterAdvancedSettings::ExtraArgsHasBeenSet() const
{
    return m_extraArgsHasBeenSet;
}

