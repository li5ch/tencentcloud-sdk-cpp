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

#include <tencentcloud/faceid/v20180301/model/IdCardOCRVerificationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace rapidjson;
using namespace std;

IdCardOCRVerificationResponse::IdCardOCRVerificationResponse() :
    m_resultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idCardHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_nationHasBeenSet(false),
    m_birthHasBeenSet(false),
    m_addressHasBeenSet(false)
{
}

CoreInternalOutcome IdCardOCRVerificationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsString())
        {
            return CoreInternalOutcome(Error("response `Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(rsp["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("IdCard") && !rsp["IdCard"].IsNull())
    {
        if (!rsp["IdCard"].IsString())
        {
            return CoreInternalOutcome(Error("response `IdCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCard = string(rsp["IdCard"].GetString());
        m_idCardHasBeenSet = true;
    }

    if (rsp.HasMember("Sex") && !rsp["Sex"].IsNull())
    {
        if (!rsp["Sex"].IsString())
        {
            return CoreInternalOutcome(Error("response `Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(rsp["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (rsp.HasMember("Nation") && !rsp["Nation"].IsNull())
    {
        if (!rsp["Nation"].IsString())
        {
            return CoreInternalOutcome(Error("response `Nation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nation = string(rsp["Nation"].GetString());
        m_nationHasBeenSet = true;
    }

    if (rsp.HasMember("Birth") && !rsp["Birth"].IsNull())
    {
        if (!rsp["Birth"].IsString())
        {
            return CoreInternalOutcome(Error("response `Birth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birth = string(rsp["Birth"].GetString());
        m_birthHasBeenSet = true;
    }

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string IdCardOCRVerificationResponse::GetResult() const
{
    return m_result;
}

bool IdCardOCRVerificationResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string IdCardOCRVerificationResponse::GetDescription() const
{
    return m_description;
}

bool IdCardOCRVerificationResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string IdCardOCRVerificationResponse::GetName() const
{
    return m_name;
}

bool IdCardOCRVerificationResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string IdCardOCRVerificationResponse::GetIdCard() const
{
    return m_idCard;
}

bool IdCardOCRVerificationResponse::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string IdCardOCRVerificationResponse::GetSex() const
{
    return m_sex;
}

bool IdCardOCRVerificationResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string IdCardOCRVerificationResponse::GetNation() const
{
    return m_nation;
}

bool IdCardOCRVerificationResponse::NationHasBeenSet() const
{
    return m_nationHasBeenSet;
}

string IdCardOCRVerificationResponse::GetBirth() const
{
    return m_birth;
}

bool IdCardOCRVerificationResponse::BirthHasBeenSet() const
{
    return m_birthHasBeenSet;
}

string IdCardOCRVerificationResponse::GetAddress() const
{
    return m_address;
}

bool IdCardOCRVerificationResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}


