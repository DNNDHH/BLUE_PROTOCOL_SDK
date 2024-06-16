#pragma once

 

// Package: KeyGuide_Gamepad_OfflineBattle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeyGuide_Gamepad_OfflineBattle.KeyGuide_Gamepad_OfflineBattle_C
// 0x0058 (0x02D0 - 0x0278)
class UKeyGuide_Gamepad_OfflineBattle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    DodgeAttack;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconImage;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    JumpAttack;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    MainAction;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_DodgeAttack;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_JumpAttack;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Skill1;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SkillA;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SubAction;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_KeyGuide_Gamepad_OfflineBattle(int32 EntryPoint);
	void ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData);
	void MakePare(TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>* Pair1);
	void SetTextVisible(ESkillActionPosition SkillActionPosition, bool Param_IsVisible);
	void InitializeVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyGuide_Gamepad_OfflineBattle_C">();
	}
	static class UKeyGuide_Gamepad_OfflineBattle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyGuide_Gamepad_OfflineBattle_C>();
	}
};
static_assert(alignof(UKeyGuide_Gamepad_OfflineBattle_C) == 0x000008, "Wrong alignment on UKeyGuide_Gamepad_OfflineBattle_C");
static_assert(sizeof(UKeyGuide_Gamepad_OfflineBattle_C) == 0x0002D0, "Wrong size on UKeyGuide_Gamepad_OfflineBattle_C");
static_assert(offsetof(UKeyGuide_Gamepad_OfflineBattle_C, UberGraphFrame) == 0x000278, "Member 'UKeyGuide_Gamepad_OfflineBattle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_OfflineBattle_C, DodgeAttack) == 0x000280, "Member 'UKeyGuide_Gamepad_OfflineBattle_C::DodgeAttack' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_OfflineBattle_C, IconImage) == 0x000288, "Member 'UKeyGuide_Gamepad_OfflineBattle_C::IconImage' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_OfflineBattle_C, JumpAttack) == 0x000290, "Member 'UKeyGuide_Gamepad_OfflineBattle_C::JumpAttack' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_OfflineBattle_C, Line1) == 0x000298, "Member 'UKeyGuide_Gamepad_OfflineBattle_C::Line1' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_OfflineBattle_C, MainAction) == 0x0002A0, "Member 'UKeyGuide_Gamepad_OfflineBattle_C::MainAction' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_OfflineBattle_C, SizeBox_DodgeAttack) == 0x0002A8, "Member 'UKeyGuide_Gamepad_OfflineBattle_C::SizeBox_DodgeAttack' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_OfflineBattle_C, SizeBox_JumpAttack) == 0x0002B0, "Member 'UKeyGuide_Gamepad_OfflineBattle_C::SizeBox_JumpAttack' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_OfflineBattle_C, SizeBox_Skill1) == 0x0002B8, "Member 'UKeyGuide_Gamepad_OfflineBattle_C::SizeBox_Skill1' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_OfflineBattle_C, SkillA) == 0x0002C0, "Member 'UKeyGuide_Gamepad_OfflineBattle_C::SkillA' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_OfflineBattle_C, SubAction) == 0x0002C8, "Member 'UKeyGuide_Gamepad_OfflineBattle_C::SubAction' has a wrong offset!");

}

