#pragma once

 

// Package: Effect_Drink

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Effect_Drink.Effect_Drink_C
// 0x0040 (0x02B8 - 0x0278)
class UEffect_Drink_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_Value;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Sw_TextSwitch;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Name;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Ready;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Value;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ValueType;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_56E1[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ValueTypeId;                                       // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Effect_Drink(int32 EntryPoint);
	void NonAct_iveData(const class FString& InString);
	void ActiveData(const class FString& Param_Name, float Value, ESBLiquidMemoryEfficacyValueType EffucaryValueType);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Effect_Drink_C">();
	}
	static class UEffect_Drink_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEffect_Drink_C>();
	}
};
static_assert(alignof(UEffect_Drink_C) == 0x000008, "Wrong alignment on UEffect_Drink_C");
static_assert(sizeof(UEffect_Drink_C) == 0x0002B8, "Wrong size on UEffect_Drink_C");
static_assert(offsetof(UEffect_Drink_C, UberGraphFrame) == 0x000278, "Member 'UEffect_Drink_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEffect_Drink_C, HorizontalBox_Value) == 0x000280, "Member 'UEffect_Drink_C::HorizontalBox_Value' has a wrong offset!");
static_assert(offsetof(UEffect_Drink_C, Sw_TextSwitch) == 0x000288, "Member 'UEffect_Drink_C::Sw_TextSwitch' has a wrong offset!");
static_assert(offsetof(UEffect_Drink_C, Txt_Name) == 0x000290, "Member 'UEffect_Drink_C::Txt_Name' has a wrong offset!");
static_assert(offsetof(UEffect_Drink_C, Txt_Ready) == 0x000298, "Member 'UEffect_Drink_C::Txt_Ready' has a wrong offset!");
static_assert(offsetof(UEffect_Drink_C, Txt_Value) == 0x0002A0, "Member 'UEffect_Drink_C::Txt_Value' has a wrong offset!");
static_assert(offsetof(UEffect_Drink_C, Txt_ValueType) == 0x0002A8, "Member 'UEffect_Drink_C::Txt_ValueType' has a wrong offset!");
static_assert(offsetof(UEffect_Drink_C, IsActive) == 0x0002B0, "Member 'UEffect_Drink_C::IsActive' has a wrong offset!");
static_assert(offsetof(UEffect_Drink_C, ValueTypeId) == 0x0002B4, "Member 'UEffect_Drink_C::ValueTypeId' has a wrong offset!");

}

