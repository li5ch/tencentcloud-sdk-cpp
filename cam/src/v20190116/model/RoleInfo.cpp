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

#include <tencentcloud/cam/v20190116/model/RoleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

RoleInfo::RoleInfo() :
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_consoleLoginHasBeenSet(false),
    m_roleTypeHasBeenSet(false)
{
}

CoreInternalOutcome RoleInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoleInfo.RoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = string(value["RoleId"].GetString());
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoleInfo.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyDocument") && !value["PolicyDocument"].IsNull())
    {
        if (!value["PolicyDocument"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoleInfo.PolicyDocument` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyDocument = string(value["PolicyDocument"].GetString());
        m_policyDocumentHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoleInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoleInfo.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoleInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ConsoleLogin") && !value["ConsoleLogin"].IsNull())
    {
        if (!value["ConsoleLogin"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RoleInfo.ConsoleLogin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_consoleLogin = value["ConsoleLogin"].GetUint64();
        m_consoleLoginHasBeenSet = true;
    }

    if (value.HasMember("RoleType") && !value["RoleType"].IsNull())
    {
        if (!value["RoleType"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoleInfo.RoleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = string(value["RoleType"].GetString());
        m_roleTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_roleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_roleId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyDocumentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyDocument";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_policyDocument.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_consoleLoginHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConsoleLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consoleLogin, allocator);
    }

    if (m_roleTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_roleType.c_str(), allocator).Move(), allocator);
    }

}


string RoleInfo::GetRoleId() const
{
    return m_roleId;
}

void RoleInfo::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool RoleInfo::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string RoleInfo::GetRoleName() const
{
    return m_roleName;
}

void RoleInfo::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool RoleInfo::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string RoleInfo::GetPolicyDocument() const
{
    return m_policyDocument;
}

void RoleInfo::SetPolicyDocument(const string& _policyDocument)
{
    m_policyDocument = _policyDocument;
    m_policyDocumentHasBeenSet = true;
}

bool RoleInfo::PolicyDocumentHasBeenSet() const
{
    return m_policyDocumentHasBeenSet;
}

string RoleInfo::GetDescription() const
{
    return m_description;
}

void RoleInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RoleInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RoleInfo::GetAddTime() const
{
    return m_addTime;
}

void RoleInfo::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool RoleInfo::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string RoleInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void RoleInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RoleInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t RoleInfo::GetConsoleLogin() const
{
    return m_consoleLogin;
}

void RoleInfo::SetConsoleLogin(const uint64_t& _consoleLogin)
{
    m_consoleLogin = _consoleLogin;
    m_consoleLoginHasBeenSet = true;
}

bool RoleInfo::ConsoleLoginHasBeenSet() const
{
    return m_consoleLoginHasBeenSet;
}

string RoleInfo::GetRoleType() const
{
    return m_roleType;
}

void RoleInfo::SetRoleType(const string& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool RoleInfo::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

