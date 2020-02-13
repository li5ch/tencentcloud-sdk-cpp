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

#include <tencentcloud/cpdp/v20190820/model/UnBindAcctRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

UnBindAcctRequest::UnBindAcctRequest() :
    m_midasAppIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_settleAcctNoHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false)
{
}

string UnBindAcctRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_settleAcctNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SettleAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_settleAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnBindAcctRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void UnBindAcctRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool UnBindAcctRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string UnBindAcctRequest::GetSubAppId() const
{
    return m_subAppId;
}

void UnBindAcctRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool UnBindAcctRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string UnBindAcctRequest::GetSettleAcctNo() const
{
    return m_settleAcctNo;
}

void UnBindAcctRequest::SetSettleAcctNo(const string& _settleAcctNo)
{
    m_settleAcctNo = _settleAcctNo;
    m_settleAcctNoHasBeenSet = true;
}

bool UnBindAcctRequest::SettleAcctNoHasBeenSet() const
{
    return m_settleAcctNoHasBeenSet;
}

string UnBindAcctRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void UnBindAcctRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool UnBindAcctRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string UnBindAcctRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void UnBindAcctRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool UnBindAcctRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}


