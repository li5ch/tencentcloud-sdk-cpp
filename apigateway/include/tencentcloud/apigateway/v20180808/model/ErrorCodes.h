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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ERRORCODES_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ERRORCODES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 用户自定义错误码
                */
                class ErrorCodes : public AbstractModel
                {
                public:
                    ErrorCodes();
                    ~ErrorCodes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义响应配置错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 自定义响应配置错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置自定义响应配置错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Code 自定义响应配置错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取自定义响应配置错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msg 自定义响应配置错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置自定义响应配置错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Msg 自定义响应配置错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取自定义响应配置错误码备注。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 自定义响应配置错误码备注。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置自定义响应配置错误码备注。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Desc 自定义响应配置错误码备注。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取自定义错误码转换。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConvertedCode 自定义错误码转换。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetConvertedCode() const;

                    /**
                     * 设置自定义错误码转换。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConvertedCode 自定义错误码转换。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConvertedCode(const int64_t& _convertedCode);

                    /**
                     * 判断参数 ConvertedCode 是否已赋值
                     * @return ConvertedCode 是否已赋值
                     */
                    bool ConvertedCodeHasBeenSet() const;

                    /**
                     * 获取是否需要开启错误码转换。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeedConvert 是否需要开启错误码转换。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetNeedConvert() const;

                    /**
                     * 设置是否需要开启错误码转换。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NeedConvert 是否需要开启错误码转换。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNeedConvert(const bool& _needConvert);

                    /**
                     * 判断参数 NeedConvert 是否已赋值
                     * @return NeedConvert 是否已赋值
                     */
                    bool NeedConvertHasBeenSet() const;

                private:

                    /**
                     * 自定义响应配置错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 自定义响应配置错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 自定义响应配置错误码备注。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 自定义错误码转换。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_convertedCode;
                    bool m_convertedCodeHasBeenSet;

                    /**
                     * 是否需要开启错误码转换。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_needConvert;
                    bool m_needConvertHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ERRORCODES_H_
