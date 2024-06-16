#pragma once

 

// Package: CommonIconToolTipContent_RecipeSet

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTipContent_RecipeSet.CommonIconToolTipContent_RecipeSet_C
// 0x0058 (0x02D0 - 0x0278)
class UCommonIconToolTipContent_RecipeSet_C final : public UUserWidget
{
public:
	class UAttributeIcon_C*                       Attribute1;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon_2;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon_179;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_51;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_line;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelName;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_2;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLv;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetRecipeSet(const struct FST_ToolTipInfo& ST_ToolTipInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTipContent_RecipeSet_C">();
	}
	static class UCommonIconToolTipContent_RecipeSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTipContent_RecipeSet_C>();
	}
};
static_assert(alignof(UCommonIconToolTipContent_RecipeSet_C) == 0x000008, "Wrong alignment on UCommonIconToolTipContent_RecipeSet_C");
static_assert(sizeof(UCommonIconToolTipContent_RecipeSet_C) == 0x0002D0, "Wrong size on UCommonIconToolTipContent_RecipeSet_C");
static_assert(offsetof(UCommonIconToolTipContent_RecipeSet_C, Attribute1) == 0x000278, "Member 'UCommonIconToolTipContent_RecipeSet_C::Attribute1' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_RecipeSet_C, BG) == 0x000280, "Member 'UCommonIconToolTipContent_RecipeSet_C::BG' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_RecipeSet_C, CommonIcon) == 0x000288, "Member 'UCommonIconToolTipContent_RecipeSet_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_RecipeSet_C, CommonIcon_2) == 0x000290, "Member 'UCommonIconToolTipContent_RecipeSet_C::CommonIcon_2' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_RecipeSet_C, CommonIcon_179) == 0x000298, "Member 'UCommonIconToolTipContent_RecipeSet_C::CommonIcon_179' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_RecipeSet_C, GridPanel) == 0x0002A0, "Member 'UCommonIconToolTipContent_RecipeSet_C::GridPanel' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_RecipeSet_C, Image_51) == 0x0002A8, "Member 'UCommonIconToolTipContent_RecipeSet_C::Image_51' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_RecipeSet_C, Image_line) == 0x0002B0, "Member 'UCommonIconToolTipContent_RecipeSet_C::Image_line' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_RecipeSet_C, LabelName) == 0x0002B8, "Member 'UCommonIconToolTipContent_RecipeSet_C::LabelName' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_RecipeSet_C, SBRuntimeTextBlock_2) == 0x0002C0, "Member 'UCommonIconToolTipContent_RecipeSet_C::SBRuntimeTextBlock_2' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_RecipeSet_C, TxtLv) == 0x0002C8, "Member 'UCommonIconToolTipContent_RecipeSet_C::TxtLv' has a wrong offset!");

}

