#pragma once

 

// Package: TokenItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TokenItem.TokenItem_C
// 0x0098 (0x0310 - 0x0278)
class UTokenItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    Amount;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_0;                                          // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_C_121;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Time;                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherBg;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Name;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   DescText;                                          // 0x02B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTokenTooltip_C*                        ToolTip;                                           // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NormalAmountColor;                                 // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NormalTimeColor;                                   // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ExpiredColor;                                      // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              DateTime;                                          // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TokenItem(int32 EntryPoint);
	void SetExpiredTokenData(const struct FMasterToken& TokenData, int32 Param_Amount, const struct FDateTime& EndTime, int32 Param_Index);
	void Set_Token_Data(const struct FMasterToken& TokenData, int32 Param_Amount, const struct FDateTime& EndOfTime, const struct FDateTime& LastRecoveryDate, class USBToken* Token, int32 Param_Index);
	void SetMoneyData(class UTexture2D* IconImage, const class FString& Param_Name, int32 Param_Amount, int32 Param_Index);
	void OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D(class UObject* Loaded);
	void OnLoaded_D79227434D2250620D435BBAE24D370E(class UObject* Loaded);
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TokenItem_C">();
	}
	static class UTokenItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTokenItem_C>();
	}
};
static_assert(alignof(UTokenItem_C) == 0x000008, "Wrong alignment on UTokenItem_C");
static_assert(sizeof(UTokenItem_C) == 0x000310, "Wrong size on UTokenItem_C");
static_assert(offsetof(UTokenItem_C, UberGraphFrame) == 0x000278, "Member 'UTokenItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTokenItem_C, Amount) == 0x000280, "Member 'UTokenItem_C::Amount' has a wrong offset!");
static_assert(offsetof(UTokenItem_C, Border_0) == 0x000288, "Member 'UTokenItem_C::Border_0' has a wrong offset!");
static_assert(offsetof(UTokenItem_C, Icon) == 0x000290, "Member 'UTokenItem_C::Icon' has a wrong offset!");
static_assert(offsetof(UTokenItem_C, SBButton_C_121) == 0x000298, "Member 'UTokenItem_C::SBButton_C_121' has a wrong offset!");
static_assert(offsetof(UTokenItem_C, SBDateTimeTextBlock_Time) == 0x0002A0, "Member 'UTokenItem_C::SBDateTimeTextBlock_Time' has a wrong offset!");
static_assert(offsetof(UTokenItem_C, SwitcherBg) == 0x0002A8, "Member 'UTokenItem_C::SwitcherBg' has a wrong offset!");
static_assert(offsetof(UTokenItem_C, Txt_Name) == 0x0002B0, "Member 'UTokenItem_C::Txt_Name' has a wrong offset!");
static_assert(offsetof(UTokenItem_C, DescText) == 0x0002B8, "Member 'UTokenItem_C::DescText' has a wrong offset!");
static_assert(offsetof(UTokenItem_C, ToolTip) == 0x0002D0, "Member 'UTokenItem_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UTokenItem_C, NormalAmountColor) == 0x0002D8, "Member 'UTokenItem_C::NormalAmountColor' has a wrong offset!");
static_assert(offsetof(UTokenItem_C, NormalTimeColor) == 0x0002E8, "Member 'UTokenItem_C::NormalTimeColor' has a wrong offset!");
static_assert(offsetof(UTokenItem_C, ExpiredColor) == 0x0002F8, "Member 'UTokenItem_C::ExpiredColor' has a wrong offset!");
static_assert(offsetof(UTokenItem_C, DateTime) == 0x000308, "Member 'UTokenItem_C::DateTime' has a wrong offset!");

}

