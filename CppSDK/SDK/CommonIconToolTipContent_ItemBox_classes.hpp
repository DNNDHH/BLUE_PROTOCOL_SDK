#pragma once

 

// Package: CommonIconToolTipContent_ItemBox

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTipContent_ItemBox.CommonIconToolTipContent_ItemBox_C
// 0x0038 (0x02B0 - 0x0278)
class UCommonIconToolTipContent_ItemBox_C final : public UUserWidget
{
public:
	class UImage*                                 BG;                                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_91;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_line;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelName;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelType;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabeText_1;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabeText_2;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetItemBox(const struct FST_ToolTipInfo& ST_ToolTipInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTipContent_ItemBox_C">();
	}
	static class UCommonIconToolTipContent_ItemBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTipContent_ItemBox_C>();
	}
};
static_assert(alignof(UCommonIconToolTipContent_ItemBox_C) == 0x000008, "Wrong alignment on UCommonIconToolTipContent_ItemBox_C");
static_assert(sizeof(UCommonIconToolTipContent_ItemBox_C) == 0x0002B0, "Wrong size on UCommonIconToolTipContent_ItemBox_C");
static_assert(offsetof(UCommonIconToolTipContent_ItemBox_C, BG) == 0x000278, "Member 'UCommonIconToolTipContent_ItemBox_C::BG' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ItemBox_C, Image_91) == 0x000280, "Member 'UCommonIconToolTipContent_ItemBox_C::Image_91' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ItemBox_C, Image_line) == 0x000288, "Member 'UCommonIconToolTipContent_ItemBox_C::Image_line' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ItemBox_C, LabelName) == 0x000290, "Member 'UCommonIconToolTipContent_ItemBox_C::LabelName' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ItemBox_C, LabelType) == 0x000298, "Member 'UCommonIconToolTipContent_ItemBox_C::LabelType' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ItemBox_C, LabeText_1) == 0x0002A0, "Member 'UCommonIconToolTipContent_ItemBox_C::LabeText_1' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ItemBox_C, LabeText_2) == 0x0002A8, "Member 'UCommonIconToolTipContent_ItemBox_C::LabeText_2' has a wrong offset!");

}

