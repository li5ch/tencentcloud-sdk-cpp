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

#include <tencentcloud/apigateway/v20180808/model/CreateApiRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

CreateApiRequest::CreateApiRequest() :
    m_serviceIdHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_serviceTimeoutHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_requestConfigHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_apiDescHasBeenSet(false),
    m_apiTypeHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_enableCORSHasBeenSet(false),
    m_constantParametersHasBeenSet(false),
    m_requestParametersHasBeenSet(false),
    m_apiBusinessTypeHasBeenSet(false),
    m_serviceMockReturnMessageHasBeenSet(false),
    m_microServicesHasBeenSet(false),
    m_serviceTsfLoadBalanceConfHasBeenSet(false),
    m_serviceTsfHealthCheckConfHasBeenSet(false),
    m_targetServicesHasBeenSet(false),
    m_targetServicesLoadBalanceConfHasBeenSet(false),
    m_targetServicesHealthCheckConfHasBeenSet(false),
    m_serviceScfFunctionNameHasBeenSet(false),
    m_serviceWebsocketRegisterFunctionNameHasBeenSet(false),
    m_serviceWebsocketCleanupFunctionNameHasBeenSet(false),
    m_serviceWebsocketTransportFunctionNameHasBeenSet(false),
    m_serviceScfFunctionNamespaceHasBeenSet(false),
    m_serviceScfFunctionQualifierHasBeenSet(false),
    m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet(false),
    m_serviceWebsocketRegisterFunctionQualifierHasBeenSet(false),
    m_serviceWebsocketTransportFunctionNamespaceHasBeenSet(false),
    m_serviceWebsocketTransportFunctionQualifierHasBeenSet(false),
    m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet(false),
    m_serviceWebsocketCleanupFunctionQualifierHasBeenSet(false),
    m_serviceScfIsIntegratedResponseHasBeenSet(false),
    m_isDebugAfterChargeHasBeenSet(false),
    m_isDeleteResponseErrorCodesHasBeenSet(false),
    m_responseTypeHasBeenSet(false),
    m_responseSuccessExampleHasBeenSet(false),
    m_responseFailExampleHasBeenSet(false),
    m_serviceConfigHasBeenSet(false),
    m_authRelationApiIdHasBeenSet(false),
    m_serviceParametersHasBeenSet(false),
    m_oauthConfigHasBeenSet(false),
    m_responseErrorCodesHasBeenSet(false),
    m_targetNamespaceIdHasBeenSet(false),
    m_userTypeHasBeenSet(false)
{
}

string CreateApiRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTimeoutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceTimeout, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_requestConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RequestConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_requestConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_apiNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApiDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_apiDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_apiTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApiType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_apiType.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_enableCORSHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableCORS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCORS, allocator);
    }

    if (m_constantParametersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConstantParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_constantParameters.begin(); itr != m_constantParameters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_requestParametersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RequestParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requestParameters.begin(); itr != m_requestParameters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_apiBusinessTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApiBusinessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_apiBusinessType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceMockReturnMessageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceMockReturnMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceMockReturnMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_microServicesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MicroServices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_microServices.begin(); itr != m_microServices.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_serviceTsfLoadBalanceConfHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceTsfLoadBalanceConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_serviceTsfLoadBalanceConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_serviceTsfHealthCheckConfHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceTsfHealthCheckConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_serviceTsfHealthCheckConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_targetServicesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetServices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetServices.begin(); itr != m_targetServices.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_targetServicesLoadBalanceConfHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetServicesLoadBalanceConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetServicesLoadBalanceConf, allocator);
    }

    if (m_targetServicesHealthCheckConfHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetServicesHealthCheckConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_targetServicesHealthCheckConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_serviceScfFunctionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceScfFunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceScfFunctionName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketRegisterFunctionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceWebsocketRegisterFunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceWebsocketRegisterFunctionName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketCleanupFunctionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceWebsocketCleanupFunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceWebsocketCleanupFunctionName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketTransportFunctionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceWebsocketTransportFunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceWebsocketTransportFunctionName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceScfFunctionNamespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceScfFunctionNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceScfFunctionNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceScfFunctionQualifierHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceScfFunctionQualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceScfFunctionQualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceWebsocketRegisterFunctionNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceWebsocketRegisterFunctionNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketRegisterFunctionQualifierHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceWebsocketRegisterFunctionQualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceWebsocketRegisterFunctionQualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketTransportFunctionNamespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceWebsocketTransportFunctionNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceWebsocketTransportFunctionNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketTransportFunctionQualifierHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceWebsocketTransportFunctionQualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceWebsocketTransportFunctionQualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceWebsocketCleanupFunctionNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceWebsocketCleanupFunctionNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketCleanupFunctionQualifierHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceWebsocketCleanupFunctionQualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceWebsocketCleanupFunctionQualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceScfIsIntegratedResponseHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceScfIsIntegratedResponse";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceScfIsIntegratedResponse, allocator);
    }

    if (m_isDebugAfterChargeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsDebugAfterCharge";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDebugAfterCharge, allocator);
    }

    if (m_isDeleteResponseErrorCodesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsDeleteResponseErrorCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDeleteResponseErrorCodes, allocator);
    }

    if (m_responseTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResponseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_responseType.c_str(), allocator).Move(), allocator);
    }

    if (m_responseSuccessExampleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResponseSuccessExample";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_responseSuccessExample.c_str(), allocator).Move(), allocator);
    }

    if (m_responseFailExampleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResponseFailExample";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_responseFailExample.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_serviceConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_authRelationApiIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuthRelationApiId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_authRelationApiId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceParametersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceParameters.begin(); itr != m_serviceParameters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_oauthConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OauthConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_oauthConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_responseErrorCodesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResponseErrorCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_responseErrorCodes.begin(); itr != m_responseErrorCodes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_targetNamespaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetNamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_targetNamespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_userType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApiRequest::GetServiceId() const
{
    return m_serviceId;
}

void CreateApiRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool CreateApiRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string CreateApiRequest::GetServiceType() const
{
    return m_serviceType;
}

void CreateApiRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CreateApiRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

int64_t CreateApiRequest::GetServiceTimeout() const
{
    return m_serviceTimeout;
}

void CreateApiRequest::SetServiceTimeout(const int64_t& _serviceTimeout)
{
    m_serviceTimeout = _serviceTimeout;
    m_serviceTimeoutHasBeenSet = true;
}

bool CreateApiRequest::ServiceTimeoutHasBeenSet() const
{
    return m_serviceTimeoutHasBeenSet;
}

string CreateApiRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateApiRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateApiRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

ApiRequestConfig CreateApiRequest::GetRequestConfig() const
{
    return m_requestConfig;
}

void CreateApiRequest::SetRequestConfig(const ApiRequestConfig& _requestConfig)
{
    m_requestConfig = _requestConfig;
    m_requestConfigHasBeenSet = true;
}

bool CreateApiRequest::RequestConfigHasBeenSet() const
{
    return m_requestConfigHasBeenSet;
}

string CreateApiRequest::GetApiName() const
{
    return m_apiName;
}

void CreateApiRequest::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool CreateApiRequest::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string CreateApiRequest::GetApiDesc() const
{
    return m_apiDesc;
}

void CreateApiRequest::SetApiDesc(const string& _apiDesc)
{
    m_apiDesc = _apiDesc;
    m_apiDescHasBeenSet = true;
}

bool CreateApiRequest::ApiDescHasBeenSet() const
{
    return m_apiDescHasBeenSet;
}

string CreateApiRequest::GetApiType() const
{
    return m_apiType;
}

void CreateApiRequest::SetApiType(const string& _apiType)
{
    m_apiType = _apiType;
    m_apiTypeHasBeenSet = true;
}

bool CreateApiRequest::ApiTypeHasBeenSet() const
{
    return m_apiTypeHasBeenSet;
}

string CreateApiRequest::GetAuthType() const
{
    return m_authType;
}

void CreateApiRequest::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool CreateApiRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

bool CreateApiRequest::GetEnableCORS() const
{
    return m_enableCORS;
}

void CreateApiRequest::SetEnableCORS(const bool& _enableCORS)
{
    m_enableCORS = _enableCORS;
    m_enableCORSHasBeenSet = true;
}

bool CreateApiRequest::EnableCORSHasBeenSet() const
{
    return m_enableCORSHasBeenSet;
}

vector<ConstantParameter> CreateApiRequest::GetConstantParameters() const
{
    return m_constantParameters;
}

void CreateApiRequest::SetConstantParameters(const vector<ConstantParameter>& _constantParameters)
{
    m_constantParameters = _constantParameters;
    m_constantParametersHasBeenSet = true;
}

bool CreateApiRequest::ConstantParametersHasBeenSet() const
{
    return m_constantParametersHasBeenSet;
}

vector<RequestParameter> CreateApiRequest::GetRequestParameters() const
{
    return m_requestParameters;
}

void CreateApiRequest::SetRequestParameters(const vector<RequestParameter>& _requestParameters)
{
    m_requestParameters = _requestParameters;
    m_requestParametersHasBeenSet = true;
}

bool CreateApiRequest::RequestParametersHasBeenSet() const
{
    return m_requestParametersHasBeenSet;
}

string CreateApiRequest::GetApiBusinessType() const
{
    return m_apiBusinessType;
}

void CreateApiRequest::SetApiBusinessType(const string& _apiBusinessType)
{
    m_apiBusinessType = _apiBusinessType;
    m_apiBusinessTypeHasBeenSet = true;
}

bool CreateApiRequest::ApiBusinessTypeHasBeenSet() const
{
    return m_apiBusinessTypeHasBeenSet;
}

string CreateApiRequest::GetServiceMockReturnMessage() const
{
    return m_serviceMockReturnMessage;
}

void CreateApiRequest::SetServiceMockReturnMessage(const string& _serviceMockReturnMessage)
{
    m_serviceMockReturnMessage = _serviceMockReturnMessage;
    m_serviceMockReturnMessageHasBeenSet = true;
}

bool CreateApiRequest::ServiceMockReturnMessageHasBeenSet() const
{
    return m_serviceMockReturnMessageHasBeenSet;
}

vector<MicroServiceReq> CreateApiRequest::GetMicroServices() const
{
    return m_microServices;
}

void CreateApiRequest::SetMicroServices(const vector<MicroServiceReq>& _microServices)
{
    m_microServices = _microServices;
    m_microServicesHasBeenSet = true;
}

bool CreateApiRequest::MicroServicesHasBeenSet() const
{
    return m_microServicesHasBeenSet;
}

TsfLoadBalanceConfResp CreateApiRequest::GetServiceTsfLoadBalanceConf() const
{
    return m_serviceTsfLoadBalanceConf;
}

void CreateApiRequest::SetServiceTsfLoadBalanceConf(const TsfLoadBalanceConfResp& _serviceTsfLoadBalanceConf)
{
    m_serviceTsfLoadBalanceConf = _serviceTsfLoadBalanceConf;
    m_serviceTsfLoadBalanceConfHasBeenSet = true;
}

bool CreateApiRequest::ServiceTsfLoadBalanceConfHasBeenSet() const
{
    return m_serviceTsfLoadBalanceConfHasBeenSet;
}

HealthCheckConf CreateApiRequest::GetServiceTsfHealthCheckConf() const
{
    return m_serviceTsfHealthCheckConf;
}

void CreateApiRequest::SetServiceTsfHealthCheckConf(const HealthCheckConf& _serviceTsfHealthCheckConf)
{
    m_serviceTsfHealthCheckConf = _serviceTsfHealthCheckConf;
    m_serviceTsfHealthCheckConfHasBeenSet = true;
}

bool CreateApiRequest::ServiceTsfHealthCheckConfHasBeenSet() const
{
    return m_serviceTsfHealthCheckConfHasBeenSet;
}

vector<TargetServicesReq> CreateApiRequest::GetTargetServices() const
{
    return m_targetServices;
}

void CreateApiRequest::SetTargetServices(const vector<TargetServicesReq>& _targetServices)
{
    m_targetServices = _targetServices;
    m_targetServicesHasBeenSet = true;
}

bool CreateApiRequest::TargetServicesHasBeenSet() const
{
    return m_targetServicesHasBeenSet;
}

int64_t CreateApiRequest::GetTargetServicesLoadBalanceConf() const
{
    return m_targetServicesLoadBalanceConf;
}

void CreateApiRequest::SetTargetServicesLoadBalanceConf(const int64_t& _targetServicesLoadBalanceConf)
{
    m_targetServicesLoadBalanceConf = _targetServicesLoadBalanceConf;
    m_targetServicesLoadBalanceConfHasBeenSet = true;
}

bool CreateApiRequest::TargetServicesLoadBalanceConfHasBeenSet() const
{
    return m_targetServicesLoadBalanceConfHasBeenSet;
}

HealthCheckConf CreateApiRequest::GetTargetServicesHealthCheckConf() const
{
    return m_targetServicesHealthCheckConf;
}

void CreateApiRequest::SetTargetServicesHealthCheckConf(const HealthCheckConf& _targetServicesHealthCheckConf)
{
    m_targetServicesHealthCheckConf = _targetServicesHealthCheckConf;
    m_targetServicesHealthCheckConfHasBeenSet = true;
}

bool CreateApiRequest::TargetServicesHealthCheckConfHasBeenSet() const
{
    return m_targetServicesHealthCheckConfHasBeenSet;
}

string CreateApiRequest::GetServiceScfFunctionName() const
{
    return m_serviceScfFunctionName;
}

void CreateApiRequest::SetServiceScfFunctionName(const string& _serviceScfFunctionName)
{
    m_serviceScfFunctionName = _serviceScfFunctionName;
    m_serviceScfFunctionNameHasBeenSet = true;
}

bool CreateApiRequest::ServiceScfFunctionNameHasBeenSet() const
{
    return m_serviceScfFunctionNameHasBeenSet;
}

string CreateApiRequest::GetServiceWebsocketRegisterFunctionName() const
{
    return m_serviceWebsocketRegisterFunctionName;
}

void CreateApiRequest::SetServiceWebsocketRegisterFunctionName(const string& _serviceWebsocketRegisterFunctionName)
{
    m_serviceWebsocketRegisterFunctionName = _serviceWebsocketRegisterFunctionName;
    m_serviceWebsocketRegisterFunctionNameHasBeenSet = true;
}

bool CreateApiRequest::ServiceWebsocketRegisterFunctionNameHasBeenSet() const
{
    return m_serviceWebsocketRegisterFunctionNameHasBeenSet;
}

string CreateApiRequest::GetServiceWebsocketCleanupFunctionName() const
{
    return m_serviceWebsocketCleanupFunctionName;
}

void CreateApiRequest::SetServiceWebsocketCleanupFunctionName(const string& _serviceWebsocketCleanupFunctionName)
{
    m_serviceWebsocketCleanupFunctionName = _serviceWebsocketCleanupFunctionName;
    m_serviceWebsocketCleanupFunctionNameHasBeenSet = true;
}

bool CreateApiRequest::ServiceWebsocketCleanupFunctionNameHasBeenSet() const
{
    return m_serviceWebsocketCleanupFunctionNameHasBeenSet;
}

string CreateApiRequest::GetServiceWebsocketTransportFunctionName() const
{
    return m_serviceWebsocketTransportFunctionName;
}

void CreateApiRequest::SetServiceWebsocketTransportFunctionName(const string& _serviceWebsocketTransportFunctionName)
{
    m_serviceWebsocketTransportFunctionName = _serviceWebsocketTransportFunctionName;
    m_serviceWebsocketTransportFunctionNameHasBeenSet = true;
}

bool CreateApiRequest::ServiceWebsocketTransportFunctionNameHasBeenSet() const
{
    return m_serviceWebsocketTransportFunctionNameHasBeenSet;
}

string CreateApiRequest::GetServiceScfFunctionNamespace() const
{
    return m_serviceScfFunctionNamespace;
}

void CreateApiRequest::SetServiceScfFunctionNamespace(const string& _serviceScfFunctionNamespace)
{
    m_serviceScfFunctionNamespace = _serviceScfFunctionNamespace;
    m_serviceScfFunctionNamespaceHasBeenSet = true;
}

bool CreateApiRequest::ServiceScfFunctionNamespaceHasBeenSet() const
{
    return m_serviceScfFunctionNamespaceHasBeenSet;
}

string CreateApiRequest::GetServiceScfFunctionQualifier() const
{
    return m_serviceScfFunctionQualifier;
}

void CreateApiRequest::SetServiceScfFunctionQualifier(const string& _serviceScfFunctionQualifier)
{
    m_serviceScfFunctionQualifier = _serviceScfFunctionQualifier;
    m_serviceScfFunctionQualifierHasBeenSet = true;
}

bool CreateApiRequest::ServiceScfFunctionQualifierHasBeenSet() const
{
    return m_serviceScfFunctionQualifierHasBeenSet;
}

string CreateApiRequest::GetServiceWebsocketRegisterFunctionNamespace() const
{
    return m_serviceWebsocketRegisterFunctionNamespace;
}

void CreateApiRequest::SetServiceWebsocketRegisterFunctionNamespace(const string& _serviceWebsocketRegisterFunctionNamespace)
{
    m_serviceWebsocketRegisterFunctionNamespace = _serviceWebsocketRegisterFunctionNamespace;
    m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet = true;
}

bool CreateApiRequest::ServiceWebsocketRegisterFunctionNamespaceHasBeenSet() const
{
    return m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet;
}

string CreateApiRequest::GetServiceWebsocketRegisterFunctionQualifier() const
{
    return m_serviceWebsocketRegisterFunctionQualifier;
}

void CreateApiRequest::SetServiceWebsocketRegisterFunctionQualifier(const string& _serviceWebsocketRegisterFunctionQualifier)
{
    m_serviceWebsocketRegisterFunctionQualifier = _serviceWebsocketRegisterFunctionQualifier;
    m_serviceWebsocketRegisterFunctionQualifierHasBeenSet = true;
}

bool CreateApiRequest::ServiceWebsocketRegisterFunctionQualifierHasBeenSet() const
{
    return m_serviceWebsocketRegisterFunctionQualifierHasBeenSet;
}

string CreateApiRequest::GetServiceWebsocketTransportFunctionNamespace() const
{
    return m_serviceWebsocketTransportFunctionNamespace;
}

void CreateApiRequest::SetServiceWebsocketTransportFunctionNamespace(const string& _serviceWebsocketTransportFunctionNamespace)
{
    m_serviceWebsocketTransportFunctionNamespace = _serviceWebsocketTransportFunctionNamespace;
    m_serviceWebsocketTransportFunctionNamespaceHasBeenSet = true;
}

bool CreateApiRequest::ServiceWebsocketTransportFunctionNamespaceHasBeenSet() const
{
    return m_serviceWebsocketTransportFunctionNamespaceHasBeenSet;
}

string CreateApiRequest::GetServiceWebsocketTransportFunctionQualifier() const
{
    return m_serviceWebsocketTransportFunctionQualifier;
}

void CreateApiRequest::SetServiceWebsocketTransportFunctionQualifier(const string& _serviceWebsocketTransportFunctionQualifier)
{
    m_serviceWebsocketTransportFunctionQualifier = _serviceWebsocketTransportFunctionQualifier;
    m_serviceWebsocketTransportFunctionQualifierHasBeenSet = true;
}

bool CreateApiRequest::ServiceWebsocketTransportFunctionQualifierHasBeenSet() const
{
    return m_serviceWebsocketTransportFunctionQualifierHasBeenSet;
}

string CreateApiRequest::GetServiceWebsocketCleanupFunctionNamespace() const
{
    return m_serviceWebsocketCleanupFunctionNamespace;
}

void CreateApiRequest::SetServiceWebsocketCleanupFunctionNamespace(const string& _serviceWebsocketCleanupFunctionNamespace)
{
    m_serviceWebsocketCleanupFunctionNamespace = _serviceWebsocketCleanupFunctionNamespace;
    m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet = true;
}

bool CreateApiRequest::ServiceWebsocketCleanupFunctionNamespaceHasBeenSet() const
{
    return m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet;
}

string CreateApiRequest::GetServiceWebsocketCleanupFunctionQualifier() const
{
    return m_serviceWebsocketCleanupFunctionQualifier;
}

void CreateApiRequest::SetServiceWebsocketCleanupFunctionQualifier(const string& _serviceWebsocketCleanupFunctionQualifier)
{
    m_serviceWebsocketCleanupFunctionQualifier = _serviceWebsocketCleanupFunctionQualifier;
    m_serviceWebsocketCleanupFunctionQualifierHasBeenSet = true;
}

bool CreateApiRequest::ServiceWebsocketCleanupFunctionQualifierHasBeenSet() const
{
    return m_serviceWebsocketCleanupFunctionQualifierHasBeenSet;
}

bool CreateApiRequest::GetServiceScfIsIntegratedResponse() const
{
    return m_serviceScfIsIntegratedResponse;
}

void CreateApiRequest::SetServiceScfIsIntegratedResponse(const bool& _serviceScfIsIntegratedResponse)
{
    m_serviceScfIsIntegratedResponse = _serviceScfIsIntegratedResponse;
    m_serviceScfIsIntegratedResponseHasBeenSet = true;
}

bool CreateApiRequest::ServiceScfIsIntegratedResponseHasBeenSet() const
{
    return m_serviceScfIsIntegratedResponseHasBeenSet;
}

bool CreateApiRequest::GetIsDebugAfterCharge() const
{
    return m_isDebugAfterCharge;
}

void CreateApiRequest::SetIsDebugAfterCharge(const bool& _isDebugAfterCharge)
{
    m_isDebugAfterCharge = _isDebugAfterCharge;
    m_isDebugAfterChargeHasBeenSet = true;
}

bool CreateApiRequest::IsDebugAfterChargeHasBeenSet() const
{
    return m_isDebugAfterChargeHasBeenSet;
}

bool CreateApiRequest::GetIsDeleteResponseErrorCodes() const
{
    return m_isDeleteResponseErrorCodes;
}

void CreateApiRequest::SetIsDeleteResponseErrorCodes(const bool& _isDeleteResponseErrorCodes)
{
    m_isDeleteResponseErrorCodes = _isDeleteResponseErrorCodes;
    m_isDeleteResponseErrorCodesHasBeenSet = true;
}

bool CreateApiRequest::IsDeleteResponseErrorCodesHasBeenSet() const
{
    return m_isDeleteResponseErrorCodesHasBeenSet;
}

string CreateApiRequest::GetResponseType() const
{
    return m_responseType;
}

void CreateApiRequest::SetResponseType(const string& _responseType)
{
    m_responseType = _responseType;
    m_responseTypeHasBeenSet = true;
}

bool CreateApiRequest::ResponseTypeHasBeenSet() const
{
    return m_responseTypeHasBeenSet;
}

string CreateApiRequest::GetResponseSuccessExample() const
{
    return m_responseSuccessExample;
}

void CreateApiRequest::SetResponseSuccessExample(const string& _responseSuccessExample)
{
    m_responseSuccessExample = _responseSuccessExample;
    m_responseSuccessExampleHasBeenSet = true;
}

bool CreateApiRequest::ResponseSuccessExampleHasBeenSet() const
{
    return m_responseSuccessExampleHasBeenSet;
}

string CreateApiRequest::GetResponseFailExample() const
{
    return m_responseFailExample;
}

void CreateApiRequest::SetResponseFailExample(const string& _responseFailExample)
{
    m_responseFailExample = _responseFailExample;
    m_responseFailExampleHasBeenSet = true;
}

bool CreateApiRequest::ResponseFailExampleHasBeenSet() const
{
    return m_responseFailExampleHasBeenSet;
}

ServiceConfig CreateApiRequest::GetServiceConfig() const
{
    return m_serviceConfig;
}

void CreateApiRequest::SetServiceConfig(const ServiceConfig& _serviceConfig)
{
    m_serviceConfig = _serviceConfig;
    m_serviceConfigHasBeenSet = true;
}

bool CreateApiRequest::ServiceConfigHasBeenSet() const
{
    return m_serviceConfigHasBeenSet;
}

string CreateApiRequest::GetAuthRelationApiId() const
{
    return m_authRelationApiId;
}

void CreateApiRequest::SetAuthRelationApiId(const string& _authRelationApiId)
{
    m_authRelationApiId = _authRelationApiId;
    m_authRelationApiIdHasBeenSet = true;
}

bool CreateApiRequest::AuthRelationApiIdHasBeenSet() const
{
    return m_authRelationApiIdHasBeenSet;
}

vector<ServiceParameter> CreateApiRequest::GetServiceParameters() const
{
    return m_serviceParameters;
}

void CreateApiRequest::SetServiceParameters(const vector<ServiceParameter>& _serviceParameters)
{
    m_serviceParameters = _serviceParameters;
    m_serviceParametersHasBeenSet = true;
}

bool CreateApiRequest::ServiceParametersHasBeenSet() const
{
    return m_serviceParametersHasBeenSet;
}

OauthConfig CreateApiRequest::GetOauthConfig() const
{
    return m_oauthConfig;
}

void CreateApiRequest::SetOauthConfig(const OauthConfig& _oauthConfig)
{
    m_oauthConfig = _oauthConfig;
    m_oauthConfigHasBeenSet = true;
}

bool CreateApiRequest::OauthConfigHasBeenSet() const
{
    return m_oauthConfigHasBeenSet;
}

vector<ResponseErrorCodeReq> CreateApiRequest::GetResponseErrorCodes() const
{
    return m_responseErrorCodes;
}

void CreateApiRequest::SetResponseErrorCodes(const vector<ResponseErrorCodeReq>& _responseErrorCodes)
{
    m_responseErrorCodes = _responseErrorCodes;
    m_responseErrorCodesHasBeenSet = true;
}

bool CreateApiRequest::ResponseErrorCodesHasBeenSet() const
{
    return m_responseErrorCodesHasBeenSet;
}

string CreateApiRequest::GetTargetNamespaceId() const
{
    return m_targetNamespaceId;
}

void CreateApiRequest::SetTargetNamespaceId(const string& _targetNamespaceId)
{
    m_targetNamespaceId = _targetNamespaceId;
    m_targetNamespaceIdHasBeenSet = true;
}

bool CreateApiRequest::TargetNamespaceIdHasBeenSet() const
{
    return m_targetNamespaceIdHasBeenSet;
}

string CreateApiRequest::GetUserType() const
{
    return m_userType;
}

void CreateApiRequest::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool CreateApiRequest::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}


