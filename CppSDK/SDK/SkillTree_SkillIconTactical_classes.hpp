#pragma once

 

// Package: SkillTree_SkillIconTactical

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkillTree_SkillIconBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillTree_SkillIconTactical.SkillTree_SkillIconTactical_C
// 0x0038 (0x03C0 - 0x0388)
class USkillTree_SkillIconTactical_C final : public USkillTree_SkillIconBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SkillTree_SkillIconTactical_C;      // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimUpgratable;                                    // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_142;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_EquipmentIcon;                               // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageElementIcon1;                                 // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageIcon1;                                        // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageIconBg1;                                      // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SkillTree_SkillIconTactical(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillTree_SkillIconTactical_C">();
	}
	static class USkillTree_SkillIconTactical_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillTree_SkillIconTactical_C>();
	}
};
static_assert(alignof(USkillTree_SkillIconTactical_C) == 0x000008, "Wrong alignment on USkillTree_SkillIconTactical_C");
static_assert(sizeof(USkillTree_SkillIconTactical_C) == 0x0003C0, "Wrong size on USkillTree_SkillIconTactical_C");
static_assert(offsetof(USkillTree_SkillIconTactical_C, UberGraphFrame_SkillTree_SkillIconTactical_C) == 0x000388, "Member 'USkillTree_SkillIconTactical_C::UberGraphFrame_SkillTree_SkillIconTactical_C' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconTactical_C, AnimUpgratable) == 0x000390, "Member 'USkillTree_SkillIconTactical_C::AnimUpgratable' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconTactical_C, Image_142) == 0x000398, "Member 'USkillTree_SkillIconTactical_C::Image_142' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconTactical_C, Image_EquipmentIcon) == 0x0003A0, "Member 'USkillTree_SkillIconTactical_C::Image_EquipmentIcon' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconTactical_C, ImageElementIcon1) == 0x0003A8, "Member 'USkillTree_SkillIconTactical_C::ImageElementIcon1' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconTactical_C, ImageIcon1) == 0x0003B0, "Member 'USkillTree_SkillIconTactical_C::ImageIcon1' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconTactical_C, ImageIconBg1) == 0x0003B8, "Member 'USkillTree_SkillIconTactical_C::ImageIconBg1' has a wrong offset!");

}

