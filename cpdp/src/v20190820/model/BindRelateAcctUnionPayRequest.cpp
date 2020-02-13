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

#include <tencentcloud/cpdp/v20190820/model/BindRelateAcctUnionPayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

BindRelateAcctUnionPayRequest::BindRelateAcctUnionPayRequest() :
    m_tranNetMemberCodeHasBeenSet(false),
    m_memberNameHasBeenSet(false),
    m_memberGlobalTypeHasBeenSet(false),
    m_memberGlobalIdHasBeenSet(false),
    m_memberAcctNoHasBeenSet(false),
    m_bankTypeHasBeenSet(false),
    m_acctOpenBranchNameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_mrchCodeHasBeenSet(false),
    m_cnapsBranchIdHasBeenSet(false),
    m_eiconBankBranchIdHasBeenSet(false),
    m_reservedMsgHasBeenSet(false)
{
}

string BindRelateAcctUnionPayRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tranNetMemberCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TranNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tranNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_memberNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemberName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_memberName.c_str(), allocator).Move(), allocator);
    }

    if (m_memberGlobalTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemberGlobalType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_memberGlobalType.c_str(), allocator).Move(), allocator);
    }

    if (m_memberGlobalIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemberGlobalId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_memberGlobalId.c_str(), allocator).Move(), allocator);
    }

    if (m_memberAcctNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemberAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_memberAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_bankTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BankType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_bankType.c_str(), allocator).Move(), allocator);
    }

    if (m_acctOpenBranchNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AcctOpenBranchName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_acctOpenBranchName.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_mrchCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MrchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mrchCode.c_str(), allocator).Move(), allocator);
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


string BindRelateAcctUnionPayRequest::GetTranNetMemberCode() const
{
    return m_tranNetMemberCode;
}

void BindRelateAcctUnionPayRequest::SetTranNetMemberCode(const string& _tranNetMemberCode)
{
    m_tranNetMemberCode = _tranNetMemberCode;
    m_tranNetMemberCodeHasBeenSet = true;
}

bool BindRelateAcctUnionPayRequest::TranNetMemberCodeHasBeenSet() const
{
    return m_tranNetMemberCodeHasBeenSet;
}

string BindRelateAcctUnionPayRequest::GetMemberName() const
{
    return m_memberName;
}

void BindRelateAcctUnionPayRequest::SetMemberName(const string& _memberName)
{
    m_memberName = _memberName;
    m_memberNameHasBeenSet = true;
}

bool BindRelateAcctUnionPayRequest::MemberNameHasBeenSet() const
{
    return m_memberNameHasBeenSet;
}

string BindRelateAcctUnionPayRequest::GetMemberGlobalType() const
{
    return m_memberGlobalType;
}

void BindRelateAcctUnionPayRequest::SetMemberGlobalType(const string& _memberGlobalType)
{
    m_memberGlobalType = _memberGlobalType;
    m_memberGlobalTypeHasBeenSet = true;
}

bool BindRelateAcctUnionPayRequest::MemberGlobalTypeHasBeenSet() const
{
    return m_memberGlobalTypeHasBeenSet;
}

string BindRelateAcctUnionPayRequest::GetMemberGlobalId() const
{
    return m_memberGlobalId;
}

void BindRelateAcctUnionPayRequest::SetMemberGlobalId(const string& _memberGlobalId)
{
    m_memberGlobalId = _memberGlobalId;
    m_memberGlobalIdHasBeenSet = true;
}

bool BindRelateAcctUnionPayRequest::MemberGlobalIdHasBeenSet() const
{
    return m_memberGlobalIdHasBeenSet;
}

string BindRelateAcctUnionPayRequest::GetMemberAcctNo() const
{
    return m_memberAcctNo;
}

void BindRelateAcctUnionPayRequest::SetMemberAcctNo(const string& _memberAcctNo)
{
    m_memberAcctNo = _memberAcctNo;
    m_memberAcctNoHasBeenSet = true;
}

bool BindRelateAcctUnionPayRequest::MemberAcctNoHasBeenSet() const
{
    return m_memberAcctNoHasBeenSet;
}

string BindRelateAcctUnionPayRequest::GetBankType() const
{
    return m_bankType;
}

void BindRelateAcctUnionPayRequest::SetBankType(const string& _bankType)
{
    m_bankType = _bankType;
    m_bankTypeHasBeenSet = true;
}

bool BindRelateAcctUnionPayRequest::BankTypeHasBeenSet() const
{
    return m_bankTypeHasBeenSet;
}

string BindRelateAcctUnionPayRequest::GetAcctOpenBranchName() const
{
    return m_acctOpenBranchName;
}

void BindRelateAcctUnionPayRequest::SetAcctOpenBranchName(const string& _acctOpenBranchName)
{
    m_acctOpenBranchName = _acctOpenBranchName;
    m_acctOpenBranchNameHasBeenSet = true;
}

bool BindRelateAcctUnionPayRequest::AcctOpenBranchNameHasBeenSet() const
{
    return m_acctOpenBranchNameHasBeenSet;
}

string BindRelateAcctUnionPayRequest::GetMobile() const
{
    return m_mobile;
}

void BindRelateAcctUnionPayRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool BindRelateAcctUnionPayRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string BindRelateAcctUnionPayRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void BindRelateAcctUnionPayRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool BindRelateAcctUnionPayRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string BindRelateAcctUnionPayRequest::GetCnapsBranchId() const
{
    return m_cnapsBranchId;
}

void BindRelateAcctUnionPayRequest::SetCnapsBranchId(const string& _cnapsBranchId)
{
    m_cnapsBranchId = _cnapsBranchId;
    m_cnapsBranchIdHasBeenSet = true;
}

bool BindRelateAcctUnionPayRequest::CnapsBranchIdHasBeenSet() const
{
    return m_cnapsBranchIdHasBeenSet;
}

string BindRelateAcctUnionPayRequest::GetEiconBankBranchId() const
{
    return m_eiconBankBranchId;
}

void BindRelateAcctUnionPayRequest::SetEiconBankBranchId(const string& _eiconBankBranchId)
{
    m_eiconBankBranchId = _eiconBankBranchId;
    m_eiconBankBranchIdHasBeenSet = true;
}

bool BindRelateAcctUnionPayRequest::EiconBankBranchIdHasBeenSet() const
{
    return m_eiconBankBranchIdHasBeenSet;
}

string BindRelateAcctUnionPayRequest::GetReservedMsg() const
{
    return m_reservedMsg;
}

void BindRelateAcctUnionPayRequest::SetReservedMsg(const string& _reservedMsg)
{
    m_reservedMsg = _reservedMsg;
    m_reservedMsgHasBeenSet = true;
}

bool BindRelateAcctUnionPayRequest::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}


