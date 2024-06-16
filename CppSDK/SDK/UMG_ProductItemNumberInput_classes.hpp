#pragma once

 

// Package: UMG_ProductItemNumberInput

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "NumberInputBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_ProductItemNumberInput.UMG_ProductItemNumberInput_C
// 0x0020 (0x0300 - 0x02E0)
class UUMG_ProductItemNumberInput_C final : public UNumberInputBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UMG_ProductItemNumberInput_C;       // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Minus;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Plus;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPurchaseCount;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_ProductItemNumberInput(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_ProductItemNumberInput_C">();
	}
	static class UUMG_ProductItemNumberInput_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_ProductItemNumberInput_C>();
	}
};
static_assert(alignof(UUMG_ProductItemNumberInput_C) == 0x000008, "Wrong alignment on UUMG_ProductItemNumberInput_C");
static_assert(sizeof(UUMG_ProductItemNumberInput_C) == 0x000300, "Wrong size on UUMG_ProductItemNumberInput_C");
static_assert(offsetof(UUMG_ProductItemNumberInput_C, UberGraphFrame_UMG_ProductItemNumberInput_C) == 0x0002E0, "Member 'UUMG_ProductItemNumberInput_C::UberGraphFrame_UMG_ProductItemNumberInput_C' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemNumberInput_C, Btn_Minus) == 0x0002E8, "Member 'UUMG_ProductItemNumberInput_C::Btn_Minus' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemNumberInput_C, Btn_Plus) == 0x0002F0, "Member 'UUMG_ProductItemNumberInput_C::Btn_Plus' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemNumberInput_C, TxtPurchaseCount) == 0x0002F8, "Member 'UUMG_ProductItemNumberInput_C::TxtPurchaseCount' has a wrong offset!");

}

