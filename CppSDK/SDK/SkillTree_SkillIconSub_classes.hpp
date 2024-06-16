#pragma once

 

// Package: SkillTree_SkillIconSub

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkillTree_SkillIconBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillTree_SkillIconSub.SkillTree_SkillIconSub_C
// 0x0020 (0x03A8 - 0x0388)
class USkillTree_SkillIconSub_C final : public USkillTree_SkillIconBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SkillTree_SkillIconSub_C;           // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_142;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_EquipmentIcon;                               // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageIcon1;                                        // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SkillTree_SkillIconSub(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillTree_SkillIconSub_C">();
	}
	static class USkillTree_SkillIconSub_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillTree_SkillIconSub_C>();
	}
};
static_assert(alignof(USkillTree_SkillIconSub_C) == 0x000008, "Wrong alignment on USkillTree_SkillIconSub_C");
static_assert(sizeof(USkillTree_SkillIconSub_C) == 0x0003A8, "Wrong size on USkillTree_SkillIconSub_C");
static_assert(offsetof(USkillTree_SkillIconSub_C, UberGraphFrame_SkillTree_SkillIconSub_C) == 0x000388, "Member 'USkillTree_SkillIconSub_C::UberGraphFrame_SkillTree_SkillIconSub_C' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconSub_C, Image_142) == 0x000390, "Member 'USkillTree_SkillIconSub_C::Image_142' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconSub_C, Image_EquipmentIcon) == 0x000398, "Member 'USkillTree_SkillIconSub_C::Image_EquipmentIcon' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconSub_C, ImageIcon1) == 0x0003A0, "Member 'USkillTree_SkillIconSub_C::ImageIcon1' has a wrong offset!");

}

