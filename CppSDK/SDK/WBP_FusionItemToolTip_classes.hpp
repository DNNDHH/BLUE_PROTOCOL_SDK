#pragma once

 

// Package: WBP_FusionItemToolTip

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FusionItemToolTip.WBP_FusionItemToolTip_C
// 0x0060 (0x02D8 - 0x0278)
class UWBP_FusionItemToolTip_C final : public UUserWidget
{
public:
	class UImage*                                 BG;                                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Desc;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Desc_1;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Desc_2;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_line_2;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelName;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelType;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc_1;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc_2;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtNum1;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtNum2;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSlotNum;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetItem(int32 InItemIndex, bool bUnidentified);

	void GetTooltipText(int32 MinValue, int32 MaxValue, class FString* String) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FusionItemToolTip_C">();
	}
	static class UWBP_FusionItemToolTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FusionItemToolTip_C>();
	}
};
static_assert(alignof(UWBP_FusionItemToolTip_C) == 0x000008, "Wrong alignment on UWBP_FusionItemToolTip_C");
static_assert(sizeof(UWBP_FusionItemToolTip_C) == 0x0002D8, "Wrong size on UWBP_FusionItemToolTip_C");
static_assert(offsetof(UWBP_FusionItemToolTip_C, BG) == 0x000278, "Member 'UWBP_FusionItemToolTip_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_FusionItemToolTip_C, CanvasPanel_Desc) == 0x000280, "Member 'UWBP_FusionItemToolTip_C::CanvasPanel_Desc' has a wrong offset!");
static_assert(offsetof(UWBP_FusionItemToolTip_C, CanvasPanel_Desc_1) == 0x000288, "Member 'UWBP_FusionItemToolTip_C::CanvasPanel_Desc_1' has a wrong offset!");
static_assert(offsetof(UWBP_FusionItemToolTip_C, CanvasPanel_Desc_2) == 0x000290, "Member 'UWBP_FusionItemToolTip_C::CanvasPanel_Desc_2' has a wrong offset!");
static_assert(offsetof(UWBP_FusionItemToolTip_C, Image_line_2) == 0x000298, "Member 'UWBP_FusionItemToolTip_C::Image_line_2' has a wrong offset!");
static_assert(offsetof(UWBP_FusionItemToolTip_C, LabelName) == 0x0002A0, "Member 'UWBP_FusionItemToolTip_C::LabelName' has a wrong offset!");
static_assert(offsetof(UWBP_FusionItemToolTip_C, LabelType) == 0x0002A8, "Member 'UWBP_FusionItemToolTip_C::LabelType' has a wrong offset!");
static_assert(offsetof(UWBP_FusionItemToolTip_C, TxtDesc_1) == 0x0002B0, "Member 'UWBP_FusionItemToolTip_C::TxtDesc_1' has a wrong offset!");
static_assert(offsetof(UWBP_FusionItemToolTip_C, TxtDesc_2) == 0x0002B8, "Member 'UWBP_FusionItemToolTip_C::TxtDesc_2' has a wrong offset!");
static_assert(offsetof(UWBP_FusionItemToolTip_C, TxtNum1) == 0x0002C0, "Member 'UWBP_FusionItemToolTip_C::TxtNum1' has a wrong offset!");
static_assert(offsetof(UWBP_FusionItemToolTip_C, TxtNum2) == 0x0002C8, "Member 'UWBP_FusionItemToolTip_C::TxtNum2' has a wrong offset!");
static_assert(offsetof(UWBP_FusionItemToolTip_C, TxtSlotNum) == 0x0002D0, "Member 'UWBP_FusionItemToolTip_C::TxtSlotNum' has a wrong offset!");

}

