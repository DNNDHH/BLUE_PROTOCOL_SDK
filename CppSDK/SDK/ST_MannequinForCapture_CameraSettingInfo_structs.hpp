#pragma once

 

// Package: ST_MannequinForCapture_CameraSettingInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_MannequinForCapture_CameraSettingInfo.ST_MannequinForCapture_CameraSettingInfo
// 0x002C (0x002C - 0x0000)
struct FST_MannequinForCapture_CameraSettingInfo final
{
public:
	float                                         ModelScale_5_15AEDC0C4395B91CFB1E40ABC21C0C7D;     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ModelRotation_46_E82641394E4333B112624EBCF67287FF; // 0x0004(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                ModelLocationOffset_67_4B3DA95C49ED6E36BA654993DDD0F10B; // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CaptureCameraMoveUpOffset_64_C7F3AF6D409B67E81ADC69BA80264E45; // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CaptureCameraMoveDownOffset_65_6BCBCA6E478CA3272F10718B39A5B6FF; // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CaptureCameraZoomInOffset_59_1653D0FB44F4F8E5CE997CA831CA1C77; // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CaptureCameraZoomOutOffset_60_31CD4F4449D87DCA75B4008DBC503C00; // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_MannequinForCapture_CameraSettingInfo) == 0x000004, "Wrong alignment on FST_MannequinForCapture_CameraSettingInfo");
static_assert(sizeof(FST_MannequinForCapture_CameraSettingInfo) == 0x00002C, "Wrong size on FST_MannequinForCapture_CameraSettingInfo");
static_assert(offsetof(FST_MannequinForCapture_CameraSettingInfo, ModelScale_5_15AEDC0C4395B91CFB1E40ABC21C0C7D) == 0x000000, "Member 'FST_MannequinForCapture_CameraSettingInfo::ModelScale_5_15AEDC0C4395B91CFB1E40ABC21C0C7D' has a wrong offset!");
static_assert(offsetof(FST_MannequinForCapture_CameraSettingInfo, ModelRotation_46_E82641394E4333B112624EBCF67287FF) == 0x000004, "Member 'FST_MannequinForCapture_CameraSettingInfo::ModelRotation_46_E82641394E4333B112624EBCF67287FF' has a wrong offset!");
static_assert(offsetof(FST_MannequinForCapture_CameraSettingInfo, ModelLocationOffset_67_4B3DA95C49ED6E36BA654993DDD0F10B) == 0x000010, "Member 'FST_MannequinForCapture_CameraSettingInfo::ModelLocationOffset_67_4B3DA95C49ED6E36BA654993DDD0F10B' has a wrong offset!");
static_assert(offsetof(FST_MannequinForCapture_CameraSettingInfo, CaptureCameraMoveUpOffset_64_C7F3AF6D409B67E81ADC69BA80264E45) == 0x00001C, "Member 'FST_MannequinForCapture_CameraSettingInfo::CaptureCameraMoveUpOffset_64_C7F3AF6D409B67E81ADC69BA80264E45' has a wrong offset!");
static_assert(offsetof(FST_MannequinForCapture_CameraSettingInfo, CaptureCameraMoveDownOffset_65_6BCBCA6E478CA3272F10718B39A5B6FF) == 0x000020, "Member 'FST_MannequinForCapture_CameraSettingInfo::CaptureCameraMoveDownOffset_65_6BCBCA6E478CA3272F10718B39A5B6FF' has a wrong offset!");
static_assert(offsetof(FST_MannequinForCapture_CameraSettingInfo, CaptureCameraZoomInOffset_59_1653D0FB44F4F8E5CE997CA831CA1C77) == 0x000024, "Member 'FST_MannequinForCapture_CameraSettingInfo::CaptureCameraZoomInOffset_59_1653D0FB44F4F8E5CE997CA831CA1C77' has a wrong offset!");
static_assert(offsetof(FST_MannequinForCapture_CameraSettingInfo, CaptureCameraZoomOutOffset_60_31CD4F4449D87DCA75B4008DBC503C00) == 0x000028, "Member 'FST_MannequinForCapture_CameraSettingInfo::CaptureCameraZoomOutOffset_60_31CD4F4449D87DCA75B4008DBC503C00' has a wrong offset!");

}
