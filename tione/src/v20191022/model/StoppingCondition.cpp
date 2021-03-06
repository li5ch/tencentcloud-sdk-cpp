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

#include <tencentcloud/tione/v20191022/model/StoppingCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace rapidjson;
using namespace std;

StoppingCondition::StoppingCondition() :
    m_maxRuntimeInSecondsHasBeenSet(false)
{
}

CoreInternalOutcome StoppingCondition::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxRuntimeInSeconds") && !value["MaxRuntimeInSeconds"].IsNull())
    {
        if (!value["MaxRuntimeInSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StoppingCondition.MaxRuntimeInSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRuntimeInSeconds = value["MaxRuntimeInSeconds"].GetUint64();
        m_maxRuntimeInSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StoppingCondition::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_maxRuntimeInSecondsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxRuntimeInSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRuntimeInSeconds, allocator);
    }

}


uint64_t StoppingCondition::GetMaxRuntimeInSeconds() const
{
    return m_maxRuntimeInSeconds;
}

void StoppingCondition::SetMaxRuntimeInSeconds(const uint64_t& _maxRuntimeInSeconds)
{
    m_maxRuntimeInSeconds = _maxRuntimeInSeconds;
    m_maxRuntimeInSecondsHasBeenSet = true;
}

bool StoppingCondition::MaxRuntimeInSecondsHasBeenSet() const
{
    return m_maxRuntimeInSecondsHasBeenSet;
}

