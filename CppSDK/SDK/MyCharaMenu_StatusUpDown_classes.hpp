#pragma once

 

// Package: MyCharaMenu_StatusUpDown

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C
// 0x0030 (0x02A8 - 0x0278)
class UMyCharaMenu_StatusUpDown_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           BgWidthSet;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchBg;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPer;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtValue;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         BgWidth;                                           // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MyCharaMenu_StatusUpDown(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetValue(float Value);
	void Clear();
	void SetValueAsPercentage(float InValue);
	void SetValueBase(float InValue, bool InIsPercentage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_StatusUpDown_C">();
	}
	static class UMyCharaMenu_StatusUpDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_StatusUpDown_C>();
	}
};
static_assert(alignof(UMyCharaMenu_StatusUpDown_C) == 0x000008, "Wrong alignment on UMyCharaMenu_StatusUpDown_C");
static_assert(sizeof(UMyCharaMenu_StatusUpDown_C) == 0x0002A8, "Wrong size on UMyCharaMenu_StatusUpDown_C");
static_assert(offsetof(UMyCharaMenu_StatusUpDown_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_StatusUpDown_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_StatusUpDown_C, BgWidthSet) == 0x000280, "Member 'UMyCharaMenu_StatusUpDown_C::BgWidthSet' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_StatusUpDown_C, SwitchBg) == 0x000288, "Member 'UMyCharaMenu_StatusUpDown_C::SwitchBg' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_StatusUpDown_C, TxtPer) == 0x000290, "Member 'UMyCharaMenu_StatusUpDown_C::TxtPer' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_StatusUpDown_C, TxtValue) == 0x000298, "Member 'UMyCharaMenu_StatusUpDown_C::TxtValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_StatusUpDown_C, BgWidth) == 0x0002A0, "Member 'UMyCharaMenu_StatusUpDown_C::BgWidth' has a wrong offset!");

}

