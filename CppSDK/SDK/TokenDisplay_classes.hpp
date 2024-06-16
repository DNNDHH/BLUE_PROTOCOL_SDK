#pragma once

 

// Package: TokenDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TokenDisplay.TokenDisplay_C
// 0x0040 (0x02B8 - 0x0278)
class UTokenDisplay_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimTokenListIn;                                   // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         Box_Infomation;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USelectBlankText_C*                     SelectBlankText;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTokenCategoryList_C*                   TokenCategoryList;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTokenList_C*                           TokenList;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_InfoText;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UI_CmnLineH3_1;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TokenDisplay(int32 EntryPoint);
	void CustomEvent_0();
	void SwitchInfoText(int32 Param_Index);
	void OnGetTokenListBlankText_Event();
	void OnGetExpiredBlankText_Event();
	void ChangeForcusCategory(int32 Param_Index);
	void Open();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TokenDisplay_C">();
	}
	static class UTokenDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTokenDisplay_C>();
	}
};
static_assert(alignof(UTokenDisplay_C) == 0x000008, "Wrong alignment on UTokenDisplay_C");
static_assert(sizeof(UTokenDisplay_C) == 0x0002B8, "Wrong size on UTokenDisplay_C");
static_assert(offsetof(UTokenDisplay_C, UberGraphFrame) == 0x000278, "Member 'UTokenDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTokenDisplay_C, AnimTokenListIn) == 0x000280, "Member 'UTokenDisplay_C::AnimTokenListIn' has a wrong offset!");
static_assert(offsetof(UTokenDisplay_C, Box_Infomation) == 0x000288, "Member 'UTokenDisplay_C::Box_Infomation' has a wrong offset!");
static_assert(offsetof(UTokenDisplay_C, SelectBlankText) == 0x000290, "Member 'UTokenDisplay_C::SelectBlankText' has a wrong offset!");
static_assert(offsetof(UTokenDisplay_C, TokenCategoryList) == 0x000298, "Member 'UTokenDisplay_C::TokenCategoryList' has a wrong offset!");
static_assert(offsetof(UTokenDisplay_C, TokenList) == 0x0002A0, "Member 'UTokenDisplay_C::TokenList' has a wrong offset!");
static_assert(offsetof(UTokenDisplay_C, Txt_InfoText) == 0x0002A8, "Member 'UTokenDisplay_C::Txt_InfoText' has a wrong offset!");
static_assert(offsetof(UTokenDisplay_C, UI_CmnLineH3_1) == 0x0002B0, "Member 'UTokenDisplay_C::UI_CmnLineH3_1' has a wrong offset!");

}

