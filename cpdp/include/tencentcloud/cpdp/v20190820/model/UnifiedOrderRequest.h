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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_UNIFIEDORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_UNIFIEDORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/UnifiedOrderInSubOrderList.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * UnifiedOrder请求参数结构体
                */
                class UnifiedOrderRequest : public AbstractModel
                {
                public:
                    UnifiedOrderRequest();
                    ~UnifiedOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ISO 货币代码，CNY
                     * @return CurrencyType ISO 货币代码，CNY
                     */
                    std::string GetCurrencyType() const;

                    /**
                     * 设置ISO 货币代码，CNY
                     * @param CurrencyType ISO 货币代码，CNY
                     */
                    void SetCurrencyType(const std::string& _currencyType);

                    /**
                     * 判断参数 CurrencyType 是否已赋值
                     * @return CurrencyType 是否已赋值
                     */
                    bool CurrencyTypeHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的支付主MidasAppId
                     * @return MidasAppId 聚鑫分配的支付主MidasAppId
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫分配的支付主MidasAppId
                     * @param MidasAppId 聚鑫分配的支付主MidasAppId
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取支付订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * @return OutTradeNo 支付订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     */
                    std::string GetOutTradeNo() const;

                    /**
                     * 设置支付订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * @param OutTradeNo 支付订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     */
                    void SetOutTradeNo(const std::string& _outTradeNo);

                    /**
                     * 判断参数 OutTradeNo 是否已赋值
                     * @return OutTradeNo 是否已赋值
                     */
                    bool OutTradeNoHasBeenSet() const;

                    /**
                     * 获取商品详情，需要URL编码
                     * @return ProductDetail 商品详情，需要URL编码
                     */
                    std::string GetProductDetail() const;

                    /**
                     * 设置商品详情，需要URL编码
                     * @param ProductDetail 商品详情，需要URL编码
                     */
                    void SetProductDetail(const std::string& _productDetail);

                    /**
                     * 判断参数 ProductDetail 是否已赋值
                     * @return ProductDetail 是否已赋值
                     */
                    bool ProductDetailHasBeenSet() const;

                    /**
                     * 获取商品ID，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * @return ProductId 商品ID，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置商品ID，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * @param ProductId 商品ID，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取商品名称，需要URL编码
                     * @return ProductName 商品名称，需要URL编码
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置商品名称，需要URL编码
                     * @param ProductName 商品名称，需要URL编码
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取支付金额，单位： 分
                     * @return TotalAmt 支付金额，单位： 分
                     */
                    int64_t GetTotalAmt() const;

                    /**
                     * 设置支付金额，单位： 分
                     * @param TotalAmt 支付金额，单位： 分
                     */
                    void SetTotalAmt(const int64_t& _totalAmt);

                    /**
                     * 判断参数 TotalAmt 是否已赋值
                     * @return TotalAmt 是否已赋值
                     */
                    bool TotalAmtHasBeenSet() const;

                    /**
                     * 获取用户ID，长度不小于5位，仅支持字母和数字的组合
                     * @return UserId 用户ID，长度不小于5位，仅支持字母和数字的组合
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID，长度不小于5位，仅支持字母和数字的组合
                     * @param UserId 用户ID，长度不小于5位，仅支持字母和数字的组合
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取银行真实渠道.如:bank_pingan
                     * @return RealChannel 银行真实渠道.如:bank_pingan
                     */
                    std::string GetRealChannel() const;

                    /**
                     * 设置银行真实渠道.如:bank_pingan
                     * @param RealChannel 银行真实渠道.如:bank_pingan
                     */
                    void SetRealChannel(const std::string& _realChannel);

                    /**
                     * 判断参数 RealChannel 是否已赋值
                     * @return RealChannel 是否已赋值
                     */
                    bool RealChannelHasBeenSet() const;

                    /**
                     * 获取原始金额
                     * @return OriginalAmt 原始金额
                     */
                    int64_t GetOriginalAmt() const;

                    /**
                     * 设置原始金额
                     * @param OriginalAmt 原始金额
                     */
                    void SetOriginalAmt(const int64_t& _originalAmt);

                    /**
                     * 判断参数 OriginalAmt 是否已赋值
                     * @return OriginalAmt 是否已赋值
                     */
                    bool OriginalAmtHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的安全ID
                     * @return MidasSecretId 聚鑫分配的安全ID
                     */
                    std::string GetMidasSecretId() const;

                    /**
                     * 设置聚鑫分配的安全ID
                     * @param MidasSecretId 聚鑫分配的安全ID
                     */
                    void SetMidasSecretId(const std::string& _midasSecretId);

                    /**
                     * 判断参数 MidasSecretId 是否已赋值
                     * @return MidasSecretId 是否已赋值
                     */
                    bool MidasSecretIdHasBeenSet() const;

                    /**
                     * 获取按照聚鑫安全密钥计算的签名
                     * @return MidasSignature 按照聚鑫安全密钥计算的签名
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置按照聚鑫安全密钥计算的签名
                     * @param MidasSignature 按照聚鑫安全密钥计算的签名
                     */
                    void SetMidasSignature(const std::string& _midasSignature);

                    /**
                     * 判断参数 MidasSignature 是否已赋值
                     * @return MidasSignature 是否已赋值
                     */
                    bool MidasSignatureHasBeenSet() const;

                    /**
                     * 获取Web端回调地址
                     * @return CallbackUrl Web端回调地址
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置Web端回调地址
                     * @param CallbackUrl Web端回调地址
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取指定支付渠道：  wechat：微信支付  qqwallet：QQ钱包 
 bank：网银支付  只有一个渠道时需要指定
                     * @return Channel 指定支付渠道：  wechat：微信支付  qqwallet：QQ钱包 
 bank：网银支付  只有一个渠道时需要指定
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置指定支付渠道：  wechat：微信支付  qqwallet：QQ钱包 
 bank：网银支付  只有一个渠道时需要指定
                     * @param Channel 指定支付渠道：  wechat：微信支付  qqwallet：QQ钱包 
 bank：网银支付  只有一个渠道时需要指定
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取透传字段，支付成功回调透传给应用，用于业务透传自定义内容
                     * @return Metadata 透传字段，支付成功回调透传给应用，用于业务透传自定义内容
                     */
                    std::string GetMetadata() const;

                    /**
                     * 设置透传字段，支付成功回调透传给应用，用于业务透传自定义内容
                     * @param Metadata 透传字段，支付成功回调透传给应用，用于业务透传自定义内容
                     */
                    void SetMetadata(const std::string& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取购买数量，不传默认为1
                     * @return Quantity 购买数量，不传默认为1
                     */
                    int64_t GetQuantity() const;

                    /**
                     * 设置购买数量，不传默认为1
                     * @param Quantity 购买数量，不传默认为1
                     */
                    void SetQuantity(const int64_t& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取聚鑫计费SubAppId，代表子商户
                     * @return SubAppId 聚鑫计费SubAppId，代表子商户
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置聚鑫计费SubAppId，代表子商户
                     * @param SubAppId 聚鑫计费SubAppId，代表子商户
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取子订单信息列表，格式：子订单号、子应用ID、金额。 压缩后最长不可超过65535字节(去除空格，换行，制表符等无意义字符)
注：接入银行或其他支付渠道服务商模式下，必传
                     * @return SubOrderList 子订单信息列表，格式：子订单号、子应用ID、金额。 压缩后最长不可超过65535字节(去除空格，换行，制表符等无意义字符)
注：接入银行或其他支付渠道服务商模式下，必传
                     */
                    std::vector<UnifiedOrderInSubOrderList> GetSubOrderList() const;

                    /**
                     * 设置子订单信息列表，格式：子订单号、子应用ID、金额。 压缩后最长不可超过65535字节(去除空格，换行，制表符等无意义字符)
注：接入银行或其他支付渠道服务商模式下，必传
                     * @param SubOrderList 子订单信息列表，格式：子订单号、子应用ID、金额。 压缩后最长不可超过65535字节(去除空格，换行，制表符等无意义字符)
注：接入银行或其他支付渠道服务商模式下，必传
                     */
                    void SetSubOrderList(const std::vector<UnifiedOrderInSubOrderList>& _subOrderList);

                    /**
                     * 判断参数 SubOrderList 是否已赋值
                     * @return SubOrderList 是否已赋值
                     */
                    bool SubOrderListHasBeenSet() const;

                    /**
                     * 获取结算应收金额，单位：分
                     * @return TotalMchIncome 结算应收金额，单位：分
                     */
                    int64_t GetTotalMchIncome() const;

                    /**
                     * 设置结算应收金额，单位：分
                     * @param TotalMchIncome 结算应收金额，单位：分
                     */
                    void SetTotalMchIncome(const int64_t& _totalMchIncome);

                    /**
                     * 判断参数 TotalMchIncome 是否已赋值
                     * @return TotalMchIncome 是否已赋值
                     */
                    bool TotalMchIncomeHasBeenSet() const;

                    /**
                     * 获取平台应收金额，单位：分
                     * @return TotalPlatformIncome 平台应收金额，单位：分
                     */
                    int64_t GetTotalPlatformIncome() const;

                    /**
                     * 设置平台应收金额，单位：分
                     * @param TotalPlatformIncome 平台应收金额，单位：分
                     */
                    void SetTotalPlatformIncome(const int64_t& _totalPlatformIncome);

                    /**
                     * 判断参数 TotalPlatformIncome 是否已赋值
                     * @return TotalPlatformIncome 是否已赋值
                     */
                    bool TotalPlatformIncomeHasBeenSet() const;

                    /**
                     * 获取微信公众号/小程序支付时为必选，需要传微信下的openid
                     * @return WxOpenId 微信公众号/小程序支付时为必选，需要传微信下的openid
                     */
                    std::string GetWxOpenId() const;

                    /**
                     * 设置微信公众号/小程序支付时为必选，需要传微信下的openid
                     * @param WxOpenId 微信公众号/小程序支付时为必选，需要传微信下的openid
                     */
                    void SetWxOpenId(const std::string& _wxOpenId);

                    /**
                     * 判断参数 WxOpenId 是否已赋值
                     * @return WxOpenId 是否已赋值
                     */
                    bool WxOpenIdHasBeenSet() const;

                    /**
                     * 获取在服务商模式下，微信公众号/小程序支付时wx_sub_openid和wx_openid二选一
                     * @return WxSubOpenId 在服务商模式下，微信公众号/小程序支付时wx_sub_openid和wx_openid二选一
                     */
                    std::string GetWxSubOpenId() const;

                    /**
                     * 设置在服务商模式下，微信公众号/小程序支付时wx_sub_openid和wx_openid二选一
                     * @param WxSubOpenId 在服务商模式下，微信公众号/小程序支付时wx_sub_openid和wx_openid二选一
                     */
                    void SetWxSubOpenId(const std::string& _wxSubOpenId);

                    /**
                     * 判断参数 WxSubOpenId 是否已赋值
                     * @return WxSubOpenId 是否已赋值
                     */
                    bool WxSubOpenIdHasBeenSet() const;

                    /**
                     * 获取环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @return MidasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @param MidasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                private:

                    /**
                     * ISO 货币代码，CNY
                     */
                    std::string m_currencyType;
                    bool m_currencyTypeHasBeenSet;

                    /**
                     * 聚鑫分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 支付订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     */
                    std::string m_outTradeNo;
                    bool m_outTradeNoHasBeenSet;

                    /**
                     * 商品详情，需要URL编码
                     */
                    std::string m_productDetail;
                    bool m_productDetailHasBeenSet;

                    /**
                     * 商品ID，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 商品名称，需要URL编码
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 支付金额，单位： 分
                     */
                    int64_t m_totalAmt;
                    bool m_totalAmtHasBeenSet;

                    /**
                     * 用户ID，长度不小于5位，仅支持字母和数字的组合
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 银行真实渠道.如:bank_pingan
                     */
                    std::string m_realChannel;
                    bool m_realChannelHasBeenSet;

                    /**
                     * 原始金额
                     */
                    int64_t m_originalAmt;
                    bool m_originalAmtHasBeenSet;

                    /**
                     * 聚鑫分配的安全ID
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * 按照聚鑫安全密钥计算的签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * Web端回调地址
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 指定支付渠道：  wechat：微信支付  qqwallet：QQ钱包 
 bank：网银支付  只有一个渠道时需要指定
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 透传字段，支付成功回调透传给应用，用于业务透传自定义内容
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 购买数量，不传默认为1
                     */
                    int64_t m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * 聚鑫计费SubAppId，代表子商户
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 子订单信息列表，格式：子订单号、子应用ID、金额。 压缩后最长不可超过65535字节(去除空格，换行，制表符等无意义字符)
注：接入银行或其他支付渠道服务商模式下，必传
                     */
                    std::vector<UnifiedOrderInSubOrderList> m_subOrderList;
                    bool m_subOrderListHasBeenSet;

                    /**
                     * 结算应收金额，单位：分
                     */
                    int64_t m_totalMchIncome;
                    bool m_totalMchIncomeHasBeenSet;

                    /**
                     * 平台应收金额，单位：分
                     */
                    int64_t m_totalPlatformIncome;
                    bool m_totalPlatformIncomeHasBeenSet;

                    /**
                     * 微信公众号/小程序支付时为必选，需要传微信下的openid
                     */
                    std::string m_wxOpenId;
                    bool m_wxOpenIdHasBeenSet;

                    /**
                     * 在服务商模式下，微信公众号/小程序支付时wx_sub_openid和wx_openid二选一
                     */
                    std::string m_wxSubOpenId;
                    bool m_wxSubOpenIdHasBeenSet;

                    /**
                     * 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_UNIFIEDORDERREQUEST_H_
