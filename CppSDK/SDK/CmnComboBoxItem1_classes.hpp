#pragma once

 

// Package: CmnComboBoxItem1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnComboBoxItem1.CmnComboBoxItem1_C
// 0x0038 (0x02B0 - 0x0278)
class UCmnComboBoxItem1_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ListText;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SizeGrp;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         InSizeX;                                           // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_909C[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   InText;                                            // 0x0298(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_CmnComboBoxItem1(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnComboBoxItem1_C">();
	}
	static class UCmnComboBoxItem1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnComboBoxItem1_C>();
	}
};
static_assert(alignof(UCmnComboBoxItem1_C) == 0x000008, "Wrong alignment on UCmnComboBoxItem1_C");
static_assert(sizeof(UCmnComboBoxItem1_C) == 0x0002B0, "Wrong size on UCmnComboBoxItem1_C");
static_assert(offsetof(UCmnComboBoxItem1_C, UberGraphFrame) == 0x000278, "Member 'UCmnComboBoxItem1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnComboBoxItem1_C, ListText) == 0x000280, "Member 'UCmnComboBoxItem1_C::ListText' has a wrong offset!");
static_assert(offsetof(UCmnComboBoxItem1_C, SizeGrp) == 0x000288, "Member 'UCmnComboBoxItem1_C::SizeGrp' has a wrong offset!");
static_assert(offsetof(UCmnComboBoxItem1_C, InSizeX) == 0x000290, "Member 'UCmnComboBoxItem1_C::InSizeX' has a wrong offset!");
static_assert(offsetof(UCmnComboBoxItem1_C, InText) == 0x000298, "Member 'UCmnComboBoxItem1_C::InText' has a wrong offset!");

}

