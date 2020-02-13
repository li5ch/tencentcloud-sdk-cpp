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

#include <tencentcloud/cpdp/v20190820/model/ModifyMntMbrBindRelateAcctBankCodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

ModifyMntMbrBindRelateAcctBankCodeRequest::ModifyMntMbrBindRelateAcctBankCodeRequest() :
    m_mrchCodeHasBeenSet(false),
    m_subAcctNoHasBeenSet(false),
    m_memberBindAcctNoHasBeenSet(false),
    m_acctOpenBranchNameHasBeenSet(false),
    m_cnapsBranchIdHasBeenSet(false),
    m_eiconBankBranchIdHasBeenSet(false),
    m_reservedMsgHasBeenSet(false)
{
}

string ModifyMntMbrBindRelateAcctBankCodeRequest::ToJsonString() const
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

    if (m_subAcctNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_memberBindAcctNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemberBindAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_memberBindAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_acctOpenBranchNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AcctOpenBranchName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_acctOpenBranchName.c_str(), allocator).Move(), allocator);
    }

    if (m_cnapsBranchIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CnapsBranchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cnapsBranchId.c_str(), allocator).Move(), allocator);
    }

    if (m_eiconBankBranchIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EiconBankBranchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_eiconBankBranchId.c_str(), allocator).Move(), allocator);
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


string ModifyMntMbrBindRelateAcctBankCodeRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void ModifyMntMbrBindRelateAcctBankCodeRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool ModifyMntMbrBindRelateAcctBankCodeRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string ModifyMntMbrBindRelateAcctBankCodeRequest::GetSubAcctNo() const
{
    return m_subAcctNo;
}

void ModifyMntMbrBindRelateAcctBankCodeRequest::SetSubAcctNo(const string& _subAcctNo)
{
    m_subAcctNo = _subAcctNo;
    m_subAcctNoHasBeenSet = true;
}

bool ModifyMntMbrBindRelateAcctBankCodeRequest::SubAcctNoHasBeenSet() const
{
    return m_subAcctNoHasBeenSet;
}

string ModifyMntMbrBindRelateAcctBankCodeRequest::GetMemberBindAcctNo() const
{
    return m_memberBindAcctNo;
}

void ModifyMntMbrBindRelateAcctBankCodeRequest::SetMemberBindAcctNo(const string& _memberBindAcctNo)
{
    m_memberBindAcctNo = _memberBindAcctNo;
    m_memberBindAcctNoHasBeenSet = true;
}

bool ModifyMntMbrBindRelateAcctBankCodeRequest::MemberBindAcctNoHasBeenSet() const
{
    return m_memberBindAcctNoHasBeenSet;
}

string ModifyMntMbrBindRelateAcctBankCodeRequest::GetAcctOpenBranchName() const
{
    return m_acctOpenBranchName;
}

void ModifyMntMbrBindRelateAcctBankCodeRequest::SetAcctOpenBranchName(const string& _acctOpenBranchName)
{
    m_acctOpenBranchName = _acctOpenBranchName;
    m_acctOpenBranchNameHasBeenSet = true;
}

bool ModifyMntMbrBindRelateAcctBankCodeRequest::AcctOpenBranchNameHasBeenSet() const
{
    return m_acctOpenBranchNameHasBeenSet;
}

string ModifyMntMbrBindRelateAcctBankCodeRequest::GetCnapsBranchId() const
{
    return m_cnapsBranchId;
}

void ModifyMntMbrBindRelateAcctBankCodeRequest::SetCnapsBranchId(const string& _cnapsBranchId)
{
    m_cnapsBranchId = _cnapsBranchId;
    m_cnapsBranchIdHasBeenSet = true;
}

bool ModifyMntMbrBindRelateAcctBankCodeRequest::CnapsBranchIdHasBeenSet() const
{
    return m_cnapsBranchIdHasBeenSet;
}

string ModifyMntMbrBindRelateAcctBankCodeRequest::GetEiconBankBranchId() const
{
    return m_eiconBankBranchId;
}

void ModifyMntMbrBindRelateAcctBankCodeRequest::SetEiconBankBranchId(const string& _eiconBankBranchId)
{
    m_eiconBankBranchId = _eiconBankBranchId;
    m_eiconBankBranchIdHasBeenSet = true;
}

bool ModifyMntMbrBindRelateAcctBankCodeRequest::EiconBankBranchIdHasBeenSet() const
{
    return m_eiconBankBranchIdHasBeenSet;
}

string ModifyMntMbrBindRelateAcctBankCodeRequest::GetReservedMsg() const
{
    return m_reservedMsg;
}

void ModifyMntMbrBindRelateAcctBankCodeRequest::SetReservedMsg(const string& _reservedMsg)
{
    m_reservedMsg = _reservedMsg;
    m_reservedMsgHasBeenSet = true;
}

bool ModifyMntMbrBindRelateAcctBankCodeRequest::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}


