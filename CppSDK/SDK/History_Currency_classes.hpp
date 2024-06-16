#pragma once

 

// Package: History_Currency

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass History_Currency.History_Currency_C
// 0x0060 (0x02D8 - 0x0278)
class UHistory_Currency_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Icon_Free;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineV2;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineV3;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BP_Amount;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BP_Caution;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_RO_Amount01;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_RO_Amount02;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_RO_Label01;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_RO_Label02;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBHistoryType                                HistoryType;                                       // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Separate_Paid_Free;                                // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_History_Currency(int32 EntryPoint);
	void Construct();
	void SwitchShopType(ESBHistoryType Param_HistoryType);
	void SetAmount(int32 Paid, int32 Free);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"History_Currency_C">();
	}
	static class UHistory_Currency_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHistory_Currency_C>();
	}
};
static_assert(alignof(UHistory_Currency_C) == 0x000008, "Wrong alignment on UHistory_Currency_C");
static_assert(sizeof(UHistory_Currency_C) == 0x0002D8, "Wrong size on UHistory_Currency_C");
static_assert(offsetof(UHistory_Currency_C, UberGraphFrame) == 0x000278, "Member 'UHistory_Currency_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHistory_Currency_C, Icon_Free) == 0x000280, "Member 'UHistory_Currency_C::Icon_Free' has a wrong offset!");
static_assert(offsetof(UHistory_Currency_C, LineV2) == 0x000288, "Member 'UHistory_Currency_C::LineV2' has a wrong offset!");
static_assert(offsetof(UHistory_Currency_C, LineV3) == 0x000290, "Member 'UHistory_Currency_C::LineV3' has a wrong offset!");
static_assert(offsetof(UHistory_Currency_C, Switcher) == 0x000298, "Member 'UHistory_Currency_C::Switcher' has a wrong offset!");
static_assert(offsetof(UHistory_Currency_C, Txt_BP_Amount) == 0x0002A0, "Member 'UHistory_Currency_C::Txt_BP_Amount' has a wrong offset!");
static_assert(offsetof(UHistory_Currency_C, Txt_BP_Caution) == 0x0002A8, "Member 'UHistory_Currency_C::Txt_BP_Caution' has a wrong offset!");
static_assert(offsetof(UHistory_Currency_C, Txt_RO_Amount01) == 0x0002B0, "Member 'UHistory_Currency_C::Txt_RO_Amount01' has a wrong offset!");
static_assert(offsetof(UHistory_Currency_C, Txt_RO_Amount02) == 0x0002B8, "Member 'UHistory_Currency_C::Txt_RO_Amount02' has a wrong offset!");
static_assert(offsetof(UHistory_Currency_C, Txt_RO_Label01) == 0x0002C0, "Member 'UHistory_Currency_C::Txt_RO_Label01' has a wrong offset!");
static_assert(offsetof(UHistory_Currency_C, Txt_RO_Label02) == 0x0002C8, "Member 'UHistory_Currency_C::Txt_RO_Label02' has a wrong offset!");
static_assert(offsetof(UHistory_Currency_C, HistoryType) == 0x0002D0, "Member 'UHistory_Currency_C::HistoryType' has a wrong offset!");
static_assert(offsetof(UHistory_Currency_C, Separate_Paid_Free) == 0x0002D1, "Member 'UHistory_Currency_C::Separate_Paid_Free' has a wrong offset!");

}

