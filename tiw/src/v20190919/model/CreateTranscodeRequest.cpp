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

#include <tencentcloud/tiw/v20190919/model/CreateTranscodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace rapidjson;
using namespace std;

CreateTranscodeRequest::CreateTranscodeRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_isStaticPPTHasBeenSet(false),
    m_minResolutionHasBeenSet(false),
    m_thumbnailResolutionHasBeenSet(false),
    m_compressFileTypeHasBeenSet(false)
{
}

string CreateTranscodeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_isStaticPPTHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsStaticPPT";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isStaticPPT, allocator);
    }

    if (m_minResolutionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MinResolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_minResolution.c_str(), allocator).Move(), allocator);
    }

    if (m_thumbnailResolutionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ThumbnailResolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_thumbnailResolution.c_str(), allocator).Move(), allocator);
    }

    if (m_compressFileTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CompressFileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_compressFileType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateTranscodeRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateTranscodeRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateTranscodeRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateTranscodeRequest::GetUrl() const
{
    return m_url;
}

void CreateTranscodeRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreateTranscodeRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

bool CreateTranscodeRequest::GetIsStaticPPT() const
{
    return m_isStaticPPT;
}

void CreateTranscodeRequest::SetIsStaticPPT(const bool& _isStaticPPT)
{
    m_isStaticPPT = _isStaticPPT;
    m_isStaticPPTHasBeenSet = true;
}

bool CreateTranscodeRequest::IsStaticPPTHasBeenSet() const
{
    return m_isStaticPPTHasBeenSet;
}

string CreateTranscodeRequest::GetMinResolution() const
{
    return m_minResolution;
}

void CreateTranscodeRequest::SetMinResolution(const string& _minResolution)
{
    m_minResolution = _minResolution;
    m_minResolutionHasBeenSet = true;
}

bool CreateTranscodeRequest::MinResolutionHasBeenSet() const
{
    return m_minResolutionHasBeenSet;
}

string CreateTranscodeRequest::GetThumbnailResolution() const
{
    return m_thumbnailResolution;
}

void CreateTranscodeRequest::SetThumbnailResolution(const string& _thumbnailResolution)
{
    m_thumbnailResolution = _thumbnailResolution;
    m_thumbnailResolutionHasBeenSet = true;
}

bool CreateTranscodeRequest::ThumbnailResolutionHasBeenSet() const
{
    return m_thumbnailResolutionHasBeenSet;
}

string CreateTranscodeRequest::GetCompressFileType() const
{
    return m_compressFileType;
}

void CreateTranscodeRequest::SetCompressFileType(const string& _compressFileType)
{
    m_compressFileType = _compressFileType;
    m_compressFileTypeHasBeenSet = true;
}

bool CreateTranscodeRequest::CompressFileTypeHasBeenSet() const
{
    return m_compressFileTypeHasBeenSet;
}


