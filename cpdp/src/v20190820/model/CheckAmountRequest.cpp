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

#include <tencentcloud/cpdp/v20190820/model/CheckAmountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

CheckAmountRequest::CheckAmountRequest() :
    m_mrchCodeHasBeenSet(false),
    m_tranNetMemberCodeHasBeenSet(false),
    m_takeCashAcctNoHasBeenSet(false),
    m_authAmtHasBeenSet(false),
    m_ccyHasBeenSet(false),
    m_reservedMsgHasBeenSet(false)
{
}

string CheckAmountRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mrchCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MrchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mrchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_tranNetMemberCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TranNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tranNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_takeCashAcctNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TakeCashAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_takeCashAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_authAmtHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuthAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_authAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_ccyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ccy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ccy.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMsgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReservedMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_reservedMsg.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckAmountRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void CheckAmountRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool CheckAmountRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string CheckAmountRequest::GetTranNetMemberCode() const
{
    return m_tranNetMemberCode;
}

void CheckAmountRequest::SetTranNetMemberCode(const string& _tranNetMemberCode)
{
    m_tranNetMemberCode = _tranNetMemberCode;
    m_tranNetMemberCodeHasBeenSet = true;
}

bool CheckAmountRequest::TranNetMemberCodeHasBeenSet() const
{
    return m_tranNetMemberCodeHasBeenSet;
}

string CheckAmountRequest::GetTakeCashAcctNo() const
{
    return m_takeCashAcctNo;
}

void CheckAmountRequest::SetTakeCashAcctNo(const string& _takeCashAcctNo)
{
    m_takeCashAcctNo = _takeCashAcctNo;
    m_takeCashAcctNoHasBeenSet = true;
}

bool CheckAmountRequest::TakeCashAcctNoHasBeenSet() const
{
    return m_takeCashAcctNoHasBeenSet;
}

string CheckAmountRequest::GetAuthAmt() const
{
    return m_authAmt;
}

void CheckAmountRequest::SetAuthAmt(const string& _authAmt)
{
    m_authAmt = _authAmt;
    m_authAmtHasBeenSet = true;
}

bool CheckAmountRequest::AuthAmtHasBeenSet() const
{
    return m_authAmtHasBeenSet;
}

string CheckAmountRequest::GetCcy() const
{
    return m_ccy;
}

void CheckAmountRequest::SetCcy(const string& _ccy)
{
    m_ccy = _ccy;
    m_ccyHasBeenSet = true;
}

bool CheckAmountRequest::CcyHasBeenSet() const
{
    return m_ccyHasBeenSet;
}

string CheckAmountRequest::GetReservedMsg() const
{
    return m_reservedMsg;
}

void CheckAmountRequest::SetReservedMsg(const string& _reservedMsg)
{
    m_reservedMsg = _reservedMsg;
    m_reservedMsgHasBeenSet = true;
}

bool CheckAmountRequest::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}


