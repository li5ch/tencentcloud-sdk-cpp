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

#include <tencentcloud/tiw/v20190919/model/CustomLayout.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace rapidjson;
using namespace std;

CustomLayout::CustomLayout() :
    m_canvasHasBeenSet(false),
    m_inputStreamListHasBeenSet(false)
{
}

CoreInternalOutcome CustomLayout::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Canvas") && !value["Canvas"].IsNull())
    {
        if (!value["Canvas"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CustomLayout.Canvas` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_canvas.Deserialize(value["Canvas"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_canvasHasBeenSet = true;
    }

    if (value.HasMember("InputStreamList") && !value["InputStreamList"].IsNull())
    {
        if (!value["InputStreamList"].IsArray())
            return CoreInternalOutcome(Error("response `CustomLayout.InputStreamList` is not array type"));

        const Value &tmpValue = value["InputStreamList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StreamLayout item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputStreamList.push_back(item);
        }
        m_inputStreamListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomLayout::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_canvasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Canvas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_canvas.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inputStreamListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InputStreamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputStreamList.begin(); itr != m_inputStreamList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


Canvas CustomLayout::GetCanvas() const
{
    return m_canvas;
}

void CustomLayout::SetCanvas(const Canvas& _canvas)
{
    m_canvas = _canvas;
    m_canvasHasBeenSet = true;
}

bool CustomLayout::CanvasHasBeenSet() const
{
    return m_canvasHasBeenSet;
}

vector<StreamLayout> CustomLayout::GetInputStreamList() const
{
    return m_inputStreamList;
}

void CustomLayout::SetInputStreamList(const vector<StreamLayout>& _inputStreamList)
{
    m_inputStreamList = _inputStreamList;
    m_inputStreamListHasBeenSet = true;
}

bool CustomLayout::InputStreamListHasBeenSet() const
{
    return m_inputStreamListHasBeenSet;
}

