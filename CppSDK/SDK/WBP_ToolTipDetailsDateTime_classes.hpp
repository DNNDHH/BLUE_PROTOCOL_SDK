#pragma once

 

// Package: WBP_ToolTipDetailsDateTime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C
// 0x0050 (0x02C8 - 0x0278)
class UWBP_ToolTipDetailsDateTime_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Duration;                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Limit;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Header;                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Header2;                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Header2_1;                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Header3;                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcherForLimitTime;                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RecipeModeEnable;                                  // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_ToolTipDetailsDateTime(int32 EntryPoint);
	void SetExpiryDateTimeEndDisplay(const struct FDateTime& ExpiryDateTime);
	void PreConstruct(bool IsDesignTime);
	void SetDataAndVisibility(const class FString& EventTermId, int32 DurationMinutes, EItemType Param_ItemType);
	void SetExpiryDateTime(const struct FDateTime& ExpiryDateTime);
	void SetData(const class FString& EventTermId, int32 DurationMinutes, EItemType Param_ItemType);
	void SetEventTermId(const class FString& EventTermId);
	void SetDurationMinutes(int32 DurationMinutes);
	void SetMessage(EItemType InItemType);
	void SetMessageTextColor(const struct FSlateColor& LimitTime, const struct FSlateColor& Desc);
	void SetLimitTimer(const struct FDateTime& InDateTime);
	void SwitchingRecipeHeader();
	void SetEndDisplay();
	void SetRecepiType();
	void SetCommunicationSettingMenuAchievement(const struct FDateTime& InDateTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ToolTipDetailsDateTime_C">();
	}
	static class UWBP_ToolTipDetailsDateTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ToolTipDetailsDateTime_C>();
	}
};
static_assert(alignof(UWBP_ToolTipDetailsDateTime_C) == 0x000008, "Wrong alignment on UWBP_ToolTipDetailsDateTime_C");
static_assert(sizeof(UWBP_ToolTipDetailsDateTime_C) == 0x0002C8, "Wrong size on UWBP_ToolTipDetailsDateTime_C");
static_assert(offsetof(UWBP_ToolTipDetailsDateTime_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ToolTipDetailsDateTime_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTipDetailsDateTime_C, CanvasPanel_0) == 0x000280, "Member 'UWBP_ToolTipDetailsDateTime_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTipDetailsDateTime_C, SBDateTimeTextBlock_Duration) == 0x000288, "Member 'UWBP_ToolTipDetailsDateTime_C::SBDateTimeTextBlock_Duration' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTipDetailsDateTime_C, SBDateTimeTextBlock_Limit) == 0x000290, "Member 'UWBP_ToolTipDetailsDateTime_C::SBDateTimeTextBlock_Limit' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTipDetailsDateTime_C, SBRuntimeTextBlock_Header) == 0x000298, "Member 'UWBP_ToolTipDetailsDateTime_C::SBRuntimeTextBlock_Header' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTipDetailsDateTime_C, SBRuntimeTextBlock_Header2) == 0x0002A0, "Member 'UWBP_ToolTipDetailsDateTime_C::SBRuntimeTextBlock_Header2' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTipDetailsDateTime_C, SBRuntimeTextBlock_Header2_1) == 0x0002A8, "Member 'UWBP_ToolTipDetailsDateTime_C::SBRuntimeTextBlock_Header2_1' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTipDetailsDateTime_C, SBRuntimeTextBlock_Header3) == 0x0002B0, "Member 'UWBP_ToolTipDetailsDateTime_C::SBRuntimeTextBlock_Header3' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTipDetailsDateTime_C, WidgetSwitcherForLimitTime) == 0x0002B8, "Member 'UWBP_ToolTipDetailsDateTime_C::WidgetSwitcherForLimitTime' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTipDetailsDateTime_C, ItemType) == 0x0002C0, "Member 'UWBP_ToolTipDetailsDateTime_C::ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTipDetailsDateTime_C, RecipeModeEnable) == 0x0002C1, "Member 'UWBP_ToolTipDetailsDateTime_C::RecipeModeEnable' has a wrong offset!");

}

