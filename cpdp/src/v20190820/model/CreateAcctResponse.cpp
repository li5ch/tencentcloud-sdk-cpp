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

#include <tencentcloud/cpdp/v20190820/model/CreateAcctResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

CreateAcctResponse::CreateAcctResponse() :
    m_subAppIdHasBeenSet(false),
    m_subAcctNoHasBeenSet(false)
{
}

CoreInternalOutcome CreateAcctResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("SubAppId") && !rsp["SubAppId"].IsNull())
    {
        if (!rsp["SubAppId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = string(rsp["SubAppId"].GetString());
        m_subAppIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubAcctNo") && !rsp["SubAcctNo"].IsNull())
    {
        if (!rsp["SubAcctNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAcctNo = string(rsp["SubAcctNo"].GetString());
        m_subAcctNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateAcctResponse::GetSubAppId() const
{
    return m_subAppId;
}

bool CreateAcctResponse::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateAcctResponse::GetSubAcctNo() const
{
    return m_subAcctNo;
}

bool CreateAcctResponse::SubAcctNoHasBeenSet() const
{
    return m_subAcctNoHasBeenSet;
}


