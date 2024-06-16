#pragma once

 

// Package: TensionTagIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TensionTagIcon.TensionTagIcon_C
// 0x0060 (0x02D8 - 0x0278)
class UTensionTagIcon_C final : public UUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBTensionTagType                             TensionTagId;                                      // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E78[0x7];                                      // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ESBTensionTagType, class UTexture2D*>    IconList;                                          // 0x0288(0x0050)(Edit, BlueprintVisible)

public:
	void SetTensionTag(ESBTensionTagType InTensionTagId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TensionTagIcon_C">();
	}
	static class UTensionTagIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTensionTagIcon_C>();
	}
};
static_assert(alignof(UTensionTagIcon_C) == 0x000008, "Wrong alignment on UTensionTagIcon_C");
static_assert(sizeof(UTensionTagIcon_C) == 0x0002D8, "Wrong size on UTensionTagIcon_C");
static_assert(offsetof(UTensionTagIcon_C, Image_0) == 0x000278, "Member 'UTensionTagIcon_C::Image_0' has a wrong offset!");
static_assert(offsetof(UTensionTagIcon_C, TensionTagId) == 0x000280, "Member 'UTensionTagIcon_C::TensionTagId' has a wrong offset!");
static_assert(offsetof(UTensionTagIcon_C, IconList) == 0x000288, "Member 'UTensionTagIcon_C::IconList' has a wrong offset!");

}

