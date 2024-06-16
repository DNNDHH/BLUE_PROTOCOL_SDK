#pragma once

 

// Package: SkillTree_SkillIconPassive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkillTree_SkillIconBase_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillTree_SkillIconPassive.SkillTree_SkillIconPassive_C
// 0x0020 (0x03A8 - 0x0388)
class USkillTree_SkillIconPassive_C final : public USkillTree_SkillIconBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SkillTree_SkillIconPassive_C;       // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_142;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_EquipmentIcon_1;                             // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageIcon1;                                        // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SkillTree_SkillIconPassive(int32 EntryPoint);
	void Construct();
	void SetIconEmpty();
	void SetEquipmentIconVisibility(bool InIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillTree_SkillIconPassive_C">();
	}
	static class USkillTree_SkillIconPassive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillTree_SkillIconPassive_C>();
	}
};
static_assert(alignof(USkillTree_SkillIconPassive_C) == 0x000008, "Wrong alignment on USkillTree_SkillIconPassive_C");
static_assert(sizeof(USkillTree_SkillIconPassive_C) == 0x0003A8, "Wrong size on USkillTree_SkillIconPassive_C");
static_assert(offsetof(USkillTree_SkillIconPassive_C, UberGraphFrame_SkillTree_SkillIconPassive_C) == 0x000388, "Member 'USkillTree_SkillIconPassive_C::UberGraphFrame_SkillTree_SkillIconPassive_C' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconPassive_C, Image_142) == 0x000390, "Member 'USkillTree_SkillIconPassive_C::Image_142' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconPassive_C, Image_EquipmentIcon_1) == 0x000398, "Member 'USkillTree_SkillIconPassive_C::Image_EquipmentIcon_1' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconPassive_C, ImageIcon1) == 0x0003A0, "Member 'USkillTree_SkillIconPassive_C::ImageIcon1' has a wrong offset!");

}

