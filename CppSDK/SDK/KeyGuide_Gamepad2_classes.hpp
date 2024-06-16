#pragma once

 

// Package: KeyGuide_Gamepad2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeyGuide_Gamepad2.KeyGuide_Gamepad2_C
// 0x0028 (0x02A0 - 0x0278)
class UKeyGuide_Gamepad2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UKeyGuide_Item_C*                       KeyGuide_Item_ChangeLockOn_L;                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Item_C*                       KeyGuide_Item_ChangeLockOn_R;                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Item_C*                       KeyGuide_Item_Moves_1;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_2;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_KeyGuide_Gamepad2(int32 EntryPoint);
	void ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyGuide_Gamepad2_C">();
	}
	static class UKeyGuide_Gamepad2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyGuide_Gamepad2_C>();
	}
};
static_assert(alignof(UKeyGuide_Gamepad2_C) == 0x000008, "Wrong alignment on UKeyGuide_Gamepad2_C");
static_assert(sizeof(UKeyGuide_Gamepad2_C) == 0x0002A0, "Wrong size on UKeyGuide_Gamepad2_C");
static_assert(offsetof(UKeyGuide_Gamepad2_C, UberGraphFrame) == 0x000278, "Member 'UKeyGuide_Gamepad2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad2_C, KeyGuide_Item_ChangeLockOn_L) == 0x000280, "Member 'UKeyGuide_Gamepad2_C::KeyGuide_Item_ChangeLockOn_L' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad2_C, KeyGuide_Item_ChangeLockOn_R) == 0x000288, "Member 'UKeyGuide_Gamepad2_C::KeyGuide_Item_ChangeLockOn_R' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad2_C, KeyGuide_Item_Moves_1) == 0x000290, "Member 'UKeyGuide_Gamepad2_C::KeyGuide_Item_Moves_1' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad2_C, VerticalBox_2) == 0x000298, "Member 'UKeyGuide_Gamepad2_C::VerticalBox_2' has a wrong offset!");

}

