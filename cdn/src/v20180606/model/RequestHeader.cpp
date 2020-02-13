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

#include <tencentcloud/cdn/v20180606/model/RequestHeader.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

RequestHeader::RequestHeader() :
    m_switchHasBeenSet(false),
    m_headerRulesHasBeenSet(false)
{
}

CoreInternalOutcome RequestHeader::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Error("response `RequestHeader.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("HeaderRules") && !value["HeaderRules"].IsNull())
    {
        if (!value["HeaderRules"].IsArray())
            return CoreInternalOutcome(Error("response `RequestHeader.HeaderRules` is not array type"));

        const Value &tmpValue = value["HeaderRules"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HttpHeaderPathRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headerRules.push_back(item);
        }
        m_headerRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RequestHeader::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_headerRulesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HeaderRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headerRules.begin(); itr != m_headerRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RequestHeader::GetSwitch() const
{
    return m_switch;
}

void RequestHeader::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool RequestHeader::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<HttpHeaderPathRule> RequestHeader::GetHeaderRules() const
{
    return m_headerRules;
}

void RequestHeader::SetHeaderRules(const vector<HttpHeaderPathRule>& _headerRules)
{
    m_headerRules = _headerRules;
    m_headerRulesHasBeenSet = true;
}

bool RequestHeader::HeaderRulesHasBeenSet() const
{
    return m_headerRulesHasBeenSet;
}

