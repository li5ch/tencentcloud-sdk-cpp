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

#include <tencentcloud/ocr/v20181119/model/EstateCertOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

EstateCertOCRResponse::EstateCertOCRResponse() :
    m_obligeeHasBeenSet(false),
    m_ownershipHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_propertyHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_termHasBeenSet(false),
    m_otherHasBeenSet(false),
    m_angleHasBeenSet(false)
{
}

CoreInternalOutcome EstateCertOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Obligee") && !rsp["Obligee"].IsNull())
    {
        if (!rsp["Obligee"].IsString())
        {
            return CoreInternalOutcome(Error("response `Obligee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_obligee = string(rsp["Obligee"].GetString());
        m_obligeeHasBeenSet = true;
    }

    if (rsp.HasMember("Ownership") && !rsp["Ownership"].IsNull())
    {
        if (!rsp["Ownership"].IsString())
        {
            return CoreInternalOutcome(Error("response `Ownership` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownership = string(rsp["Ownership"].GetString());
        m_ownershipHasBeenSet = true;
    }

    if (rsp.HasMember("Location") && !rsp["Location"].IsNull())
    {
        if (!rsp["Location"].IsString())
        {
            return CoreInternalOutcome(Error("response `Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(rsp["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (rsp.HasMember("Unit") && !rsp["Unit"].IsNull())
    {
        if (!rsp["Unit"].IsString())
        {
            return CoreInternalOutcome(Error("response `Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(rsp["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Property") && !rsp["Property"].IsNull())
    {
        if (!rsp["Property"].IsString())
        {
            return CoreInternalOutcome(Error("response `Property` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_property = string(rsp["Property"].GetString());
        m_propertyHasBeenSet = true;
    }

    if (rsp.HasMember("Usage") && !rsp["Usage"].IsNull())
    {
        if (!rsp["Usage"].IsString())
        {
            return CoreInternalOutcome(Error("response `Usage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usage = string(rsp["Usage"].GetString());
        m_usageHasBeenSet = true;
    }

    if (rsp.HasMember("Area") && !rsp["Area"].IsNull())
    {
        if (!rsp["Area"].IsString())
        {
            return CoreInternalOutcome(Error("response `Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(rsp["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (rsp.HasMember("Term") && !rsp["Term"].IsNull())
    {
        if (!rsp["Term"].IsString())
        {
            return CoreInternalOutcome(Error("response `Term` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_term = string(rsp["Term"].GetString());
        m_termHasBeenSet = true;
    }

    if (rsp.HasMember("Other") && !rsp["Other"].IsNull())
    {
        if (!rsp["Other"].IsString())
        {
            return CoreInternalOutcome(Error("response `Other` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_other = string(rsp["Other"].GetString());
        m_otherHasBeenSet = true;
    }

    if (rsp.HasMember("Angle") && !rsp["Angle"].IsNull())
    {
        if (!rsp["Angle"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `Angle` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_angle = rsp["Angle"].GetDouble();
        m_angleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string EstateCertOCRResponse::GetObligee() const
{
    return m_obligee;
}

bool EstateCertOCRResponse::ObligeeHasBeenSet() const
{
    return m_obligeeHasBeenSet;
}

string EstateCertOCRResponse::GetOwnership() const
{
    return m_ownership;
}

bool EstateCertOCRResponse::OwnershipHasBeenSet() const
{
    return m_ownershipHasBeenSet;
}

string EstateCertOCRResponse::GetLocation() const
{
    return m_location;
}

bool EstateCertOCRResponse::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string EstateCertOCRResponse::GetUnit() const
{
    return m_unit;
}

bool EstateCertOCRResponse::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string EstateCertOCRResponse::GetType() const
{
    return m_type;
}

bool EstateCertOCRResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string EstateCertOCRResponse::GetProperty() const
{
    return m_property;
}

bool EstateCertOCRResponse::PropertyHasBeenSet() const
{
    return m_propertyHasBeenSet;
}

string EstateCertOCRResponse::GetUsage() const
{
    return m_usage;
}

bool EstateCertOCRResponse::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

string EstateCertOCRResponse::GetArea() const
{
    return m_area;
}

bool EstateCertOCRResponse::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string EstateCertOCRResponse::GetTerm() const
{
    return m_term;
}

bool EstateCertOCRResponse::TermHasBeenSet() const
{
    return m_termHasBeenSet;
}

string EstateCertOCRResponse::GetOther() const
{
    return m_other;
}

bool EstateCertOCRResponse::OtherHasBeenSet() const
{
    return m_otherHasBeenSet;
}

double EstateCertOCRResponse::GetAngle() const
{
    return m_angle;
}

bool EstateCertOCRResponse::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}


