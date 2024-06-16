#pragma once

 

// Package: WBP_SkillTreeBranchSwitcher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C
// 0x0028 (0x02A0 - 0x0278)
class UWBP_SkillTreeBranchSwitcher_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Line01;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line03;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_58;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESkillTreeHorizonBranchType                   BrunchType;                                        // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_SkillTreeBranchSwitcher(int32 EntryPoint);
	void SetBrunchType(ESkillTreeHorizonBranchType Param_BrunchType);
	void PreConstruct(bool IsDesignTime);
	void Init(ESkillTreeHorizonBranchType InBrunchType);
	void Set_Brunch_Color(bool Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SkillTreeBranchSwitcher_C">();
	}
	static class UWBP_SkillTreeBranchSwitcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SkillTreeBranchSwitcher_C>();
	}
};
static_assert(alignof(UWBP_SkillTreeBranchSwitcher_C) == 0x000008, "Wrong alignment on UWBP_SkillTreeBranchSwitcher_C");
static_assert(sizeof(UWBP_SkillTreeBranchSwitcher_C) == 0x0002A0, "Wrong size on UWBP_SkillTreeBranchSwitcher_C");
static_assert(offsetof(UWBP_SkillTreeBranchSwitcher_C, UberGraphFrame) == 0x000278, "Member 'UWBP_SkillTreeBranchSwitcher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeBranchSwitcher_C, Line01) == 0x000280, "Member 'UWBP_SkillTreeBranchSwitcher_C::Line01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeBranchSwitcher_C, Line03) == 0x000288, "Member 'UWBP_SkillTreeBranchSwitcher_C::Line03' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeBranchSwitcher_C, WidgetSwitcher_58) == 0x000290, "Member 'UWBP_SkillTreeBranchSwitcher_C::WidgetSwitcher_58' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeBranchSwitcher_C, BrunchType) == 0x000298, "Member 'UWBP_SkillTreeBranchSwitcher_C::BrunchType' has a wrong offset!");

}

