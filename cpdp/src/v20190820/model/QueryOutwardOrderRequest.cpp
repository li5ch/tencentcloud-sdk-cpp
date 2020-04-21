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

#include <tencentcloud/cpdp/v20190820/model/QueryOutwardOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

QueryOutwardOrderRequest::QueryOutwardOrderRequest() :
    m_transactionIdHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string QueryOutwardOrderRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_transactionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_transactionId.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryOutwardOrderRequest::GetTransactionId() const
{
    return m_transactionId;
}

void QueryOutwardOrderRequest::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool QueryOutwardOrderRequest::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

string QueryOutwardOrderRequest::GetProfile() const
{
    return m_profile;
}

void QueryOutwardOrderRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool QueryOutwardOrderRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


