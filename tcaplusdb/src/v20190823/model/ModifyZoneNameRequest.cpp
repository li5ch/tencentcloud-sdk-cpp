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

#include <tencentcloud/tcaplusdb/v20190823/model/ModifyZoneNameRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

ModifyZoneNameRequest::ModifyZoneNameRequest() :
    m_applicationIdHasBeenSet(false),
    m_logicZoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false)
{
}

string ModifyZoneNameRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_logicZoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogicZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_logicZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyZoneNameRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyZoneNameRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyZoneNameRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ModifyZoneNameRequest::GetLogicZoneId() const
{
    return m_logicZoneId;
}

void ModifyZoneNameRequest::SetLogicZoneId(const string& _logicZoneId)
{
    m_logicZoneId = _logicZoneId;
    m_logicZoneIdHasBeenSet = true;
}

bool ModifyZoneNameRequest::LogicZoneIdHasBeenSet() const
{
    return m_logicZoneIdHasBeenSet;
}

string ModifyZoneNameRequest::GetZoneName() const
{
    return m_zoneName;
}

void ModifyZoneNameRequest::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ModifyZoneNameRequest::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}


