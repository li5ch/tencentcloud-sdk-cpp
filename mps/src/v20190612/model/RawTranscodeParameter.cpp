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

#include <tencentcloud/mps/v20190612/model/RawTranscodeParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

RawTranscodeParameter::RawTranscodeParameter() :
    m_containerHasBeenSet(false),
    m_removeVideoHasBeenSet(false),
    m_removeAudioHasBeenSet(false),
    m_videoTemplateHasBeenSet(false),
    m_audioTemplateHasBeenSet(false),
    m_tEHDConfigHasBeenSet(false)
{
}

CoreInternalOutcome RawTranscodeParameter::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsString())
        {
            return CoreInternalOutcome(Error("response `RawTranscodeParameter.Container` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_container = string(value["Container"].GetString());
        m_containerHasBeenSet = true;
    }

    if (value.HasMember("RemoveVideo") && !value["RemoveVideo"].IsNull())
    {
        if (!value["RemoveVideo"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RawTranscodeParameter.RemoveVideo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removeVideo = value["RemoveVideo"].GetInt64();
        m_removeVideoHasBeenSet = true;
    }

    if (value.HasMember("RemoveAudio") && !value["RemoveAudio"].IsNull())
    {
        if (!value["RemoveAudio"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RawTranscodeParameter.RemoveAudio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removeAudio = value["RemoveAudio"].GetInt64();
        m_removeAudioHasBeenSet = true;
    }

    if (value.HasMember("VideoTemplate") && !value["VideoTemplate"].IsNull())
    {
        if (!value["VideoTemplate"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RawTranscodeParameter.VideoTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoTemplate.Deserialize(value["VideoTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoTemplateHasBeenSet = true;
    }

    if (value.HasMember("AudioTemplate") && !value["AudioTemplate"].IsNull())
    {
        if (!value["AudioTemplate"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RawTranscodeParameter.AudioTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioTemplate.Deserialize(value["AudioTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioTemplateHasBeenSet = true;
    }

    if (value.HasMember("TEHDConfig") && !value["TEHDConfig"].IsNull())
    {
        if (!value["TEHDConfig"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RawTranscodeParameter.TEHDConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tEHDConfig.Deserialize(value["TEHDConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tEHDConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RawTranscodeParameter::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_containerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_container.c_str(), allocator).Move(), allocator);
    }

    if (m_removeVideoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RemoveVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removeVideo, allocator);
    }

    if (m_removeAudioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RemoveAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removeAudio, allocator);
    }

    if (m_videoTemplateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_videoTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioTemplateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_audioTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tEHDConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TEHDConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_tEHDConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RawTranscodeParameter::GetContainer() const
{
    return m_container;
}

void RawTranscodeParameter::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool RawTranscodeParameter::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

int64_t RawTranscodeParameter::GetRemoveVideo() const
{
    return m_removeVideo;
}

void RawTranscodeParameter::SetRemoveVideo(const int64_t& _removeVideo)
{
    m_removeVideo = _removeVideo;
    m_removeVideoHasBeenSet = true;
}

bool RawTranscodeParameter::RemoveVideoHasBeenSet() const
{
    return m_removeVideoHasBeenSet;
}

int64_t RawTranscodeParameter::GetRemoveAudio() const
{
    return m_removeAudio;
}

void RawTranscodeParameter::SetRemoveAudio(const int64_t& _removeAudio)
{
    m_removeAudio = _removeAudio;
    m_removeAudioHasBeenSet = true;
}

bool RawTranscodeParameter::RemoveAudioHasBeenSet() const
{
    return m_removeAudioHasBeenSet;
}

VideoTemplateInfo RawTranscodeParameter::GetVideoTemplate() const
{
    return m_videoTemplate;
}

void RawTranscodeParameter::SetVideoTemplate(const VideoTemplateInfo& _videoTemplate)
{
    m_videoTemplate = _videoTemplate;
    m_videoTemplateHasBeenSet = true;
}

bool RawTranscodeParameter::VideoTemplateHasBeenSet() const
{
    return m_videoTemplateHasBeenSet;
}

AudioTemplateInfo RawTranscodeParameter::GetAudioTemplate() const
{
    return m_audioTemplate;
}

void RawTranscodeParameter::SetAudioTemplate(const AudioTemplateInfo& _audioTemplate)
{
    m_audioTemplate = _audioTemplate;
    m_audioTemplateHasBeenSet = true;
}

bool RawTranscodeParameter::AudioTemplateHasBeenSet() const
{
    return m_audioTemplateHasBeenSet;
}

TEHDConfig RawTranscodeParameter::GetTEHDConfig() const
{
    return m_tEHDConfig;
}

void RawTranscodeParameter::SetTEHDConfig(const TEHDConfig& _tEHDConfig)
{
    m_tEHDConfig = _tEHDConfig;
    m_tEHDConfigHasBeenSet = true;
}

bool RawTranscodeParameter::TEHDConfigHasBeenSet() const
{
    return m_tEHDConfigHasBeenSet;
}

