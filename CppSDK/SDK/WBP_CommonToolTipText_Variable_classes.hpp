#pragma once

 

// Package: WBP_CommonToolTipText_Variable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_CommonToolTipText_Variable_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    Label_Description;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolTipDetailsDateTime_C*          WBP_ToolTipDetailsDateTime;                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_CommonToolTipText_Variable(int32 EntryPoint);
	void SetLimitTimer(const struct FDateTime& InDateTime);
	void SetTextAndDateTime(const class FText& Text, const struct FDateTime& DateTime, bool bHideIfMinValue);
	void SetText(const class FText& InText);
	void Set_Emotion(class FName InId);
	void SetWeaponSkin(int32 InWeaponSkinId, bool InIsTermLimited, const struct FDateTime& InExpiryDateTime);
	void SetRecipeDateTime(const struct FDateTime& DateTime);
	void SetAdventureBoardBosstDateTime(bool InLimited, const struct FDateTime& InDateTime);
	void SetCommunicationSettingMenuAchievement(const struct FDateTime& InDateTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommonToolTipText_Variable_C">();
	}
	static class UWBP_CommonToolTipText_Variable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommonToolTipText_Variable_C>();
	}
};
static_assert(alignof(UWBP_CommonToolTipText_Variable_C) == 0x000008, "Wrong alignment on UWBP_CommonToolTipText_Variable_C");
static_assert(sizeof(UWBP_CommonToolTipText_Variable_C) == 0x000290, "Wrong size on UWBP_CommonToolTipText_Variable_C");
static_assert(offsetof(UWBP_CommonToolTipText_Variable_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CommonToolTipText_Variable_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipText_Variable_C, Label_Description) == 0x000280, "Member 'UWBP_CommonToolTipText_Variable_C::Label_Description' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipText_Variable_C, WBP_ToolTipDetailsDateTime) == 0x000288, "Member 'UWBP_CommonToolTipText_Variable_C::WBP_ToolTipDetailsDateTime' has a wrong offset!");

}

