#pragma once

 

// Package: CommandMenu_SubMenuLine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C
// 0x0030 (0x02A8 - 0x0278)
class UCommandMenu_SubMenuLine_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 LineAnimStartPoint;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineAnimStartPoint_1;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchLine12;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         BtnNum;                                            // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommandMenu_SubMenuLine(int32 EntryPoint);
	void SetBtnNumSwitch(int32 Param_BtnNum);
	void PreConstruct(bool IsDesignTime);
	void InAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenu_SubMenuLine_C">();
	}
	static class UCommandMenu_SubMenuLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenu_SubMenuLine_C>();
	}
};
static_assert(alignof(UCommandMenu_SubMenuLine_C) == 0x000008, "Wrong alignment on UCommandMenu_SubMenuLine_C");
static_assert(sizeof(UCommandMenu_SubMenuLine_C) == 0x0002A8, "Wrong size on UCommandMenu_SubMenuLine_C");
static_assert(offsetof(UCommandMenu_SubMenuLine_C, UberGraphFrame) == 0x000278, "Member 'UCommandMenu_SubMenuLine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenu_SubMenuLine_C, AnimIn) == 0x000280, "Member 'UCommandMenu_SubMenuLine_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UCommandMenu_SubMenuLine_C, LineAnimStartPoint) == 0x000288, "Member 'UCommandMenu_SubMenuLine_C::LineAnimStartPoint' has a wrong offset!");
static_assert(offsetof(UCommandMenu_SubMenuLine_C, LineAnimStartPoint_1) == 0x000290, "Member 'UCommandMenu_SubMenuLine_C::LineAnimStartPoint_1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_SubMenuLine_C, SwitchLine12) == 0x000298, "Member 'UCommandMenu_SubMenuLine_C::SwitchLine12' has a wrong offset!");
static_assert(offsetof(UCommandMenu_SubMenuLine_C, BtnNum) == 0x0002A0, "Member 'UCommandMenu_SubMenuLine_C::BtnNum' has a wrong offset!");

}

