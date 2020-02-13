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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEROLLBACKRESULT_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEROLLBACKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 表回档结果信息
                */
                class TableRollbackResult : public AbstractModel
                {
                public:
                    TableRollbackResult();
                    ~TableRollbackResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表实例ID，形如：tcaplus-3be64cbb
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableInstanceId 表实例ID，形如：tcaplus-3be64cbb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableInstanceId() const;

                    /**
                     * 设置表实例ID，形如：tcaplus-3be64cbb
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableInstanceId 表实例ID，形如：tcaplus-3be64cbb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableInstanceId(const std::string& _tableInstanceId);

                    /**
                     * 判断参数 TableInstanceId 是否已赋值
                     * @return TableInstanceId 是否已赋值
                     */
                    bool TableInstanceIdHasBeenSet() const;

                    /**
                     * 获取任务ID，对于创建单任务的接口有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID，对于创建单任务的接口有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID，对于创建单任务的接口有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskId 任务ID，对于创建单任务的接口有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableName 表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取表数据结构类型，如：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableType 表数据结构类型，如：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置表数据结构类型，如：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableType 表数据结构类型，如：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取表数据描述语言（IDL）类型，如：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableIdlType 表数据描述语言（IDL）类型，如：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableIdlType() const;

                    /**
                     * 设置表数据描述语言（IDL）类型，如：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableIdlType 表数据描述语言（IDL）类型，如：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableIdlType(const std::string& _tableIdlType);

                    /**
                     * 判断参数 TableIdlType 是否已赋值
                     * @return TableIdlType 是否已赋值
                     */
                    bool TableIdlTypeHasBeenSet() const;

                    /**
                     * 获取表所属大区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogicZoneId 表所属大区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogicZoneId() const;

                    /**
                     * 设置表所属大区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogicZoneId 表所属大区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogicZoneId(const std::string& _logicZoneId);

                    /**
                     * 判断参数 LogicZoneId 是否已赋值
                     * @return LogicZoneId 是否已赋值
                     */
                    bool LogicZoneIdHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取任务ID列表，对于创建多任务的接口有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskIds 任务ID列表，对于创建多任务的接口有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置任务ID列表，对于创建多任务的接口有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskIds 任务ID列表，对于创建多任务的接口有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取上传的key文件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileId 上传的key文件ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置上传的key文件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FileId 上传的key文件ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取校验成功Key数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccKeyNum 校验成功Key数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetSuccKeyNum() const;

                    /**
                     * 设置校验成功Key数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SuccKeyNum 校验成功Key数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSuccKeyNum(const uint64_t& _succKeyNum);

                    /**
                     * 判断参数 SuccKeyNum 是否已赋值
                     * @return SuccKeyNum 是否已赋值
                     */
                    bool SuccKeyNumHasBeenSet() const;

                    /**
                     * 获取Key文件中包含总的Key数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalKeyNum Key文件中包含总的Key数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTotalKeyNum() const;

                    /**
                     * 设置Key文件中包含总的Key数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TotalKeyNum Key文件中包含总的Key数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTotalKeyNum(const uint64_t& _totalKeyNum);

                    /**
                     * 判断参数 TotalKeyNum 是否已赋值
                     * @return TotalKeyNum 是否已赋值
                     */
                    bool TotalKeyNumHasBeenSet() const;

                private:

                    /**
                     * 表实例ID，形如：tcaplus-3be64cbb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableInstanceId;
                    bool m_tableInstanceIdHasBeenSet;

                    /**
                     * 任务ID，对于创建单任务的接口有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表数据结构类型，如：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * 表数据描述语言（IDL）类型，如：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableIdlType;
                    bool m_tableIdlTypeHasBeenSet;

                    /**
                     * 表所属大区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logicZoneId;
                    bool m_logicZoneIdHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * 任务ID列表，对于创建多任务的接口有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 上传的key文件ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 校验成功Key数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_succKeyNum;
                    bool m_succKeyNumHasBeenSet;

                    /**
                     * Key文件中包含总的Key数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalKeyNum;
                    bool m_totalKeyNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEROLLBACKRESULT_H_
