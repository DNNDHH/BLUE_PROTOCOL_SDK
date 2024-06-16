#pragma once

 

// Package: Effect_Ability

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Effect_Ability.Effect_Ability_C
// 0x00A0 (0x0318 - 0x0278)
class UEffect_Ability_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    Txt_EffectName;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Type;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Value;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBCharaEquipType                             EquipPosition;                                     // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_49A6[0x3];                                     // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Values;                                            // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 String;                                            // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Fixed_C*       ToolTipC;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Variable_C*    ToolTipB;                                          // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NumOnlyMode;                                       // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_49A7[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ToolTipName;                                       // 0x02C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ToolTipType;                                       // 0x02E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ToolTipDesc;                                       // 0x02F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ToolTipNum;                                        // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Effect_Ability(int32 EntryPoint);
	void Construct();
	void SetToolTipBType(const class FText& InName, const class FText& InDesc);
	void SetToolTipCType(const class FText& InName, const class FText& Type, const class FText& InDesc);
	class UWidget* Get_Txt_EffectName_ToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Effect_Ability_C">();
	}
	static class UEffect_Ability_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEffect_Ability_C>();
	}
};
static_assert(alignof(UEffect_Ability_C) == 0x000008, "Wrong alignment on UEffect_Ability_C");
static_assert(sizeof(UEffect_Ability_C) == 0x000318, "Wrong size on UEffect_Ability_C");
static_assert(offsetof(UEffect_Ability_C, UberGraphFrame) == 0x000278, "Member 'UEffect_Ability_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEffect_Ability_C, Txt_EffectName) == 0x000280, "Member 'UEffect_Ability_C::Txt_EffectName' has a wrong offset!");
static_assert(offsetof(UEffect_Ability_C, Txt_Type) == 0x000288, "Member 'UEffect_Ability_C::Txt_Type' has a wrong offset!");
static_assert(offsetof(UEffect_Ability_C, Txt_Value) == 0x000290, "Member 'UEffect_Ability_C::Txt_Value' has a wrong offset!");
static_assert(offsetof(UEffect_Ability_C, EquipPosition) == 0x000298, "Member 'UEffect_Ability_C::EquipPosition' has a wrong offset!");
static_assert(offsetof(UEffect_Ability_C, Values) == 0x00029C, "Member 'UEffect_Ability_C::Values' has a wrong offset!");
static_assert(offsetof(UEffect_Ability_C, String) == 0x0002A0, "Member 'UEffect_Ability_C::String' has a wrong offset!");
static_assert(offsetof(UEffect_Ability_C, ToolTipC) == 0x0002B0, "Member 'UEffect_Ability_C::ToolTipC' has a wrong offset!");
static_assert(offsetof(UEffect_Ability_C, ToolTipB) == 0x0002B8, "Member 'UEffect_Ability_C::ToolTipB' has a wrong offset!");
static_assert(offsetof(UEffect_Ability_C, NumOnlyMode) == 0x0002C0, "Member 'UEffect_Ability_C::NumOnlyMode' has a wrong offset!");
static_assert(offsetof(UEffect_Ability_C, ToolTipName) == 0x0002C8, "Member 'UEffect_Ability_C::ToolTipName' has a wrong offset!");
static_assert(offsetof(UEffect_Ability_C, ToolTipType) == 0x0002E0, "Member 'UEffect_Ability_C::ToolTipType' has a wrong offset!");
static_assert(offsetof(UEffect_Ability_C, ToolTipDesc) == 0x0002F8, "Member 'UEffect_Ability_C::ToolTipDesc' has a wrong offset!");
static_assert(offsetof(UEffect_Ability_C, ToolTipNum) == 0x000310, "Member 'UEffect_Ability_C::ToolTipNum' has a wrong offset!");

}

