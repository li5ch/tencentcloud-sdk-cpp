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

#include <tencentcloud/vod/v20180717/model/TaskSimpleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

TaskSimpleInfo::TaskSimpleInfo() :
    m_taskIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_beginProcessTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

CoreInternalOutcome TaskSimpleInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskSimpleInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskSimpleInfo.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskSimpleInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BeginProcessTime") && !value["BeginProcessTime"].IsNull())
    {
        if (!value["BeginProcessTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskSimpleInfo.BeginProcessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginProcessTime = string(value["BeginProcessTime"].GetString());
        m_beginProcessTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskSimpleInfo.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskSimpleInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("SessionContext") && !value["SessionContext"].IsNull())
    {
        if (!value["SessionContext"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskSimpleInfo.SessionContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionContext = string(value["SessionContext"].GetString());
        m_sessionContextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskSimpleInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_beginProcessTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BeginProcessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_beginProcessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

}


string TaskSimpleInfo::GetTaskId() const
{
    return m_taskId;
}

void TaskSimpleInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskSimpleInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskSimpleInfo::GetTaskType() const
{
    return m_taskType;
}

void TaskSimpleInfo::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TaskSimpleInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string TaskSimpleInfo::GetCreateTime() const
{
    return m_createTime;
}

void TaskSimpleInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskSimpleInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskSimpleInfo::GetBeginProcessTime() const
{
    return m_beginProcessTime;
}

void TaskSimpleInfo::SetBeginProcessTime(const string& _beginProcessTime)
{
    m_beginProcessTime = _beginProcessTime;
    m_beginProcessTimeHasBeenSet = true;
}

bool TaskSimpleInfo::BeginProcessTimeHasBeenSet() const
{
    return m_beginProcessTimeHasBeenSet;
}

string TaskSimpleInfo::GetFinishTime() const
{
    return m_finishTime;
}

void TaskSimpleInfo::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool TaskSimpleInfo::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string TaskSimpleInfo::GetSessionId() const
{
    return m_sessionId;
}

void TaskSimpleInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool TaskSimpleInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string TaskSimpleInfo::GetSessionContext() const
{
    return m_sessionContext;
}

void TaskSimpleInfo::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool TaskSimpleInfo::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

