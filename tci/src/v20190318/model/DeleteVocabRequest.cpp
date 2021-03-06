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

#include <tencentcloud/tci/v20190318/model/DeleteVocabRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace rapidjson;
using namespace std;

DeleteVocabRequest::DeleteVocabRequest() :
    m_vocabLibNameHasBeenSet(false),
    m_vocabListHasBeenSet(false)
{
}

string DeleteVocabRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vocabLibNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VocabLibName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vocabLibName.c_str(), allocator).Move(), allocator);
    }

    if (m_vocabListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VocabList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_vocabList.begin(); itr != m_vocabList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteVocabRequest::GetVocabLibName() const
{
    return m_vocabLibName;
}

void DeleteVocabRequest::SetVocabLibName(const string& _vocabLibName)
{
    m_vocabLibName = _vocabLibName;
    m_vocabLibNameHasBeenSet = true;
}

bool DeleteVocabRequest::VocabLibNameHasBeenSet() const
{
    return m_vocabLibNameHasBeenSet;
}

vector<string> DeleteVocabRequest::GetVocabList() const
{
    return m_vocabList;
}

void DeleteVocabRequest::SetVocabList(const vector<string>& _vocabList)
{
    m_vocabList = _vocabList;
    m_vocabListHasBeenSet = true;
}

bool DeleteVocabRequest::VocabListHasBeenSet() const
{
    return m_vocabListHasBeenSet;
}


