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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RESOURCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/MultiDisk.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 资源详情
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Spec 节点规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置节点规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Spec 节点规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StorageType 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStorageType(const int64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskType 磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DiskType 磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取内存容量,单位为M
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemSize 内存容量,单位为M
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置内存容量,单位为M
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MemSize 内存容量,单位为M
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cpu CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取数据盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskSize 数据盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置数据盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DiskSize 数据盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取系统盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RootSize 系统盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRootSize() const;

                    /**
                     * 设置系统盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RootSize 系统盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRootSize(const int64_t& _rootSize);

                    /**
                     * 判断参数 RootSize 是否已赋值
                     * @return RootSize 是否已赋值
                     */
                    bool RootSizeHasBeenSet() const;

                    /**
                     * 获取云盘列表，当数据盘为一块云盘时，直接使用DiskType和DiskSize参数，超出部分使用MultiDisks
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiDisks 云盘列表，当数据盘为一块云盘时，直接使用DiskType和DiskSize参数，超出部分使用MultiDisks
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MultiDisk> GetMultiDisks() const;

                    /**
                     * 设置云盘列表，当数据盘为一块云盘时，直接使用DiskType和DiskSize参数，超出部分使用MultiDisks
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MultiDisks 云盘列表，当数据盘为一块云盘时，直接使用DiskType和DiskSize参数，超出部分使用MultiDisks
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMultiDisks(const std::vector<MultiDisk>& _multiDisks);

                    /**
                     * 判断参数 MultiDisks 是否已赋值
                     * @return MultiDisks 是否已赋值
                     */
                    bool MultiDisksHasBeenSet() const;

                private:

                    /**
                     * 节点规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 磁盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 内存容量,单位为M
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * CPU核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 数据盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 系统盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rootSize;
                    bool m_rootSizeHasBeenSet;

                    /**
                     * 云盘列表，当数据盘为一块云盘时，直接使用DiskType和DiskSize参数，超出部分使用MultiDisks
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MultiDisk> m_multiDisks;
                    bool m_multiDisksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RESOURCE_H_
