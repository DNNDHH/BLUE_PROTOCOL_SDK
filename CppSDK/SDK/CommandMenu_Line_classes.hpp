#pragma once

 

// Package: CommandMenu_Line

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenu_Line.CommandMenu_Line_C
// 0x0090 (0x0308 - 0x0278)
class UCommandMenu_Line_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 LineAnimStart1;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineAnimStart10;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineAnimStart11;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineAnimStart2;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineAnimStart3;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineAnimStart4;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineAnimStart5;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineAnimStart6;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineAnimStart7;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineAnimStart8;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineAnimStart9;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineAnimStartPoint;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchTypeFirst;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchTypeThird;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBCommandMenuType                            InType;                                            // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EDA[0x3];                                     // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TypeFilrstIndex;                                   // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TypeThirdIndex;                                    // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommandMenu_Line(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenu_Line_C">();
	}
	static class UCommandMenu_Line_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenu_Line_C>();
	}
};
static_assert(alignof(UCommandMenu_Line_C) == 0x000008, "Wrong alignment on UCommandMenu_Line_C");
static_assert(sizeof(UCommandMenu_Line_C) == 0x000308, "Wrong size on UCommandMenu_Line_C");
static_assert(offsetof(UCommandMenu_Line_C, UberGraphFrame) == 0x000278, "Member 'UCommandMenu_Line_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, AnimIn) == 0x000280, "Member 'UCommandMenu_Line_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, LineAnimStart1) == 0x000288, "Member 'UCommandMenu_Line_C::LineAnimStart1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, LineAnimStart10) == 0x000290, "Member 'UCommandMenu_Line_C::LineAnimStart10' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, LineAnimStart11) == 0x000298, "Member 'UCommandMenu_Line_C::LineAnimStart11' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, LineAnimStart2) == 0x0002A0, "Member 'UCommandMenu_Line_C::LineAnimStart2' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, LineAnimStart3) == 0x0002A8, "Member 'UCommandMenu_Line_C::LineAnimStart3' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, LineAnimStart4) == 0x0002B0, "Member 'UCommandMenu_Line_C::LineAnimStart4' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, LineAnimStart5) == 0x0002B8, "Member 'UCommandMenu_Line_C::LineAnimStart5' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, LineAnimStart6) == 0x0002C0, "Member 'UCommandMenu_Line_C::LineAnimStart6' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, LineAnimStart7) == 0x0002C8, "Member 'UCommandMenu_Line_C::LineAnimStart7' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, LineAnimStart8) == 0x0002D0, "Member 'UCommandMenu_Line_C::LineAnimStart8' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, LineAnimStart9) == 0x0002D8, "Member 'UCommandMenu_Line_C::LineAnimStart9' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, LineAnimStartPoint) == 0x0002E0, "Member 'UCommandMenu_Line_C::LineAnimStartPoint' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, SwitchTypeFirst) == 0x0002E8, "Member 'UCommandMenu_Line_C::SwitchTypeFirst' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, SwitchTypeThird) == 0x0002F0, "Member 'UCommandMenu_Line_C::SwitchTypeThird' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, InType) == 0x0002F8, "Member 'UCommandMenu_Line_C::InType' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, TypeFilrstIndex) == 0x0002FC, "Member 'UCommandMenu_Line_C::TypeFilrstIndex' has a wrong offset!");
static_assert(offsetof(UCommandMenu_Line_C, TypeThirdIndex) == 0x000300, "Member 'UCommandMenu_Line_C::TypeThirdIndex' has a wrong offset!");

}

