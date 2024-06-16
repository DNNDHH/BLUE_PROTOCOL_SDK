#pragma once

 

// Package: WBP_SkillTreeHorizonLevelBG

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C
// 0x0038 (0x02B0 - 0x0278)
class UWBP_SkillTreeHorizonLevelBG_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg01;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG02;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_95;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_51;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Select;                                            // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B98[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Level;                                             // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Init(bool IsSelect, int32 Param_Level);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SkillTreeHorizonLevelBG_C">();
	}
	static class UWBP_SkillTreeHorizonLevelBG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SkillTreeHorizonLevelBG_C>();
	}
};
static_assert(alignof(UWBP_SkillTreeHorizonLevelBG_C) == 0x000008, "Wrong alignment on UWBP_SkillTreeHorizonLevelBG_C");
static_assert(sizeof(UWBP_SkillTreeHorizonLevelBG_C) == 0x0002B0, "Wrong size on UWBP_SkillTreeHorizonLevelBG_C");
static_assert(offsetof(UWBP_SkillTreeHorizonLevelBG_C, UberGraphFrame) == 0x000278, "Member 'UWBP_SkillTreeHorizonLevelBG_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizonLevelBG_C, Bg01) == 0x000280, "Member 'UWBP_SkillTreeHorizonLevelBG_C::Bg01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizonLevelBG_C, BG02) == 0x000288, "Member 'UWBP_SkillTreeHorizonLevelBG_C::BG02' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizonLevelBG_C, SBRuntimeTextBlock) == 0x000290, "Member 'UWBP_SkillTreeHorizonLevelBG_C::SBRuntimeTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizonLevelBG_C, SBRuntimeTextBlock_95) == 0x000298, "Member 'UWBP_SkillTreeHorizonLevelBG_C::SBRuntimeTextBlock_95' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizonLevelBG_C, WidgetSwitcher_51) == 0x0002A0, "Member 'UWBP_SkillTreeHorizonLevelBG_C::WidgetSwitcher_51' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizonLevelBG_C, Select) == 0x0002A8, "Member 'UWBP_SkillTreeHorizonLevelBG_C::Select' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeHorizonLevelBG_C, Level) == 0x0002AC, "Member 'UWBP_SkillTreeHorizonLevelBG_C::Level' has a wrong offset!");

}

