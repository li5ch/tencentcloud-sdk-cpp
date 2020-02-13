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

#include <tencentcloud/ssm/v20190923/model/PutSecretValueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssm::V20190923::Model;
using namespace rapidjson;
using namespace std;

PutSecretValueRequest::PutSecretValueRequest() :
    m_secretNameHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_secretBinaryHasBeenSet(false),
    m_secretStringHasBeenSet(false)
{
}

string PutSecretValueRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_secretNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretBinaryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecretBinary";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_secretBinary.c_str(), allocator).Move(), allocator);
    }

    if (m_secretStringHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecretString";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_secretString.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PutSecretValueRequest::GetSecretName() const
{
    return m_secretName;
}

void PutSecretValueRequest::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool PutSecretValueRequest::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string PutSecretValueRequest::GetVersionId() const
{
    return m_versionId;
}

void PutSecretValueRequest::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool PutSecretValueRequest::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string PutSecretValueRequest::GetSecretBinary() const
{
    return m_secretBinary;
}

void PutSecretValueRequest::SetSecretBinary(const string& _secretBinary)
{
    m_secretBinary = _secretBinary;
    m_secretBinaryHasBeenSet = true;
}

bool PutSecretValueRequest::SecretBinaryHasBeenSet() const
{
    return m_secretBinaryHasBeenSet;
}

string PutSecretValueRequest::GetSecretString() const
{
    return m_secretString;
}

void PutSecretValueRequest::SetSecretString(const string& _secretString)
{
    m_secretString = _secretString;
    m_secretStringHasBeenSet = true;
}

bool PutSecretValueRequest::SecretStringHasBeenSet() const
{
    return m_secretStringHasBeenSet;
}


