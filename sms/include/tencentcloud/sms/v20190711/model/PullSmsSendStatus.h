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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSSENDSTATUS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSSENDSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * 短信的下发状态详细信息
                */
                class PullSmsSendStatus : public AbstractModel
                {
                public:
                    PullSmsSendStatus();
                    ~PullSmsSendStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户实际接收到短信的时间
                     * @return UserReceiveTime 用户实际接收到短信的时间
                     */
                    std::string GetUserReceiveTime() const;

                    /**
                     * 设置用户实际接收到短信的时间
                     * @param UserReceiveTime 用户实际接收到短信的时间
                     */
                    void SetUserReceiveTime(const std::string& _userReceiveTime);

                    /**
                     * 判断参数 UserReceiveTime 是否已赋值
                     * @return UserReceiveTime 是否已赋值
                     */
                    bool UserReceiveTimeHasBeenSet() const;

                    /**
                     * 获取国家（或地区）码
                     * @return NationCode 国家（或地区）码
                     */
                    std::string GetNationCode() const;

                    /**
                     * 设置国家（或地区）码
                     * @param NationCode 国家（或地区）码
                     */
                    void SetNationCode(const std::string& _nationCode);

                    /**
                     * 判断参数 NationCode 是否已赋值
                     * @return NationCode 是否已赋值
                     */
                    bool NationCodeHasBeenSet() const;

                    /**
                     * 获取手机号码（ e.164 标准）
                     * @return PurePhoneNumber 手机号码（ e.164 标准）
                     */
                    std::string GetPurePhoneNumber() const;

                    /**
                     * 设置手机号码（ e.164 标准）
                     * @param PurePhoneNumber 手机号码（ e.164 标准）
                     */
                    void SetPurePhoneNumber(const std::string& _purePhoneNumber);

                    /**
                     * 判断参数 PurePhoneNumber 是否已赋值
                     * @return PurePhoneNumber 是否已赋值
                     */
                    bool PurePhoneNumberHasBeenSet() const;

                    /**
                     * 获取手机号码
                     * @return PhoneNumber 手机号码
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号码
                     * @param PhoneNumber 手机号码
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取本次发送标识 ID
                     * @return SerialNo 本次发送标识 ID
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置本次发送标识 ID
                     * @param SerialNo 本次发送标识 ID
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     */
                    bool SerialNoHasBeenSet() const;

                    /**
                     * 获取实际是否收到短信接收状态，SUCCESS（成功）、FAIL（失败）
                     * @return ReportStatus 实际是否收到短信接收状态，SUCCESS（成功）、FAIL（失败）
                     */
                    std::string GetReportStatus() const;

                    /**
                     * 设置实际是否收到短信接收状态，SUCCESS（成功）、FAIL（失败）
                     * @param ReportStatus 实际是否收到短信接收状态，SUCCESS（成功）、FAIL（失败）
                     */
                    void SetReportStatus(const std::string& _reportStatus);

                    /**
                     * 判断参数 ReportStatus 是否已赋值
                     * @return ReportStatus 是否已赋值
                     */
                    bool ReportStatusHasBeenSet() const;

                    /**
                     * 获取用户接收短信状态描述
                     * @return Description 用户接收短信状态描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置用户接收短信状态描述
                     * @param Description 用户接收短信状态描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 用户实际接收到短信的时间
                     */
                    std::string m_userReceiveTime;
                    bool m_userReceiveTimeHasBeenSet;

                    /**
                     * 国家（或地区）码
                     */
                    std::string m_nationCode;
                    bool m_nationCodeHasBeenSet;

                    /**
                     * 手机号码（ e.164 标准）
                     */
                    std::string m_purePhoneNumber;
                    bool m_purePhoneNumberHasBeenSet;

                    /**
                     * 手机号码
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 本次发送标识 ID
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * 实际是否收到短信接收状态，SUCCESS（成功）、FAIL（失败）
                     */
                    std::string m_reportStatus;
                    bool m_reportStatusHasBeenSet;

                    /**
                     * 用户接收短信状态描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSSENDSTATUS_H_
