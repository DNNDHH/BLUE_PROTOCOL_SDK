#pragma once

 

// Package: MapWidget_FuncIconItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_FuncIconItem.MapWidget_FuncIconItem_C
// 0x0028 (0x02A0 - 0x0278)
class UMapWidget_FuncIconItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            SBButton_C_0;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextLabel;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPressed__DelegateSignature(class UMapWidget_FuncIconItem_C* InPressedIcon);
	void ExecuteUbergraph_MapWidget_FuncIconItem(int32 EntryPoint);
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature();
	void SetIconEnable(bool IsEnable);
	void SetText(const class FText& InText);
	void SetTextId(int32 InTextID);
	void SetIconTextureByFuncIconType(EMapFuncIconType InFuncIconType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_FuncIconItem_C">();
	}
	static class UMapWidget_FuncIconItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_FuncIconItem_C>();
	}
};
static_assert(alignof(UMapWidget_FuncIconItem_C) == 0x000008, "Wrong alignment on UMapWidget_FuncIconItem_C");
static_assert(sizeof(UMapWidget_FuncIconItem_C) == 0x0002A0, "Wrong size on UMapWidget_FuncIconItem_C");
static_assert(offsetof(UMapWidget_FuncIconItem_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_FuncIconItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_FuncIconItem_C, SBButton_C_0) == 0x000280, "Member 'UMapWidget_FuncIconItem_C::SBButton_C_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_FuncIconItem_C, TextLabel) == 0x000288, "Member 'UMapWidget_FuncIconItem_C::TextLabel' has a wrong offset!");
static_assert(offsetof(UMapWidget_FuncIconItem_C, OnPressed) == 0x000290, "Member 'UMapWidget_FuncIconItem_C::OnPressed' has a wrong offset!");

}

