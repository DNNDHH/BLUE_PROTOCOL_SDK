#pragma once

 

// Package: RankingMenu_CategoryButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RankingMenu_CategoryButton.RankingMenu_CategoryButton_C
// 0x0058 (0x02D0 - 0x0278)
class URankingMenu_CategoryButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_62;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSelected;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ButtonId;                                          // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5329[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x02A0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Focus;                                             // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClick__DelegateSignature(int32 Param_ButtonId);
	void ExecuteUbergraph_RankingMenu_CategoryButton(int32 EntryPoint);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetMenuFocus(bool InFocus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RankingMenu_CategoryButton_C">();
	}
	static class URankingMenu_CategoryButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URankingMenu_CategoryButton_C>();
	}
};
static_assert(alignof(URankingMenu_CategoryButton_C) == 0x000008, "Wrong alignment on URankingMenu_CategoryButton_C");
static_assert(sizeof(URankingMenu_CategoryButton_C) == 0x0002D0, "Wrong size on URankingMenu_CategoryButton_C");
static_assert(offsetof(URankingMenu_CategoryButton_C, UberGraphFrame) == 0x000278, "Member 'URankingMenu_CategoryButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URankingMenu_CategoryButton_C, Btn1) == 0x000280, "Member 'URankingMenu_CategoryButton_C::Btn1' has a wrong offset!");
static_assert(offsetof(URankingMenu_CategoryButton_C, SBRuntimeTextBlock_62) == 0x000288, "Member 'URankingMenu_CategoryButton_C::SBRuntimeTextBlock_62' has a wrong offset!");
static_assert(offsetof(URankingMenu_CategoryButton_C, SwitchSelected) == 0x000290, "Member 'URankingMenu_CategoryButton_C::SwitchSelected' has a wrong offset!");
static_assert(offsetof(URankingMenu_CategoryButton_C, ButtonId) == 0x000298, "Member 'URankingMenu_CategoryButton_C::ButtonId' has a wrong offset!");
static_assert(offsetof(URankingMenu_CategoryButton_C, Text) == 0x0002A0, "Member 'URankingMenu_CategoryButton_C::Text' has a wrong offset!");
static_assert(offsetof(URankingMenu_CategoryButton_C, OnClick) == 0x0002B8, "Member 'URankingMenu_CategoryButton_C::OnClick' has a wrong offset!");
static_assert(offsetof(URankingMenu_CategoryButton_C, Focus) == 0x0002C8, "Member 'URankingMenu_CategoryButton_C::Focus' has a wrong offset!");

}

