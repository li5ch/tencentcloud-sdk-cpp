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

#include <tencentcloud/mongodb/v20190725/model/ClientConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace rapidjson;
using namespace std;

ClientConnection::ClientConnection() :
    m_iPHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome ClientConnection::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClientConnection.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ClientConnection.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientConnection::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_iPHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string ClientConnection::GetIP() const
{
    return m_iP;
}

void ClientConnection::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool ClientConnection::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

uint64_t ClientConnection::GetCount() const
{
    return m_count;
}

void ClientConnection::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ClientConnection::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

