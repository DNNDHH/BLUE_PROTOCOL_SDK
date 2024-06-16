#pragma once

 

// Package: StepTextItem_Gasha

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StepTextItem_Gasha.StepTextItem_Gasha_C
// 0x0040 (0x02B8 - 0x0278)
class UStepTextItem_Gasha_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        Switch_TextStyle;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextMax;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextMax_1;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextNow;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextNow_1;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextNow_2;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TextStyle;                                         // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StepTextItem_Gasha(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetStep(int32 Now, int32 Max);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StepTextItem_Gasha_C">();
	}
	static class UStepTextItem_Gasha_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepTextItem_Gasha_C>();
	}
};
static_assert(alignof(UStepTextItem_Gasha_C) == 0x000008, "Wrong alignment on UStepTextItem_Gasha_C");
static_assert(sizeof(UStepTextItem_Gasha_C) == 0x0002B8, "Wrong size on UStepTextItem_Gasha_C");
static_assert(offsetof(UStepTextItem_Gasha_C, UberGraphFrame) == 0x000278, "Member 'UStepTextItem_Gasha_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStepTextItem_Gasha_C, Switch_TextStyle) == 0x000280, "Member 'UStepTextItem_Gasha_C::Switch_TextStyle' has a wrong offset!");
static_assert(offsetof(UStepTextItem_Gasha_C, TextMax) == 0x000288, "Member 'UStepTextItem_Gasha_C::TextMax' has a wrong offset!");
static_assert(offsetof(UStepTextItem_Gasha_C, TextMax_1) == 0x000290, "Member 'UStepTextItem_Gasha_C::TextMax_1' has a wrong offset!");
static_assert(offsetof(UStepTextItem_Gasha_C, TextNow) == 0x000298, "Member 'UStepTextItem_Gasha_C::TextNow' has a wrong offset!");
static_assert(offsetof(UStepTextItem_Gasha_C, TextNow_1) == 0x0002A0, "Member 'UStepTextItem_Gasha_C::TextNow_1' has a wrong offset!");
static_assert(offsetof(UStepTextItem_Gasha_C, TextNow_2) == 0x0002A8, "Member 'UStepTextItem_Gasha_C::TextNow_2' has a wrong offset!");
static_assert(offsetof(UStepTextItem_Gasha_C, TextStyle) == 0x0002B0, "Member 'UStepTextItem_Gasha_C::TextStyle' has a wrong offset!");

}

