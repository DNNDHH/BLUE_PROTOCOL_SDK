#pragma once

 

// Package: EventShopLearningInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShopLearningInfo.EventShopLearningInfo_C
// 0x0078 (0x02F0 - 0x0278)
class UEventShopLearningInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Target;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            ToolTip;                                           // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillId;                                           // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63DC[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ConditionsText01;                                  // 0x0298(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ConditionsText02;                                  // 0x02B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ClassText;                                         // 0x02D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBClassType                                  ClassType;                                         // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EventShopLearningInfo(int32 EntryPoint);
	void Destruct();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetSkillId(int32 Param_SkillId, bool* Exchangeable);
	void GetTextSkillConditions(int32 ConditionSkillId, int32 ConditionSkillLv, class FText* Skill);
	void GetTextClassLevel(ESBClassType Param_ClassType, int32 ClassLevel, class FText* Param_ClassText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShopLearningInfo_C">();
	}
	static class UEventShopLearningInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShopLearningInfo_C>();
	}
};
static_assert(alignof(UEventShopLearningInfo_C) == 0x000008, "Wrong alignment on UEventShopLearningInfo_C");
static_assert(sizeof(UEventShopLearningInfo_C) == 0x0002F0, "Wrong size on UEventShopLearningInfo_C");
static_assert(offsetof(UEventShopLearningInfo_C, UberGraphFrame) == 0x000278, "Member 'UEventShopLearningInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventShopLearningInfo_C, Target) == 0x000280, "Member 'UEventShopLearningInfo_C::Target' has a wrong offset!");
static_assert(offsetof(UEventShopLearningInfo_C, ToolTip) == 0x000288, "Member 'UEventShopLearningInfo_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UEventShopLearningInfo_C, SkillId) == 0x000290, "Member 'UEventShopLearningInfo_C::SkillId' has a wrong offset!");
static_assert(offsetof(UEventShopLearningInfo_C, ConditionsText01) == 0x000298, "Member 'UEventShopLearningInfo_C::ConditionsText01' has a wrong offset!");
static_assert(offsetof(UEventShopLearningInfo_C, ConditionsText02) == 0x0002B0, "Member 'UEventShopLearningInfo_C::ConditionsText02' has a wrong offset!");
static_assert(offsetof(UEventShopLearningInfo_C, MasterDataManager) == 0x0002C8, "Member 'UEventShopLearningInfo_C::MasterDataManager' has a wrong offset!");
static_assert(offsetof(UEventShopLearningInfo_C, ClassText) == 0x0002D0, "Member 'UEventShopLearningInfo_C::ClassText' has a wrong offset!");
static_assert(offsetof(UEventShopLearningInfo_C, ClassType) == 0x0002E8, "Member 'UEventShopLearningInfo_C::ClassType' has a wrong offset!");

}

