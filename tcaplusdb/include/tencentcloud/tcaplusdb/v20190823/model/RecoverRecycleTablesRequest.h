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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_RECOVERRECYCLETABLESREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_RECOVERRECYCLETABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * RecoverRecycleTables请求参数结构体
                */
                class RecoverRecycleTablesRequest : public AbstractModel
                {
                public:
                    RecoverRecycleTablesRequest();
                    ~RecoverRecycleTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表所在应用实例ID
                     * @return ApplicationId 表所在应用实例ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置表所在应用实例ID
                     * @param ApplicationId 表所在应用实例ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取待恢复表信息
                     * @return SelectedTables 待恢复表信息
                     */
                    std::vector<SelectedTableInfo> GetSelectedTables() const;

                    /**
                     * 设置待恢复表信息
                     * @param SelectedTables 待恢复表信息
                     */
                    void SetSelectedTables(const std::vector<SelectedTableInfo>& _selectedTables);

                    /**
                     * 判断参数 SelectedTables 是否已赋值
                     * @return SelectedTables 是否已赋值
                     */
                    bool SelectedTablesHasBeenSet() const;

                private:

                    /**
                     * 表所在应用实例ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 待恢复表信息
                     */
                    std::vector<SelectedTableInfo> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_RECOVERRECYCLETABLESREQUEST_H_
