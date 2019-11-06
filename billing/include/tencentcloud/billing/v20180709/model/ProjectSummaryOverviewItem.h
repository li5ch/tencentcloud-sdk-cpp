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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_PROJECTSUMMARYOVERVIEWITEM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_PROJECTSUMMARYOVERVIEWITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 按项目汇总消费详情
                */
                class ProjectSummaryOverviewItem : public AbstractModel
                {
                public:
                    ProjectSummaryOverviewItem();
                    ~ProjectSummaryOverviewItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param ProjectName 项目名称
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取实际花费
                     * @return RealTotalCost 实际花费
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置实际花费
                     * @param RealTotalCost 实际花费
                     */
                    void SetRealTotalCost(const std::string& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取费用所占百分比，两位小数
                     * @return RealTotalCostRatio 费用所占百分比，两位小数
                     */
                    std::string GetRealTotalCostRatio() const;

                    /**
                     * 设置费用所占百分比，两位小数
                     * @param RealTotalCostRatio 费用所占百分比，两位小数
                     */
                    void SetRealTotalCostRatio(const std::string& _realTotalCostRatio);

                    /**
                     * 判断参数 RealTotalCostRatio 是否已赋值
                     * @return RealTotalCostRatio 是否已赋值
                     */
                    bool RealTotalCostRatioHasBeenSet() const;

                    /**
                     * 获取现金金额
                     * @return CashPayAmount 现金金额
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置现金金额
                     * @param CashPayAmount 现金金额
                     */
                    void SetCashPayAmount(const std::string& _cashPayAmount);

                    /**
                     * 判断参数 CashPayAmount 是否已赋值
                     * @return CashPayAmount 是否已赋值
                     */
                    bool CashPayAmountHasBeenSet() const;

                    /**
                     * 获取赠送金金额
                     * @return IncentivePayAmount 赠送金金额
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置赠送金金额
                     * @param IncentivePayAmount 赠送金金额
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取代金券金额
                     * @return VoucherPayAmount 代金券金额
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置代金券金额
                     * @param VoucherPayAmount 代金券金额
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取账单月份，格式2019-08
                     * @return BillMonth 账单月份，格式2019-08
                     */
                    std::string GetBillMonth() const;

                    /**
                     * 设置账单月份，格式2019-08
                     * @param BillMonth 账单月份，格式2019-08
                     */
                    void SetBillMonth(const std::string& _billMonth);

                    /**
                     * 判断参数 BillMonth 是否已赋值
                     * @return BillMonth 是否已赋值
                     */
                    bool BillMonthHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 实际花费
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 费用所占百分比，两位小数
                     */
                    std::string m_realTotalCostRatio;
                    bool m_realTotalCostRatioHasBeenSet;

                    /**
                     * 现金金额
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * 赠送金金额
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * 代金券金额
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * 账单月份，格式2019-08
                     */
                    std::string m_billMonth;
                    bool m_billMonthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_PROJECTSUMMARYOVERVIEWITEM_H_
