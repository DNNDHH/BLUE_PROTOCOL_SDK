#pragma once

 

// Package: MountStackBResult

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MountStackBResult.MountStackBResult_C
// 0x0140 (0x03B8 - 0x0278)
class UMountStackBResult_C final : public UUserWidget
{
public:
	class UCommonEquipment2DImageParts_C*         CommonEquipment2DImageParts;                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_637;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBLuckyChance_C*                   StackBLuckyChance;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ImagineName;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        WBP_StackB_M;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           ImagineData;                                       // 0x02A0(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetImagineData(const struct FOwnItemInfo& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MountStackBResult_C">();
	}
	static class UMountStackBResult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMountStackBResult_C>();
	}
};
static_assert(alignof(UMountStackBResult_C) == 0x000008, "Wrong alignment on UMountStackBResult_C");
static_assert(sizeof(UMountStackBResult_C) == 0x0003B8, "Wrong size on UMountStackBResult_C");
static_assert(offsetof(UMountStackBResult_C, CommonEquipment2DImageParts) == 0x000278, "Member 'UMountStackBResult_C::CommonEquipment2DImageParts' has a wrong offset!");
static_assert(offsetof(UMountStackBResult_C, Image_637) == 0x000280, "Member 'UMountStackBResult_C::Image_637' has a wrong offset!");
static_assert(offsetof(UMountStackBResult_C, StackBLuckyChance) == 0x000288, "Member 'UMountStackBResult_C::StackBLuckyChance' has a wrong offset!");
static_assert(offsetof(UMountStackBResult_C, Txt_ImagineName) == 0x000290, "Member 'UMountStackBResult_C::Txt_ImagineName' has a wrong offset!");
static_assert(offsetof(UMountStackBResult_C, WBP_StackB_M) == 0x000298, "Member 'UMountStackBResult_C::WBP_StackB_M' has a wrong offset!");
static_assert(offsetof(UMountStackBResult_C, ImagineData) == 0x0002A0, "Member 'UMountStackBResult_C::ImagineData' has a wrong offset!");

}

