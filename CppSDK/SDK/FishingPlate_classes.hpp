#pragma once

 

// Package: FishingPlate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FishingPlate.FishingPlate_C
// 0x0068 (0x02E0 - 0x0278)
class UFishingPlate_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Fishing_BG01;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line01;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line02;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewFishIcon;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewSizeIcon;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherItemOrLength;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_FishLength;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_FishLength_1;                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_FishName;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Size;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             StartResultPlateAnim;                              // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void StartResultPlateAnim__DelegateSignature();
	void ExecuteUbergraph_FishingPlate(int32 EntryPoint);
	void Construct();
	void SetFishPlate(const class FString& Param_Name, const class FString& Description, float Length, float Weight, bool Show, int32 ItemAmount, bool New, bool NewRecord, bool IsBig);
	void IsItemBox(const class FString& Param_Name, bool* TrueIsItemBox);
	void SwitchItemBox(bool TrueIsItemBox, int32 ItemAmount);
	void Stab_GetSize(bool* TrueIsBig);
	void Set_Big_Small(bool IsBig);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FishingPlate_C">();
	}
	static class UFishingPlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFishingPlate_C>();
	}
};
static_assert(alignof(UFishingPlate_C) == 0x000008, "Wrong alignment on UFishingPlate_C");
static_assert(sizeof(UFishingPlate_C) == 0x0002E0, "Wrong size on UFishingPlate_C");
static_assert(offsetof(UFishingPlate_C, UberGraphFrame) == 0x000278, "Member 'UFishingPlate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFishingPlate_C, Fishing_BG01) == 0x000280, "Member 'UFishingPlate_C::Fishing_BG01' has a wrong offset!");
static_assert(offsetof(UFishingPlate_C, Line01) == 0x000288, "Member 'UFishingPlate_C::Line01' has a wrong offset!");
static_assert(offsetof(UFishingPlate_C, Line02) == 0x000290, "Member 'UFishingPlate_C::Line02' has a wrong offset!");
static_assert(offsetof(UFishingPlate_C, NewFishIcon) == 0x000298, "Member 'UFishingPlate_C::NewFishIcon' has a wrong offset!");
static_assert(offsetof(UFishingPlate_C, NewSizeIcon) == 0x0002A0, "Member 'UFishingPlate_C::NewSizeIcon' has a wrong offset!");
static_assert(offsetof(UFishingPlate_C, SwitcherItemOrLength) == 0x0002A8, "Member 'UFishingPlate_C::SwitcherItemOrLength' has a wrong offset!");
static_assert(offsetof(UFishingPlate_C, TextBlock_FishLength) == 0x0002B0, "Member 'UFishingPlate_C::TextBlock_FishLength' has a wrong offset!");
static_assert(offsetof(UFishingPlate_C, TextBlock_FishLength_1) == 0x0002B8, "Member 'UFishingPlate_C::TextBlock_FishLength_1' has a wrong offset!");
static_assert(offsetof(UFishingPlate_C, TextBlock_FishName) == 0x0002C0, "Member 'UFishingPlate_C::TextBlock_FishName' has a wrong offset!");
static_assert(offsetof(UFishingPlate_C, TextBlock_Size) == 0x0002C8, "Member 'UFishingPlate_C::TextBlock_Size' has a wrong offset!");
static_assert(offsetof(UFishingPlate_C, StartResultPlateAnim) == 0x0002D0, "Member 'UFishingPlate_C::StartResultPlateAnim' has a wrong offset!");

}

