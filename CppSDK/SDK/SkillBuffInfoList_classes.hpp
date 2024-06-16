#pragma once

 

// Package: SkillBuffInfoList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillBuffInfoList.SkillBuffInfoList_C
// 0x0020 (0x0298 - 0x0278)
class USkillBuffInfoList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VBoxForBuffInfoItem;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SkillId;                                           // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ListItemNumMax;                                    // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SkillBuffInfoList(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Init();
	void SetSKill(int32 InSkillId, int32 InSkillLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillBuffInfoList_C">();
	}
	static class USkillBuffInfoList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillBuffInfoList_C>();
	}
};
static_assert(alignof(USkillBuffInfoList_C) == 0x000008, "Wrong alignment on USkillBuffInfoList_C");
static_assert(sizeof(USkillBuffInfoList_C) == 0x000298, "Wrong size on USkillBuffInfoList_C");
static_assert(offsetof(USkillBuffInfoList_C, UberGraphFrame) == 0x000278, "Member 'USkillBuffInfoList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillBuffInfoList_C, VBoxForBuffInfoItem) == 0x000280, "Member 'USkillBuffInfoList_C::VBoxForBuffInfoItem' has a wrong offset!");
static_assert(offsetof(USkillBuffInfoList_C, SkillId) == 0x000288, "Member 'USkillBuffInfoList_C::SkillId' has a wrong offset!");
static_assert(offsetof(USkillBuffInfoList_C, SkillLevel) == 0x00028C, "Member 'USkillBuffInfoList_C::SkillLevel' has a wrong offset!");
static_assert(offsetof(USkillBuffInfoList_C, ListItemNumMax) == 0x000290, "Member 'USkillBuffInfoList_C::ListItemNumMax' has a wrong offset!");

}

