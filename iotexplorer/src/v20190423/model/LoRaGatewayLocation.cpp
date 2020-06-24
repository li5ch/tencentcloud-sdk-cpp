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

#include <tencentcloud/iotexplorer/v20190423/model/LoRaGatewayLocation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace rapidjson;
using namespace std;

LoRaGatewayLocation::LoRaGatewayLocation() :
    m_accuracyHasBeenSet(false),
    m_altitudeHasBeenSet(false),
    m_latitudeHasBeenSet(false),
    m_longitudeHasBeenSet(false)
{
}

CoreInternalOutcome LoRaGatewayLocation::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Accuracy") && !value["Accuracy"].IsNull())
    {
        if (!value["Accuracy"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `LoRaGatewayLocation.Accuracy` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_accuracy = value["Accuracy"].GetDouble();
        m_accuracyHasBeenSet = true;
    }

    if (value.HasMember("Altitude") && !value["Altitude"].IsNull())
    {
        if (!value["Altitude"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `LoRaGatewayLocation.Altitude` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_altitude = value["Altitude"].GetDouble();
        m_altitudeHasBeenSet = true;
    }

    if (value.HasMember("Latitude") && !value["Latitude"].IsNull())
    {
        if (!value["Latitude"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `LoRaGatewayLocation.Latitude` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_latitude = value["Latitude"].GetDouble();
        m_latitudeHasBeenSet = true;
    }

    if (value.HasMember("Longitude") && !value["Longitude"].IsNull())
    {
        if (!value["Longitude"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `LoRaGatewayLocation.Longitude` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_longitude = value["Longitude"].GetDouble();
        m_longitudeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoRaGatewayLocation::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_accuracyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Accuracy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accuracy, allocator);
    }

    if (m_altitudeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Altitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_altitude, allocator);
    }

    if (m_latitudeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Latitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latitude, allocator);
    }

    if (m_longitudeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Longitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_longitude, allocator);
    }

}


double LoRaGatewayLocation::GetAccuracy() const
{
    return m_accuracy;
}

void LoRaGatewayLocation::SetAccuracy(const double& _accuracy)
{
    m_accuracy = _accuracy;
    m_accuracyHasBeenSet = true;
}

bool LoRaGatewayLocation::AccuracyHasBeenSet() const
{
    return m_accuracyHasBeenSet;
}

double LoRaGatewayLocation::GetAltitude() const
{
    return m_altitude;
}

void LoRaGatewayLocation::SetAltitude(const double& _altitude)
{
    m_altitude = _altitude;
    m_altitudeHasBeenSet = true;
}

bool LoRaGatewayLocation::AltitudeHasBeenSet() const
{
    return m_altitudeHasBeenSet;
}

double LoRaGatewayLocation::GetLatitude() const
{
    return m_latitude;
}

void LoRaGatewayLocation::SetLatitude(const double& _latitude)
{
    m_latitude = _latitude;
    m_latitudeHasBeenSet = true;
}

bool LoRaGatewayLocation::LatitudeHasBeenSet() const
{
    return m_latitudeHasBeenSet;
}

double LoRaGatewayLocation::GetLongitude() const
{
    return m_longitude;
}

void LoRaGatewayLocation::SetLongitude(const double& _longitude)
{
    m_longitude = _longitude;
    m_longitudeHasBeenSet = true;
}

bool LoRaGatewayLocation::LongitudeHasBeenSet() const
{
    return m_longitudeHasBeenSet;
}

