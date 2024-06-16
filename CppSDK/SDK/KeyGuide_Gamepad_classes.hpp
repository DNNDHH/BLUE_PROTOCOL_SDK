#pragma once

 

// Package: KeyGuide_Gamepad

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeyGuide_Gamepad.KeyGuide_Gamepad_C
// 0x00B8 (0x0330 - 0x0278)
class UKeyGuide_Gamepad_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    DodgeAttack;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconImage;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ImaginArts2;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ImagineArts;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    JumpAttack;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    MainAction;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_DodgeAttack;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Imagine1;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Imagine2;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_JumpAttack;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Skill1;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Skill2;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Skill3;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Skill4;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Special;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Skill3;                                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Skill4;                                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SkillA;                                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SkillB;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SpecialSkill;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SubAction;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_KeyGuide_Gamepad(int32 EntryPoint);
	void ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData);
	void MakePare(TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>* Pair1);
	void SetTextVisible(ESkillActionPosition SkillActionPosition, bool Param_IsVisible);
	void InitializeVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyGuide_Gamepad_C">();
	}
	static class UKeyGuide_Gamepad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyGuide_Gamepad_C>();
	}
};
static_assert(alignof(UKeyGuide_Gamepad_C) == 0x000008, "Wrong alignment on UKeyGuide_Gamepad_C");
static_assert(sizeof(UKeyGuide_Gamepad_C) == 0x000330, "Wrong size on UKeyGuide_Gamepad_C");
static_assert(offsetof(UKeyGuide_Gamepad_C, UberGraphFrame) == 0x000278, "Member 'UKeyGuide_Gamepad_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, DodgeAttack) == 0x000280, "Member 'UKeyGuide_Gamepad_C::DodgeAttack' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, IconImage) == 0x000288, "Member 'UKeyGuide_Gamepad_C::IconImage' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, ImaginArts2) == 0x000290, "Member 'UKeyGuide_Gamepad_C::ImaginArts2' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, ImagineArts) == 0x000298, "Member 'UKeyGuide_Gamepad_C::ImagineArts' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, JumpAttack) == 0x0002A0, "Member 'UKeyGuide_Gamepad_C::JumpAttack' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, Line1) == 0x0002A8, "Member 'UKeyGuide_Gamepad_C::Line1' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, MainAction) == 0x0002B0, "Member 'UKeyGuide_Gamepad_C::MainAction' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, SizeBox_DodgeAttack) == 0x0002B8, "Member 'UKeyGuide_Gamepad_C::SizeBox_DodgeAttack' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, SizeBox_Imagine1) == 0x0002C0, "Member 'UKeyGuide_Gamepad_C::SizeBox_Imagine1' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, SizeBox_Imagine2) == 0x0002C8, "Member 'UKeyGuide_Gamepad_C::SizeBox_Imagine2' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, SizeBox_JumpAttack) == 0x0002D0, "Member 'UKeyGuide_Gamepad_C::SizeBox_JumpAttack' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, SizeBox_Skill1) == 0x0002D8, "Member 'UKeyGuide_Gamepad_C::SizeBox_Skill1' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, SizeBox_Skill2) == 0x0002E0, "Member 'UKeyGuide_Gamepad_C::SizeBox_Skill2' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, SizeBox_Skill3) == 0x0002E8, "Member 'UKeyGuide_Gamepad_C::SizeBox_Skill3' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, SizeBox_Skill4) == 0x0002F0, "Member 'UKeyGuide_Gamepad_C::SizeBox_Skill4' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, SizeBox_Special) == 0x0002F8, "Member 'UKeyGuide_Gamepad_C::SizeBox_Special' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, Skill3) == 0x000300, "Member 'UKeyGuide_Gamepad_C::Skill3' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, Skill4) == 0x000308, "Member 'UKeyGuide_Gamepad_C::Skill4' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, SkillA) == 0x000310, "Member 'UKeyGuide_Gamepad_C::SkillA' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, SkillB) == 0x000318, "Member 'UKeyGuide_Gamepad_C::SkillB' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, SpecialSkill) == 0x000320, "Member 'UKeyGuide_Gamepad_C::SpecialSkill' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Gamepad_C, SubAction) == 0x000328, "Member 'UKeyGuide_Gamepad_C::SubAction' has a wrong offset!");

}

