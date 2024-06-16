#pragma once

 

// Package: MapEditWindowSize

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapEditWindowSize.MapEditWindowSize_C
// 0x0048 (0x02C0 - 0x0278)
class UMapEditWindowSize_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCheckBox_C*                          Size1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          Size2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          Size3;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          Size4;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextTitle;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnWindowSizeChanged;                               // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         In_Text_Id;                                        // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InIndex;                                           // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnWindowSizeChanged__DelegateSignature(int32 Number);
	void ExecuteUbergraph_MapEditWindowSize(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__MapEditWindowSize_Size4_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__MapEditWindowSize_Size3_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__MapEditWindowSize_Size2_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__MapEditWindowSize_Size1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void SetTitle(int32 InTextID);
	void SetCheckWindowSize(int32 Param_Index);
	void SetCheckWindowSize1(bool IsOn);
	void SetCheckWindowSize2(bool IsOn);
	void SetCheckWindowSize3(bool IsOn);
	void SetCheckWindowSize4(bool IsOn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapEditWindowSize_C">();
	}
	static class UMapEditWindowSize_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapEditWindowSize_C>();
	}
};
static_assert(alignof(UMapEditWindowSize_C) == 0x000008, "Wrong alignment on UMapEditWindowSize_C");
static_assert(sizeof(UMapEditWindowSize_C) == 0x0002C0, "Wrong size on UMapEditWindowSize_C");
static_assert(offsetof(UMapEditWindowSize_C, UberGraphFrame) == 0x000278, "Member 'UMapEditWindowSize_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapEditWindowSize_C, Size1) == 0x000280, "Member 'UMapEditWindowSize_C::Size1' has a wrong offset!");
static_assert(offsetof(UMapEditWindowSize_C, Size2) == 0x000288, "Member 'UMapEditWindowSize_C::Size2' has a wrong offset!");
static_assert(offsetof(UMapEditWindowSize_C, Size3) == 0x000290, "Member 'UMapEditWindowSize_C::Size3' has a wrong offset!");
static_assert(offsetof(UMapEditWindowSize_C, Size4) == 0x000298, "Member 'UMapEditWindowSize_C::Size4' has a wrong offset!");
static_assert(offsetof(UMapEditWindowSize_C, TextTitle) == 0x0002A0, "Member 'UMapEditWindowSize_C::TextTitle' has a wrong offset!");
static_assert(offsetof(UMapEditWindowSize_C, OnWindowSizeChanged) == 0x0002A8, "Member 'UMapEditWindowSize_C::OnWindowSizeChanged' has a wrong offset!");
static_assert(offsetof(UMapEditWindowSize_C, In_Text_Id) == 0x0002B8, "Member 'UMapEditWindowSize_C::In_Text_Id' has a wrong offset!");
static_assert(offsetof(UMapEditWindowSize_C, InIndex) == 0x0002BC, "Member 'UMapEditWindowSize_C::InIndex' has a wrong offset!");

}

