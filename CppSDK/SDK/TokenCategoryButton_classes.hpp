#pragma once

 

// Package: TokenCategoryButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TokenCategoryButton.TokenCategoryButton_C
// 0x0050 (0x02C8 - 0x0278)
class UTokenCategoryButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSelected;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0298(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         ListIndex;                                         // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_56E5[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClick__DelegateSignature(int32 Param_ListIndex);
	void ExecuteUbergraph_TokenCategoryButton(int32 EntryPoint);
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Setup(int32 Param_Index, const class FText& Param_Text);
	void SetButtonSelected(bool Selected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TokenCategoryButton_C">();
	}
	static class UTokenCategoryButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTokenCategoryButton_C>();
	}
};
static_assert(alignof(UTokenCategoryButton_C) == 0x000008, "Wrong alignment on UTokenCategoryButton_C");
static_assert(sizeof(UTokenCategoryButton_C) == 0x0002C8, "Wrong size on UTokenCategoryButton_C");
static_assert(offsetof(UTokenCategoryButton_C, UberGraphFrame) == 0x000278, "Member 'UTokenCategoryButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTokenCategoryButton_C, Btn1) == 0x000280, "Member 'UTokenCategoryButton_C::Btn1' has a wrong offset!");
static_assert(offsetof(UTokenCategoryButton_C, ItemName) == 0x000288, "Member 'UTokenCategoryButton_C::ItemName' has a wrong offset!");
static_assert(offsetof(UTokenCategoryButton_C, SwitchSelected) == 0x000290, "Member 'UTokenCategoryButton_C::SwitchSelected' has a wrong offset!");
static_assert(offsetof(UTokenCategoryButton_C, Text) == 0x000298, "Member 'UTokenCategoryButton_C::Text' has a wrong offset!");
static_assert(offsetof(UTokenCategoryButton_C, ListIndex) == 0x0002B0, "Member 'UTokenCategoryButton_C::ListIndex' has a wrong offset!");
static_assert(offsetof(UTokenCategoryButton_C, OnClick) == 0x0002B8, "Member 'UTokenCategoryButton_C::OnClick' has a wrong offset!");

}

