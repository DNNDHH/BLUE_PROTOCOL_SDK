#pragma once

 

// Package: SkillBuffInfoItem

#include "Basic.hpp"

#include "BuffIconAssetData_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillBuffInfoItem.SkillBuffInfoItem_C
// 0x0040 (0x02B8 - 0x0278)
class USkillBuffInfoItem_C final : public UUserWidget
{
public:
	class UTextBlock*                             BuffDescTxt;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BuffIcon;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine01;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FBuffIconAssetData                     SkillBuffData;                                     // 0x0290(0x0028)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetSkillBuff(const struct FBuffIconAssetData& InSkillBuffData);
	void SetOverlineVisibility(bool InIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillBuffInfoItem_C">();
	}
	static class USkillBuffInfoItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillBuffInfoItem_C>();
	}
};
static_assert(alignof(USkillBuffInfoItem_C) == 0x000008, "Wrong alignment on USkillBuffInfoItem_C");
static_assert(sizeof(USkillBuffInfoItem_C) == 0x0002B8, "Wrong size on USkillBuffInfoItem_C");
static_assert(offsetof(USkillBuffInfoItem_C, BuffDescTxt) == 0x000278, "Member 'USkillBuffInfoItem_C::BuffDescTxt' has a wrong offset!");
static_assert(offsetof(USkillBuffInfoItem_C, BuffIcon) == 0x000280, "Member 'USkillBuffInfoItem_C::BuffIcon' has a wrong offset!");
static_assert(offsetof(USkillBuffInfoItem_C, HLine01) == 0x000288, "Member 'USkillBuffInfoItem_C::HLine01' has a wrong offset!");
static_assert(offsetof(USkillBuffInfoItem_C, SkillBuffData) == 0x000290, "Member 'USkillBuffInfoItem_C::SkillBuffData' has a wrong offset!");

}

