#pragma once

 

// Package: ShopCmnBtn1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopCmnBtn1.ShopCmnBtn1_C
// 0x0058 (0x02D0 - 0x0278)
class UShopCmnBtn1_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnHit;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconCursor;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsSelected;                                        // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60F2[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             BtnClick;                                          // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 DataRowName;                                       // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         TabId;                                             // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32 Param_TabId);
	void ExecuteUbergraph_ShopCmnBtn1(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_217_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_194_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature();
	void Unselected();
	void Selected();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopCmnBtn1_C">();
	}
	static class UShopCmnBtn1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopCmnBtn1_C>();
	}
};
static_assert(alignof(UShopCmnBtn1_C) == 0x000008, "Wrong alignment on UShopCmnBtn1_C");
static_assert(sizeof(UShopCmnBtn1_C) == 0x0002D0, "Wrong size on UShopCmnBtn1_C");
static_assert(offsetof(UShopCmnBtn1_C, UberGraphFrame) == 0x000278, "Member 'UShopCmnBtn1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopCmnBtn1_C, BtnHit) == 0x000280, "Member 'UShopCmnBtn1_C::BtnHit' has a wrong offset!");
static_assert(offsetof(UShopCmnBtn1_C, Icon) == 0x000288, "Member 'UShopCmnBtn1_C::Icon' has a wrong offset!");
static_assert(offsetof(UShopCmnBtn1_C, IconCursor) == 0x000290, "Member 'UShopCmnBtn1_C::IconCursor' has a wrong offset!");
static_assert(offsetof(UShopCmnBtn1_C, Txt1) == 0x000298, "Member 'UShopCmnBtn1_C::Txt1' has a wrong offset!");
static_assert(offsetof(UShopCmnBtn1_C, IsSelected) == 0x0002A0, "Member 'UShopCmnBtn1_C::IsSelected' has a wrong offset!");
static_assert(offsetof(UShopCmnBtn1_C, BtnClick) == 0x0002A8, "Member 'UShopCmnBtn1_C::BtnClick' has a wrong offset!");
static_assert(offsetof(UShopCmnBtn1_C, DataRowName) == 0x0002B8, "Member 'UShopCmnBtn1_C::DataRowName' has a wrong offset!");
static_assert(offsetof(UShopCmnBtn1_C, TabId) == 0x0002C8, "Member 'UShopCmnBtn1_C::TabId' has a wrong offset!");

}

